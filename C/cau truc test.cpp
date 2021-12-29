#include<stdio.h>
#include<string.h>
typedef struct
{
	char ht[20];
	int msv;
	float diem;
}ksv;
int main()
{   ksv sv[100];
	int n,i,ma_tim;
	float max;
	char ten_tim[20];
    printf("nhap so sinh vien: ");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		printf("ma so: ");  scanf("%d",&sv[i].msv);
		fflush(stdin);
		printf("ho ten:");
		gets(sv[i].ht);
		printf("diem: ");   scanf("%f",&sv[i].diem);
	}
	printf("\ndanh sach sinh vien:\n ");
	printf("%4s %20s %20s\n",sv[i].msv,sv[i].ht,sv[i].diem);
	for(i=1;i<=n;++i)
	    printf("\n%5d%-20s%8.2f",sv[i].msv,sv[i].ht,sv[i].diem);
	    printf("\n\n");
}
