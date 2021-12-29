#include "stdio.h"
#include "stdlib.h"
#include "math.h"
typedef struct
{
	char ht[50];
	float diem;
	char dh;
}SV;
doctep(FILE *f,SV *sv,int n)
{
	for(int i=1;i<=n;i++)
	{
		fscanf(f,"%[^\n]\n",sv[i].ht);
		fscanf(f,"%f\n",&sv[i].diem);
		fscanf(f,"%c\n",&sv[i].dh);
	}
	fclose(f);
}
void hsdiemcaonhat(SV *sv,int n) //cau 2
{
	for(int i=1;i<n;i++)
	   for(int j=i+1;j<=n;j++)
	    if(sv[i].diem<sv[j].diem)
	    {
	    	SV t=sv[i];
	    	sv[i]=sv[j];
	    	sv[j]=t;
		}
		printf("\n3 hs co diem cao nhat:");
		for(int i=1;i<=3;i++)
		printf("\n%s",sv[i].ht);
}
void ghitep(SV *sv,int n)
{
	FILE *f;
	f=fopen("de7b2out.txt","w");
	if(!f)
	{
	   printf("kiem tra lai tep");    
	   exit(1); 
	}
	fprintf(f,"so sinh vien:%d\n",n);
		for( int i=1;i<=n;i++)
			fprintf(f,"\n%s\n%.1f\n%c",sv[i].ht,sv[i].diem,sv[i].dh);
	fclose(f);
}
main()
{
	int i,n,j;
	SV *sv;
	float tA=0,tB=0,tC=0,min;
	FILE *f;
	f=fopen("de7b2.txt","r");
	if(!f)
	{
	   printf("kiem tra lai tep");    
	   exit(1); 
	}
	fscanf(f,"%d\n",&n);
	sv=(SV*) calloc((n+1),sizeof(SV));
	doctep(f,sv,n);
	printf("so sinh vien:%.1d\n",n);
		for( i=1;i<=n;i++)
			printf("\n%s\n%.1f\n%c",sv[i].ht,sv[i].diem,sv[i].dh);
	//cau 1
	for(i=1;i<=n;i++)
	{
		if(sv[i].dh=='A') tA+=sv[i].diem;
	    if(sv[i].dh=='B') tB+=sv[i].diem;
		if(sv[i].dh=='C') tC+=sv[i].diem;
	}
	printf("\nTong diem cac truong dh A,B,C lan luot la:%.2f,%.2f,%.2f",tA,tB,tC);
	min=tA<tB?tA:tB;
	min=min<tC?min:tC;
	printf("\nTruong dh co tong diem be nhat=%.2f\n",min);
	ghitep(sv,n);
	hsdiemcaonhat(sv,n);
	//ghi them
	f=fopen("de7b2out.txt","a");
   fprintf(f,"\ntong diem cac truong A,B,C lan luot la:%.2f %.2f %.2f",tA,tB,tC);
   fprintf(f,"\ntruong dh co tong diem be nhat=%.2f\n",min);
   fprintf(f,"\n3 hs co diem cao nhat:");
    for(int i=1;i<=3;i++)  fprintf(f,"\n%s",sv[i].ht);
   fclose(f);
}
