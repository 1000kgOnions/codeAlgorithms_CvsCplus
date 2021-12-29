#include<stdio.h>
#include<stdlib.h>
void doctep(char *tentep,int *a,int *n)
{
	FILE *f;
	f=fopen(tentep,"r");
	if(!f)
	{
		printf("kiem tra lai tep du lieu dau vao");   
		exit(1);
	}
	fscanf(f,"%d",n);
	for(int i=1;i<=*n;i++)   fscanf(f,"%d",a+i);     
	fclose(f);
}
void ghitep(char *tentep,int *a,int n,int d,int min)
{
	FILE *f;
	f=fopen(tentep,"w");
	if(!f)
	{
		printf("kiem tra lai tep du lieu dau vao");   
	    exit(1);
	}
	fprintf(f,"%d\n",n);
	for(int i=1;i<=n;i++)    fprintf(f,"%d",a[i]);
	fprintf(f,"\n%d\n%d",d,min);     
	fclose(f);
}
int dem(int *a,int n)
{
	int i,d=0;
	for(i=2;i<n;i++)
	if(a[i+1]-a[i]== a[i]-a[i-1])  d++;
	return d;
}
int minchan(int *a,int n)
{
	int i,min=1;
	for(i=1;i<=n;i++)
	{
	if(a[i]%2==0)  min=a[i];
	}
	if(min==1) return 1;
	else
	{
		for(i=1;i<=n;i++)
		 if(a[i]%2==0 && min>a[i]) min=a[i];
		 return min;
	}
}
int main()
{
	FILE *f;
	int a[100],n,d,min;
	doctep("dulieu.txt",a,&n);
	printf("du lieu doc tu tep:\n");
	printf("n=%d\n",n);
	for(int i=1;i<=n;i++)  printf("%5d",a[i]);
	d=dem(a,n);
	min=minchan(a,n);
	printf("\n so cap 3 phan tu tao thanh cap so cong:%d",d);
	if(min==1) printf("\nDay ko co so chan");
	else printf("\nPhan tu chan min=%d",min);
	ghitep("ketqua.txt",a,n,d,min);         //C1: chi de ghitep("ketqua.txt",a,n);    //C2:them d,min vao
	//C1:ghi them                           //C2:them o tren nhu sau: void ghitep(char *tentep,int *a,int n,int d,int min);
	//f=fopen("ketqua.txt","a");                 {... ...
	//fprintf(f,"\n%d\n%d",d,min);                  fprintf(f,"\n%d\n%d",d,min); (ngay sau dong fclose(f);)
	//fclose(f);
}
