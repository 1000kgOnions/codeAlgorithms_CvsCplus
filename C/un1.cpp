#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d;
	float TBC,TBN;
	printf("\nnhap 4 so nguyen: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	TBC=(a+b+c+d)/4.0;
	TBN=pow(a*b*c*d,1.0/4);
	printf("\nTBC= %f",TBC);
	printf("\nTBN= %f",TBN);
}
