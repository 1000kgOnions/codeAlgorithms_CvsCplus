#include<stdio.h>
#include<math.h>
long kt(int n)
{
	int i;
	if(n<2)
	  return 0;
	for (i=2;i<=sqrt(n);i++)
	  if(n%i==0)
	  return 0;
	 
}
main()
{
	long n;
	printf("nhap so n: ");
	scanf("%d",&n);
	if(kt(n))
	printf("day la so nguyen to");
	else
	printf("day khong la so nguyen to");
}

