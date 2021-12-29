#include "stdio.h"
#include "stdlib.h"
#include "math.h"
typedef struct
{
	char ts[50];
	char ttg[50];
	int NXB;
}SACH;
void doctep(SACH *s,int n,FILE *f)
{
	for(int i=1;i<=n;i++)
	{
		fgets(s[i].ts,50,f);
		fgets(s[i].ttg,50,f);
		fscanf(f,"%d",s[i].NXB);
	}
	fclose(f);
}
main()
{
	int i,n;
	FILE*f;
	SACH *s;
	f=fopen("de6b2.txt","r");
	if(!f)
	{
		printf("kiem tra lai du lieu");
		exit(1);
	}
	fscanf(f,"%d\n",&n);
	s=(SACH*) calloc((n+1),sizeof(SACH));
	doctep(s,n,f);
	printf("so dau sach:%d\n",n);
	for(i=1;i<=n;i++)
	printf("\n%s%s\n%d",s[i].ts,s[i].ttg,s[i].NXB);
}
