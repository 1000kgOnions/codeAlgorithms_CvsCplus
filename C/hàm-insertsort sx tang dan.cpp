#include<stdio.h>
void nhapmang(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	printf("a[%d]= ",i);    scanf("%d",&a[i]);
	}
}
void xuatmang(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)      printf("%5d\t",a[i]);}
void insertsort(int a[],int n)
{
	int i,j,x;
	for(i=1;i<n;i++)
	{
	x=a[i];
	j=i;
	while(j>=0 && a[j-1]>x)
	{
		a[j]=a[j-1];    j=j-1;
	}
	a[j]=x; 
	}
}
main()
{
	int a[50],n;
	printf("nhap so phan tu: ");   scanf("%d",&n);
	nhapmang(a,n);   printf("mang vua nhap la: ");
	xuatmang(a,n);
	insertsort(a,n); printf("mang sau khi sap xep la:");
	xuatmang(a,n);
}
