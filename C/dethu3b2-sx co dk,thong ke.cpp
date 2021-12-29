#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct
{
	char ht[50];
	int ns,nkn;
}DS;
void doctep(DS *dv,int n,FILE *f)
{
	for(int i=1;i<=n;i++)
	{
		fscanf(f,"%[^\n]\n",dv[i].ht);
		fscanf(f,"%d\n",&dv[i].ns);
		fscanf(f,"%d\n",&dv[i].nkn);
	}
	fclose(f);
}
void sx(DS *dv,int n)
{
	for(int i=1;i<n;i++)
	   for(int j=i+1;j<=n;j++)
	      if((2019-dv[i].nkn)>(2019-dv[j].nkn))
	      {
	      	 DS t=dv[i];
	      	dv[i]=dv[j];
	      	dv[j]=t;
		  }
		printf("\ndanh sach dang vien theo nam ket nap tang dan:");
		for(int i=1;i<=n;i++)    printf("  %s  ",dv[i].ht);
}
int thongke(DS *dv,int n)
{
	int tuoidang=0,k=0,i;
	for(i=1;i<=n;i++)
	{
		tuoidang= 2019- dv[i].nkn;
		if(tuoidang>20)
		     k++;
	}
	if(k==0) printf("\nKhong co ai tren 20 nam tuoi dang");
	else 
	{
	    printf("\nCo %d dang vien tren 20 nam tuoi dang:",k);
	    for(i=1;i<=n;i++)
		{
	       tuoidang= 2019- dv[i].nkn;
	       if(tuoidang>20)
	     {
	        k++;   printf("\n%s\n%d\n%d",dv[i].ht,dv[i].ns,dv[i].nkn);
		 }
	    }
	}
}
main()
{
	int n,i;
	FILE *f;
	DS *dv;
	f=fopen("de3b2.txt","r");
	if(!f)
	{
		printf("kiem tra lai tep");  exit(1);
	}
	fscanf(f,"%d\n",&n);
	dv=(DS*) calloc((n+1),sizeof(DS));
	doctep(dv,n,f);
	printf("so luong dang vien=%d\n",n);
	for(i=1;i<=n;i++)
	printf("\n%s\n%d\n%d",dv[i].ht,dv[i].ns,dv[i].nkn);
	sx(dv,n);
	thongke(dv,n);
}
