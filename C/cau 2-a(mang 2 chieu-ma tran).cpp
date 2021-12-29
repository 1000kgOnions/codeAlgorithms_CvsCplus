#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,i,j,a[50][50],d=0;
	float s=0;
	printf("nhap so hang so cot:  ");
	scanf("%d%d",&m,&n);
	for(i=1;i<=m;++i)
	   for(j=1;j<=n;++j)
	   {
	   	printf("a[%d][%d]= ",i,j);
	   	scanf("%d",&a[i][j]);
	   	if(a[i][j]%4==1)
		{
	   	s += a[i][j];
	   	d++;
		}
	   }
	   if(d==0)
	   printf("ma tran ko co so le");
	   else
	   printf("TBC so le chia 4 du 1 la:%f",s/d);
}
