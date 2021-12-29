#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include<string.h>
typedef struct
{
	char TS[50],TTG[50];
	int NXB;
}SACH;
void doctep(int n,SACH *s,FILE *f)
{
	for(int i=1;i<=n;i++)
	{
	    fscanf(f,"%[^\n]\n",s[i].TS);
	    fscanf(f,"%[^\n]\n",s[i].TTG);
		fscanf(f,"%d\n",&s[i].NXB);
	}
	fclose(f);
}
main()
{
	int i,n,d=0,j,kt=0;
	FILE*f;
	SACH *s,t;
	char tentim[50];
	f=fopen("de6b2.txt","r");
	if(!f)
	{
		printf("kiem tra lai du lieu");
		exit(1);
	}
	fscanf(f,"%d\n",&n);
	s=(SACH*) calloc((n+1),sizeof(SACH));
	doctep(n,s,f);
	printf("so dau sach:%d\n",n);
	for(i=1;i<=n;i++)
	printf("\n%s\n%s\n%d\n",s[i].TS,s[i].TTG,s[i].NXB);
	//tim theo ten sach
	fflush(stdin);
	printf("\nten sach can tim: ");
	gets(tentim);
	for(i=1;i<=n;i++)
		if(strcmp(s[i].TS,tentim)== 0)
	     {
	       printf("%s\n%s\n%d\n",s[i].TS,s[i].TTG,s[i].NXB);
	       kt=1;
	     }
	if(kt==0)
	printf("\nkhong tim thay sach");
    //sap xep
	for(i=1;i<=n;i++)
	  {
	  	if(s[i].NXB<2000)
	  	   d++;
	  }
	if(d==0)
	printf("ko co sach nao xuat ban truoc nam 2000");
	else
	{
		for(i=1;i<d;i++)
		   for(j=i+1;j<=d;j++)
		   if(s[j].NXB<s[i].NXB)	
		   {
		   	 t=s[i];
		   	 s[i]=s[j];
		   	 s[j]=t;
		   }
		printf("\nDau sach truoc nam 2000 dc in theo thu tu tang dan:\n");
	    for(i=1;i<=d;i++)  printf("%s   ",s[i].TS);
	}
}
