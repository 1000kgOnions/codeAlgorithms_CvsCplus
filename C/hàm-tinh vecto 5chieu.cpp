#include<stdio.h>
long tichvohuong(int *a,int *b,int n)
{
	int s=0;
	int i;
	for ( i=1; i <= n; i++);
		s = s+ a[i] * b[i];
		return s;
}
int congvecto(int *a, int *b, int *c, int n)
{
	int i;
	for ( i=0; i <= n; i++)
      c[i] = a[i] + b[i];
}
int main()
{
int n=5,i;
int a[50],b[50],c;
for(i=1;i<=n;i++)
	{
            printf( "phan tu thu %d=",i);
			scanf( "%d",&a[i] );
    }
for(i=1;i<=n; i++)
	{
            printf( "phan tu thu %d=", i );
			scanf( "%d",&b[i] );
    }
printf("tich vo huong hai vecto =%d",tichvohuong(a,b,n));
}
