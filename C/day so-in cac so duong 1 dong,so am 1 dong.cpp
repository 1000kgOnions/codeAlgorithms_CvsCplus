#include<stdio.h>
#include<math.h>
int main()
{
	float a[100];
	int i,n;
	printf("so phan tu cua day");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		printf("a[%d]=",i);
		scanf("%f",&a[i]);
	}
	for(i=1;i<=n;++i)
		if(a[i]>0)
	      printf("%8.2f",a[i]);
	      printf("\n");
    for(i=1;i<=n;++i)
	    if(a[i]<0)
	    printf("%8.2f",a[i]);	
}
