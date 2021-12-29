#include<stdio.h>
#include<math.h>
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
	for(i=0;i<n;i++)	    printf("%d\t",a[i]); printf("\n");
}
float tbc(int a[],int n)  // tbc
{
	int i,s=0;
	for(i=0;i<n;i++)
	   s += a[i];
	   return (float)s/n;
}
int max(int a[],int n)   //tim max
{
	int i,max=a[0];
	for(i=1;i<n;i++)
	    if(a[i]>max)
	      max=a[i];
	      return max;
}
int  ptchannhohonx(int a[],int n,int x)   //ptchan nho hon x
{
	int dem=0;
	for(int i=0;i<n;i++)
	   if(a[i]%2==0 && a[i]<x)
	     dem++;
	   return dem;
}
int ktmangkogiam(int a[],int n)     //ktra mang ko giam
{
	int i;
	for(i=1;i<n;i++)
	   {
	   if(a[i]<a[i-1])
	   return 0; //Cham dut kiem tra, ket qua qua trinh : khong tang
	   }
	   return 1; //Ket qua kiem tra la mang tang
}
void daonguoc(int a[],int n) //dao cach 1
{
   for(int i=0;i<n/2;i++)
    {
      int c=a[i];
         a[i]=a[n-1-i];
         a[n-1-i]=c; 
    }
}
void DAONGUOC(int a[],int n)  //dao cach 2
{
	int i,j,c;
		for(i=0,j=n-1;i<j;i++,j--)  //tham khao sgk THDC tr 69
		{
	        	c=a[i];
	            a[i]=a[j];
	            a[j]=c;
	    }
}
main()
{
	int a[100],n,x;
	printf( "So luong phan tu:" ); scanf( "%d",&n);
	nhapmang(a,n);    printf("day vua nhap la: ");
	xuatmang(a,n);
	printf("TBC cua day=%f\n",tbc(a,n));
	printf("max cua day=%d\n",max(a,n));
	printf( "x=" ); scanf( "%d",&x);
	printf("so phan tu chan nho hon %d=%d\n",x,ptchannhohonx(a,n,x));
	if(ktmangkogiam==0)
	printf("day nay la day giam\n");
	else
	printf("day nay la day khong giam\n");
	daonguoc(a,n);
	printf("day dao nguoc c1 la: ");
	xuatmang(a,n);
	DAONGUOC(a,n);
	printf("day dao nguoc c2 la: "); 
	xuatmang(a,n); //khi nhap ca 2cach cung 1 code thi no lenh dao c2 se dao day  c1 ve day cu
	
}
