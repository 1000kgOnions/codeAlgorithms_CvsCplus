#include "stdio.h"
#include "stdlib.h"
#include "math.h"
void doctep(FILE *f,float *a,int m,int n)
{
	int i,j;
	for(i=1;i<=m;i++)
	    for(j=1;j<=n;j++)
	       fscanf(f,"%f",a+i*n+j);
	fclose(f);
}
void tbc(float *a,int m,int n)
{
	float tong=0;
	int d=0,i,j;
	for(i=1;i<=m;i++)
	    for(j=1;j<=n;j++)
	    {
		    if(*(a+i*n+j)>=-10 && *(a+i*n+j)<=-1)
	        {
	       	  tong+= *(a+i*n+j);
	       	  d++;
		    }
		}		   
		if(d==0)
		printf("khong co gia tri nao thuoc[-10,-1]");
		else
		printf("trung binh cong cac gia tri thuoc[-10,-1]=%.2f",tong/d);
}
void maxam(float *a,int m,int n)
{
	float max=0;
	int i,j;
	for(i=1;i<=m;i++)
	   for(j=1;j<=n;j++)
	    if(*(a+i*n+j)<0)
	   {
	      max=*(a+i*n+j);
	   }
	if(max==0) printf("\nma tran khong co so am");
	else
	{
		for(i=1;i<=m;i++)
	        for(j=1;j<=n;j++)
	          if(*(a+i*n+j)<0 && *(a+i*n+j)>max)
	          {
	          	max=*(a+i*n+j);
			  }
			  printf("\nmaxam cua MT la %f",max);
	}
}
main()
{
	int n,i,j,m;
	float *a;
	FILE *f;
	f=fopen("de6b1.txt","r");
	if(!f)
	{
		printf("kiem tra lai du lieu");
		exit(1);
	}
	fscanf(f,"%d%d",&m,&n);
	a=(float*) calloc((m+1)*(n+1),sizeof(float));
	doctep(f,a,m,n);
	printf("cap cua ma tran :%dx%d\n",m,n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		printf("%.1f\t",*(a+i*n+j));
		printf("\n");
	}
	tbc(a,m,n);
	maxam(a,m,n);	
}
