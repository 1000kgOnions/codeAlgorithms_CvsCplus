#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void doctep(FILE *f, float *a,int m,int n)
{
	for(int i=1;i<=m;i++)
	    for(int j=1;j<=n;j++)
	    fscanf(f,"%f",a+i*n +j); //a+i*n +j=&a[i][j]
	fclose(f);
}
float TBCam(float *a,int m,int n)
{
	float tongam=0;  int k=0;
	for(int i=1;i<=m;i++)
	    for(int j=1;j<=n;j++)
	       if(*(a+i*n+j)<0)  {   tongam+=*(a+i*n+j); k++;}
	if(k==0) return 0;
	else return tongam/k;     
}
void maxam(float *a,int m,int n)
{
	float maxam=0;
	int h,c;
    for(int i=1;i<=m;i++)
	    for(int j=1;j<=n;j++){
	    if(*(a+i*n+j)<0) { maxam=*(a+i*n+j); h=i; c=j;}}
	if(maxam==0)
	   printf("MT khong co so am ");
	else
	{
		for( int i=1;i<=m;i++)
	        for( int j=1;j<=n;j++)
	          if(*(a+i*n+j)<0 && *(a+i*n+j)>maxam)
	          {
	          	maxam=*(a+i*n+j);h=i;c=j;
			  }
			  printf("\nmaxam cua MT la %f hang %d cot %d",maxam,h,c);
	}
}
main()
{
	int m,n,i,j;
	float *a;
	char tentep[50];
	printf("nhap ten tep du lieu:");
	gets(tentep);
	FILE *f;
	f=fopen(tentep,"r");
	if(!f)
	{
		printf("kiem tra lai tep %s",tentep);
		exit(1);
	}
	fscanf(f,"%d%d",&m,&n);
	a=(float*)calloc((m+1)*(n+1),sizeof(float));
	doctep(f,a,m,n);
	printf("cap ma tran=%dx%d\n",m,n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++) printf("%.1f\t",*(a+i*n+j));
		printf("\n");
	}
	float t=TBCam(a,m,n);
	if(t==0) printf("MT khong co so am ");
	else printf("TBC cac so am la %f",t);
	maxam(a,m,n);
}
