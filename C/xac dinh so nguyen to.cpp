#include <stdio.h>
#include <math.h>
int main()
{
  int n,i;
  printf("nhap so tu nhien n= ");
  scanf ("%d",&n);
  for(i=2;i<=sqrt(n);i++)
    if (n%i==0)
     break;
    if (i>sqrt(n))
	printf("la so nguyen to");
	else
	printf("khong la so nguyen to"); 
}

