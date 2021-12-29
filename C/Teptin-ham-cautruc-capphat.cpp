#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
typedef struct
{
	char ht[50];
	float diem;
	char donvi;
} TS;
void doctep(TS *ts,int n, FILE *f)
{
	for(int i=1;i<=n;i++)
	 {
	   fgets(ts[i].ht,50,f);
	   fscanf(f,"%f\n",&ts[i].diem);
	   fscanf(f,"%c\n",&ts[i].donvi);
	 }
	 fclose(f);
}
void hsdiemcaonhat(TS *ts,int n)
{
	TS t;
	//sap xep giam dan
	for(int i=1;i<n;i++)
	   for(int j=i+1;j<=n;j++)
	     if(ts[i].diem<ts[j].diem)
	     {
	     	t=ts[i];
	     	ts[i]=ts[j];
	     	ts[j]=t;
		 }
	printf("\n3 hs co diem cao nhat:");
    for(int i=1;i<=3;i++)      printf("\n%s%.1f\n%c",ts[i].ht,ts[i].diem,ts[i].donvi);
}
void ghitep(TS *ds,int n)
{   FILE *f;
	f=fopen("output.txt","w");
	fprintf(f,"%d\n",n);
   for(int i=1;i<=n;i++) fprintf(f,"\n%s%.1f\n%c",ds[i].ht,ds[i].diem,ds[i].donvi);
   fclose(f);    }
main()
{
	FILE *f;
	float tA,tB,tC,max;	tA=tB=tC=0;    int n,i;
	TS *ds;
	f=fopen("input.txt","r");
	if(!f)
	{printf("kiem tra lai tep");    exit(1); }
	fscanf(f,"%d\n",&n);
	ds= (TS*) calloc(n+1,sizeof(TS));
	doctep(ds,n,f);
	printf("so luong thi sinh=%d\n",n);
	for(i=1;i<=n;i++) 
	printf("\n%s%.1f\n%c",ds[i].ht,ds[i].diem,ds[i].donvi);
	for(int i=1;i<=n;i++)     //tong diem cac don vi va donvi max 
	{   
	    if(ds[i].donvi=='A') tA+=ds[i].diem;
	    if(ds[i].donvi=='B') tB+=ds[i].diem;
		if(ds[i].donvi=='C') tC+=ds[i].diem;
	}
	printf("\ntong diem cua 3 don vi A,B,C lan luot la:%.2f %.2f %.2f",tA,tB,tC);
		max=tA>tB?tA:tB;  max=max>tC?max:tC;
    	printf("\ndon vi co tong diem max=%.2f\n",max);
    ghitep(ds,n); //phai ghitep truoc nhung cau^ sapxep khong se bi sai
	hsdiemcaonhat(ds,n);
	//ghithem
	f=fopen("output.txt","a");
   fprintf(f,"\ntong diem cua 3 don vi A,B,C lan luot la:%.2f %.2f %.2f",tA,tB,tC);
   fprintf(f,"\ndon vi co tong diem max=%.2f\n",max);
   fprintf(f,"\n3 hs co diem cao nhat:");
    for(int i=1;i<=3;i++)  fprintf(f,"\n%s%.1f\n%c",ds[i].ht,ds[i].diem,ds[i].donvi);
   fclose(f);
}
