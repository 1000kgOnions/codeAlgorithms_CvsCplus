#include<stdio.h>
void NhapMang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		printf("Gia tri phan tu a[%d]=", i);      scanf("%d", &a[i]);
	}
}
void XuatMang(int a[], int n)
{
	for(int i=0; i<n; i++)       printf("%4d\t", a[i]);
}
void swap(int *a, int *b)
{
	int x = *a;    *a = *b;    *b = x;
}
void Sapxep(int a[], int n)
{
	int i,j;
	for ( i = 0; i < n - 1; i++)
	{   int min = i;
		for ( j = i + 1; j < n; j++)
			if (a[min]>a[j])   min = j;
			swap(&a[i], &a[min]);
	}
}
 main()
{    int A[100],n;
	printf("Cho biet so phan tu cua mang: ");   scanf("%d", &n);
	NhapMang(A,n);    printf("mang vua nhap la: ");
	XuatMang(A, n);
	printf("\n");
	Sapxep(A, n);     printf("Mang sau khi sap xep la: ");
	XuatMang(A, n);
}
