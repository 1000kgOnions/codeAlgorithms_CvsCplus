#include<stdio.h>
void nhapmang(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);   scanf("%d",&a[i]);
	}
}
void xuatmang(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)	    printf("%d\t",a[i]);
}
void swap(int *a,int *b)
{
	int c=*a;     *a=*b;    *b=c;
}
void bubblesort(int *a,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	   for(j=n-1;j>i;j--)
	      if(a[j]<a[j-1])
	         swap(&a[j],&a[j-1]);
}
int main()
{
	int a[20],n;
	printf( "So luong phan tu:" ); scanf( "%d",&n);
	nhapmang(a,n);    printf("mang vua nhap la: ");
	xuatmang(a,n);
	bubblesort(a,n);   printf("mang sap xep lai la: ");
	xuatmang(a,n);
}
