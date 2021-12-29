#include "stdio.h"
#include "stdlib.h"
#include "math.h"
typedef struct
{
	float x,y;
} DIEM;
void doctep(FILE *f,DIEM *d,int n)
{
	for(int i=1;i<=n;i++)
	{
		fscanf(f,"%f%f",&d[i].x,&d[i].y);
	}
	fclose(f);
}
void timdiem(DIEM *d,int n)
{
	float max=0;
	int imax;
	for(int i=1;i<=n;i++)
	{
		if(d[i].x*d[i].x + d[i].y*d[i].y >max)
		     max=d[i].x*d[i].x + d[i].y*d[i].y;
		     imax=i;
	}
	printf("\nDiem xa goc toa do nhat la A%d:(%.1f , %.1f)",imax,d[imax].x,d[imax].y);
}
void duonggapkhuc(DIEM *d,int n)
{
	float s=0;
	for(int i=1;i<=n-1;i++)
    {   
	  s += sqrt(pow(d[i+1].x-d[i].x,2) +pow(d[i+1].y-d[i].y,2));
    }
    printf("\ndo dai duong gap khuc di qua cac diem la:%.2f",s);
}
main()
{
	int n,i;
	FILE *f;
	DIEM *d;
	f=fopen("de7b1.txt","r");
	if(!f)
	{
		printf("xem lai du lieu cua tep");
		exit(1);
	}
	fscanf(f,"%d\n",&n);
	d=(DIEM*) calloc((n+1),sizeof(DIEM));
	doctep(f,d,n);
	printf("so diem:%d\n",n);
	for(i=1;i<=n;i++)
	printf("\nA%d:(%.1f , %.1f)",i,d[i].x,d[i].y);
	timdiem(d,n);
	duonggapkhuc(d,n);
}
