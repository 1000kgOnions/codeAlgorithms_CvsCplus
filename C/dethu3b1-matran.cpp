#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void doctep(FILE *f,int *a,int m,int n)
{
	for(int i=1;i<=m;i++)
	   for(int j=1;j<=n;j++)
	      fscanf(f,"%d",a+i*n +j);
	fclose(f);      
}
void matrandangbang(int *a,int m,int n)
{
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		printf("%.1d\t",*(a+i*n+j));  printf("\n");
    }
}
float TBC(int *a,int m,int n)
{
	int d=0,i,j,tong=0;
	for(int i=1;i<=m;i++)
	   for(int j=1;j<=n;j++)
	   	if(*(a+i*n+j)%2==0 && *(a+i*n+j)%3==1)
	   	{
	   	    tong += *(a+i*n+j);   d++;
		}
		if(d==0) return 0;
		else return (tong/d);
}
void tongtunghang(int *a,int m,int n)
{
	for(int i=1;i<=m;i++)
	{
		int s=0;
		for(int j=1;j<=n;j++)
		s += *(a+i*n+j);
		printf("\ntong cua hang %d la:%.2d",i,s);
	}
}
main()
{
	int m,n,i,j,*a;
	FILE *f;
	f=fopen("de3b1.txt","r");
	if(!f)
	{
		printf("kiem tra lai tep ");
		exit(1);
	}
	fscanf(f,"%d%d",&m,&n);
	a=(int*) calloc((m+1)*(n+1),sizeof(int));
	doctep(f,a,m,n);
	printf("cap cua matran:%dx%d\n",m,n);
    for( i=1;i<=m;i++)
	{
		for( j=1;j<=n;j++)
		printf("%.d\t",*(a+i*n+j));  printf("\n");
    }
	float tbc=TBC(a,m,n);
	if(tbc==0) printf("\nMT ko co so chan thoa man");
	else printf("\ntbc cac so chan thoa man la:%.2f",tbc);
	tongtunghang(a,m,n);
	f=fopen("de3b1.txt","a");
	for( i=1;i<=m;i++)
	{
		for( j=1;j<=n;j++)
		fprintf(f,"%.d\t",*(a+i*n+j));  fprintf(f,"\n");
	}
	fclose(f);
}
