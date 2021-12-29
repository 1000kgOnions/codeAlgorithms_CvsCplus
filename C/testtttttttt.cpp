#include<stdio.h>
int x[]={2,4,6,7,5};
int n= sizeof(x)/sizeof(int);
int main()
{
	int i,j,c;
	for(i=0,j=n-1;i<j;i++,j--)
	  {
	  	c=x[i];
	  	x[i]=x[j];
	  	x[j]=c;
	  }
	  for(i=0;i<n;i++)
	  printf("%8.2d",x[i]);
}
