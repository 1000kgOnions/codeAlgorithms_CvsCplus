#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void doctep(FILE *f,int n,int m,float *a,float *b)
{
	for(int i=0;i<=m;i++)  fscanf(f,"%f",a+i);
	for(int i=0;i<=n;i++)  fscanf(f,"%f",b+i);
	fclose(f);
}
float tinhgtri(float *a,int n,float d)
{
	float s=0;
	for(int i=0;i<=n;i++)
	   s+= a[i]*pow(d,i);  return s;
}
void ghitep(float *a,float *b,int m,int n)
{
	FILE *f;
	f=fopen("teptin-b2(ontap)out.txt","w");
	if(!f)
	{
	 printf("kiem tra lai du lieu vao");  exit(1);
	}
	fprintf(f,"bac cua da thuc P la:%d\n",m);
	fprintf(f,"he so cua da thuc P:");
	for(int i=0;i<=m;i++)   fprintf(f,"%.1fx^%d +",*(a+i),i);
	fprintf(f,"\nbac cua da thuc Q la:%d\n",n);
	fprintf(f,"he so cua da thuc Q:");
	for(int i=0;i<=n;i++)   fprintf(f,"%.1fx^%d +",*(b+i),i);
	fclose(f);
}
main()
{
	FILE *f;
	float *a,*b,*c,d1,d2,t1,t2;
	int i,j,m,n;
	f=fopen("teptin-b2(onttap).txt","r");
	if(!f)
	{
		printf("kiem tra lai du lieu vao");
		exit(1);
	}
	fscanf(f,"%d%d\n",&m,&n);
	a=(float*)calloc((m),sizeof(float));
	b=(float*)calloc((n),sizeof(float));
	c=(float*)calloc((m>n?m:n),sizeof(float));
	doctep(f,n,m,a,b);
	//in ra man hinh
	printf("bac cua da thuc P la:%d\n",m);
	printf("he so cua da thuc P:");
	for(i=0;i<=m;i++) printf("%.1fx^%d + ",*(a+i),i);
	printf("\nbac cua da thuc Q la:%d\n",n);
	printf("he so cua da thuc Q:");
	for(i=0;i<=n;i++) printf("%.1fx^%d +",*(b+i),i);
	printf("\nnhap d1=");   scanf("%f",&d1);
	printf("\nnhap d2=");   scanf("%f",&d2);
	t1=tinhgtri(a,m,d1);    t2=tinhgtri(b,n,d2);
	printf("\ngia tri P(d1)=%.2f",t1);
	printf("\ngia tri Q(d2)=%.2f",t2);
	printf("\ngia tri P(d1)/Q(d2)=%.2f",t1/t2);
	ghitep(a,b,m,n);
	//tinh dathuc R(x)=3P(x)+2Q(x)+7
	if(m==n)
	{
	   for(i=0;i<=m;i++)
	   c[i]=3*a[i]+2*b[i]; c[0]+=7;
	   printf("\n R(x)=");
	   for(i=0;i<=m;i++)
	  printf("%.1fx^%d +",*(c+i),i);
	}
	if(m>n)
	{
	 for(i=0;i<=n;i++)
	    c[i]=3*a[i]+2*b[i];  c[0]+=7;
	 for(i=n+1;i<=m;i++)
	 	c[i]=3*a[i];
	 printf("\n R(x)=");
	   for(i=0;i<=m;i++)
	   printf("%.1fx^%d +",*(c+i),i);
    }
    if(n>m)
	{
	 for(i=0;i<=m;i++)
	    c[i]=3*a[i]+2*b[i];  c[0]+=7;
	 for(i=m+1;i<=n;i++)
	 	c[i]=2*b[i];
	 printf("\n R(x)=");
	   for(i=0;i<=n;i++)
	   printf("%.1fx^%d +",*(c+i),i);
    }
	//ghi them
	f=fopen("teptin-b2(ontap)out.txt","a");
	fprintf(f,"\ngia tri P(d1)=%.2f",t1);
	fprintf(f,"\ngia tri Q(d2)=%.2f",t2);
	fprintf(f,"\ngia tri P(d1)/Q(d2)=%.2f",t1/t2);
	fprintf(f,"\nda thuc R(x)=");
	 for(i=0;i<=n;i++)
	fprintf(f,"%.1fx^%d +",*(c+i),i);
	fclose(f);
}
