#include<stdio.h>
int ktra( int a[],int n)
{
	int i;
	for(i=0;i<n/2;i++)
	{
		if(a[i]!=a[n-1-i])
		return 0;
		break;
	}
	return 1;
}
main()
{
	int a[100],n;
	int *pa;
	pa=a;
	printf("nhap so phan tu :" );
    scanf("%d",&n);
    for(int i=0;i<n;i++)
      { 
          printf(" phan tu thu %d :",i);
          scanf("%d",&pa[i]);
      }
      if(ktra(pa,n)==0)
	    printf("ko phai mang doi xung ");
    else 
	       printf("day la mang doi xung");
}
