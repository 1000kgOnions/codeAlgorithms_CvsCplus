#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("nhap chu cai ");
    scanf("%c",&c);
    switch (c > 96 && c < 123) 
	{
        case 1:
            printf("day la chu cai");
            break;
        default:
            printf("ko phai la chu cai");
            break;
    }
}
