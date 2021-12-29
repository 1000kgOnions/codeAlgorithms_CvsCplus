#include<stdio.h>
#include<math.h>
void nhaptoado(int a[],int b[],int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("toa do diem A%d = ",i);
		scanf("%d%d",&a[i],&b[i]);  printf("\n");
	}
}
	
void xuattoado(int a[],int b[],int n)
{
	int i;
	for(i=1;i<=n;i++)
	printf("toa do diem thu A%d=(%d,%d)\n",i,a[i],b[i]);
}
float dodai(int a[],int b[],int n)  //tinh do dai duong gap khuc
{
	float s=0;
	for(int i=1;i<n;i++)
	s += sqrt(pow(a[i]-a[i+1],2)+ pow(b[i]-b[i+1],2));
	return s;
}
void kt1(int a[],int b[],int n)  //tim diem xa truc hoanh nhat
{
	float max;
	max =fabs(b[1]);
	for(int i=2;i<=n;i++)
	  if(max < fabs(b[i]))
	  {
	  	max=fabs(b[i]);
	  }
	  printf("cac diem xa truc hoanh nhat la:\n");
	  for(int i=1;i<=n;i++)
	     if(fabs(b[i])== max)
	         printf("diem A%d,toa do:(%d,%d)\n",i,a[i],b[i]);
}
float kt2(int a[],int b[],int n,int r)   //dem so diem nam ben trong dg tron (A1,r)
{
	int dt,i;
	for(i=1;i<=n;i++)
	{
		float d= sqrt(pow(a[1]-a[i],2)+ pow(b[1]-b[i],2));
	      if(d<r && a[1] !=a[i] &&b[1]!=b[i])
	      dt++;
	}
	printf("so diem nam ben trong duong tron(A1,r) la %d\n",dt);
}
main()
{
	int n,x[100],y[100],r=10;
	printf("nhap so diem:");
	scanf("%d",&n);
	nhaptoado(x,y,n);
	xuattoado(x,y,n);
	printf("do dai duong gap khuc = %.2f\n",dodai(x,y,n));
	kt1(x,y,n);
	kt2(x,y,n,r);
}

