
#include<stdio.h>
#include<stdlib.h>
main()
{
    int n;
    printf("nhap vao so n= ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
        {
            for(int j=0;j<n-i;j++)
                printf(".");
            {
                for(int k=1;k<=2*i+1;k++)
                    printf("*");
                    printf("\n");
            }
        }
}
