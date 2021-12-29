#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
typedef struct
{
	int nxb;
	char ts[50],ttg[50];
}sach;
void doctep(FILE *f,sach *s,int n)
{
	for(int i=1;i<=n;i++)
	{
		fscanf(f,"%[^\n]\n",s[i].ts);
		fscanf(f,"%[^\n]\n",s[i].ttg);
		fscanf(f,"%d\n",&s[i].nxb);
	}
	fclose(f);
}
void ghitep(sach *s,int n)
{
	FILE *f;
	f=fopen("de8b2out.txt","w");
	if(!f)
	{
		printf("kiem tra lai du lieu");
		exit(1);
	}
	fprintf(f,"so dau sach:%d\n",n);
	for( int i=1;i<=n;i++)
	fprintf(f,"\n%s\n%s\n%d\n",s[i].ts,s[i].ttg,s[i].nxb);
	fclose(f);
}
main()
{
	FILE *f;
	sach *s,t,*b;
	int i,j,n,kt=0,d=0;
	char tentim[50];
	f=fopen("de8b2.txt","r");
	if(!f)
	{
		printf("kiem tra lai du lieu");
		exit(1);
	}
	fscanf(f,"%d\n",&n);
	s=(sach*)calloc((n+1),sizeof(sach));
	b=(sach*)calloc((n+1),sizeof(sach));
	doctep(f,s,n);
	printf("so dau sach:%d\n",n);
	for( i=1;i<=n;i++)
	printf("\n%s\n%s\n%d\n",s[i].ts,s[i].ttg,s[i].nxb);
	//tim sach cho truoc
	fflush(stdin);
	printf("\nten sach can tim:");
	gets(tentim);
    for( i=1;i<=n;i++)
       if(strcmp(s[i].ts,tentim)==0)
       {
       		printf("\n%s\n%s\n%d\n",s[i].ts,s[i].ttg,s[i].nxb);
       		kt=1;
	   }
	if(kt==0)  printf("khong dung ten sach");
	ghitep(s,n);
	//lapdanhsach
	for(i=1;i<=n;i++)
	{
	 	if(s[i].nxb<2000)
	 	{
	 			d++; b[d]=s[i];
	    }
    }
    if(d==0)  printf("\nko co sach nao xb truoc nam 2000");
    for(i=1;i<d;i++)
       for(j=i+1;j<=d;j++)
         if(b[i].nxb>b[j].nxb)
         {
         	t=b[i];
         	b[i]=b[j];
         	b[j]=t;
		 }
	printf("\nDau sach truoc nam 2000 dc in theo thu tu tang dan:\n");
	    for(i=1;i<=d;i++)  printf("%s   ",b[i].ts);
	//ghi them
	f=fopen("de8b2out.txt","a");
	fflush(stdin);
	fprintf(f,"\nten sach can tim:");
	for( i=1;i<=n;i++)
       if(strcmp(s[i].ts,tentim)==0)
       {
       		fprintf(f,"\n%s\n%s\n%d\n",s[i].ts,s[i].ttg,s[i].nxb);
	   }
	fprintf(f,"\nDau sach truoc nam 2000 dc in theo thu tu tang dan:\n");
	    for(i=1;i<=d;i++)  fprintf(f,"%s   ",s[i].ts);
	fclose(f);
}
