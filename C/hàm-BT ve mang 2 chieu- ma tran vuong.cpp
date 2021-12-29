#include <stdio.h>
#include <stdlib.h>
void nhapmang(int **A,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("A[%d][%d]=",i,j);     scanf("%d",&A[i][j]);
		}
	}
	printf("Ma tran vua nhap:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",A[i][j]);
		}  printf("\n");
	}
}
int tong(int **A,int n)// tong duong cheo phu
{
	int i,j,tong=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j==n-i-1)     //tong dg cheo chinh:(i=j)  //cac phan tu tam giac tren:(i<j) //cac phan tu tam giac duoi:(i>j)
			{
			tong+=A[i][j];  //tong+=A[i][j];     //printf("%d",A[i][j]);   //printf("%d",A[i][j]); 
			}
		}
	}
	return tong;
}
int main() 
{
	int **A;
	int n;
	printf("Nhap so bac cua mang:");
	scanf("%d",&n);
	A = (int**)malloc(n*sizeof(int*));
	for (int i = 0; i < n; i++)
		A[i] = (int*)malloc(n*sizeof(int));
	printf("%d",sizeof(A));
	nhapmang(A,n);	
	printf("Tong duong cheo phu:%d",tong(A,n));
	return 0;
}
