#include "stdio.h"
#include "stdlib.h"
#include "math.h"
typedef struct
{
	float x,y;
}DIEM;
void doctep(DIEM *d,int n,FILE *f)
{
	for(int i=1;i<=n;i++)
	    {
	    	fscanf(f,"%f%f",&d[i].x,&d[i].y);
		}
	fclose(f);
}
void xanhat(DIEM *d,int n)
{
	float max=0;
	int imax,i;
	for(i=1;i<=n;i++)
	{
		if(d[i].x*d[i].x + d[i].y*d[i].y >max)
		{
			max=d[i].x*d[i].x + d[i].y*d[i].y;
			imax=i;
		}
	}
	printf("\nDiem xa goc toa do nhat la diem thu:%d,toado:(%.1f,%.1f)",imax,d[imax].x,d[imax].y);
}
void demdoanthang(DIEM *d,int n)
{
	int k=0,i;
	for(i=1;i<=n;i++)
	{
		if(d[i].x<0 && d[i].y<0)
			k++;
	}
	printf("\nso doan trong goc phan tu thu 3 la:%d",k*(k-1)/2);
}
main()
{
	int n;
	DIEM *d;
	FILE *f;
	f=fopen("de2b1.txt","r");
	if(!f)
	{
		printf("kiem tra lai du lieu tep");
		exit(1);
	}
	fscanf(f,"%d\n",&n);
	d=(DIEM*) calloc((n+1),sizeof(DIEM));
	doctep(d,n,f);
	printf("so diem:%d",n);
	for(int i=1;i<=n;i++)
	  printf("\n(%.1f,%.1f)",d[i].x,d[i].y);
	xanhat(d,n);
	demdoanthang(d,n);
}
