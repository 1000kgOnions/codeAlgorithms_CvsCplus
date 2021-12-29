#include<stdio.h>
#include<math.h>
int main()
{
	float a[50][50],b[50][50];
	int m,n,i,j;
	printf("\nnhap so hang,so cot: ");
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;++i)
	   for(j=1;j<=n;++j)
	   	{
	   		printf("a[%d][%d]=",i,j);
	   	scanf("%f",&a[i][j]); 
		}
		
		//tinh MT chuyen don vi
	for(i=1;i<=n;++i)
		for(j=1;j<=m;++j) 
	    	b[i][j]=a[j][i];
	//in MT ban dau
	printf("MT ban dau\n");
	for(i=1;i<=m;++i)
	{
		for(j=1;j<=n;++j)
		printf("%8.2f \t",a[i][j]);
		printf("\n\n");
	}
	//tinh MT chuyen don vi
	printf("MT chuyen don vi\n");
	for(i=1;i<=n;++i)
	{
		for(j=1;j<=m;++j) 
	    printf("%8.2f\t",b[i][j]);
		printf("\n\n");
	}
}


