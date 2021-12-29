#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct
{
	float x,y;
}DIEM;
void doctep(FILE *f,DIEM *d,int n)
{
	for(int i=1;i<=n;i++)
		fscanf(f,"%f%f",&d[i].x,&d[i].y);
	fclose(f);
}
void dem(DIEM *d,int n)
{
	int trong=0,ngoai=0;
	for(int i=1;i<=n;i++)
	{
		if(d[i].x*d[i].x + d[i].y*d[i].y < 5*5) trong++;
		else ngoai++;
	}
	 printf("\nso diem nam trong va ngoai duong tron (O,5)la:%d va %d",trong,ngoai);
	 printf("\nso doan thang trong duong tron la:%d",(trong*(trong-1))/2);
}
main()
{
	FILE *f;
	DIEM *d;
	int i,n;
	f=fopen("de8b1.txt","r");
	if(!f)
	{
		printf("kiem tra lai du lieu tep");
		exit(1);
	}
	fscanf(f,"%d\n",&n);
	d=(DIEM*) calloc((n+1),sizeof(DIEM));
	doctep(f,d,n);	
	printf("so diem:%.1d\n",n);
	for(i=1;i<=n;i++)
	printf("(%.1f, %.1f)\n",d[i].x,d[i].y);
	dem(d,n);
}
