#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
   char ht[50];
   int luong;
   char MCV;
}NV;
void nhap(NV *nv,int n)
{
	for(int i=1;i<=n;i++)
	{
		fflush(stdin);
		printf("\nHo ten:");
		gets(nv[i].ht);
		printf("luong:");
		scanf("%d",&nv[i].luong);
		printf("ma cong viec:");
		scanf("%s",&nv[i].MCV);
	}
}
void xuattep(char *tentep,NV *nv,int n)
{
	FILE *f;
	f=fopen(tentep,"w");
	if(!f)
	{
		printf("kiem tra lai du lieu tep");
		exit(1);
	}
	fprintf(f,"%d",n);
	for(int i=1;i<=n;i++)
	{
		fprintf(f,"\n%s\n%d\n%c",nv[i].ht,nv[i].luong,nv[i].MCV);
	}
	fclose(f);
}
void sapxep(NV *nv,int n)
{
	NV t;
	for(int i=1;i<n;i++)
	   for(int j=i+1;j<=n;j++)
	     if(nv[i].luong<nv[j].luong)
	     {
	     	t=nv[i];
	     	nv[i]=nv[j];
	     	nv[j]=t;
		 }
		 printf("\ndanh sach nhan vien luong tu cao den thap la:\n");
		 for(int i=1;i<=n;i++)
		 printf("%10s",nv[i].ht);
}
main()
{
	int n,i;
	NV *nv;
	printf("nhap so nhan vien:");
	scanf("%d",&n);
	nv=(NV*)calloc((n+1),sizeof(NV));
	printf("\nnhap danh sach nhan vien:");
	nhap(nv,n);
	xuattep("de2b2.txt",nv,n);
	sapxep(nv,n);
}

