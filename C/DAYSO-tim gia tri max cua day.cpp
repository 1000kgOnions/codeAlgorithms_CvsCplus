#include<stdio.h>
#include<math.h>
int main()
{
	float a[100],max=0;
	int i,n;
	printf("so phan tu cua day");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		printf("a[%d]=",i);
		scanf("%f",&a[i]);
	}
	max=a[1];
	for(i=2;i<=n;++i)
	{
	if(a[i]>max)
	max=a[i];
	}
	printf("cac gia tri max cua day la:%f",max);
}
