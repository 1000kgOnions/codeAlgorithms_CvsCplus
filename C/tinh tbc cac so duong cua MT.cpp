#include<stdio.h>
#include<math.h>
int main ()
{
	float a[50][50],s=0;
	int m,n,i,j,d=0;
	printf("\n nhap so hang");
	scanf("%d",&m);
	printf("\n nhap so cot");
	scanf("%d",&n);
	
	for(i=1;i<=m;i++)
      for(j=1;j<=m;j++)
	  {
	  	printf("\na[%d,%d]=",i,j);
	  	scanf("%f",&a[i][j]);
	  	if(a[i][j]>0)
	  	{
	  		s += a[i][j];
	  		d++;
	    }
      }
	if(d==0)
	  printf("mT ko co so duong");  
	else
	  printf("TBC=%8.2f",s/d);	
}
