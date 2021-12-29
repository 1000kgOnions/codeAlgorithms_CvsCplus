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
	for(i=1;i<=n;++i)
	    printf("\n%5d%-20s%8.2f",sv[i].msv,sv[i].ht,sv[i].diem);
	    printf("\n\n");
	//tim kiem theo ma            (b)
	printf("ma sinh vien can tim:");
	scanf("%d",&ma_tim);
	for(i=1;i<=n;i++)
	    if(sv[i].msv== ma_tim)
	    printf("\n%5d%-20s%8.2f",sv[i].msv,sv[i].ht,sv[i].diem);   printf("\n\n");
	//tim kiem theo ho ten        (c)
	fflush(stdin);
	printf("ten sinh vien can tim: ");
	gets(ten_tim);
	for(i=1;i<=n;i++)
	   if(strcmp(sv[i].ht,ten_tim)== 0)
	   printf("\n%5d%-20s%8.2f",sv[i].msv,sv[i].ht,sv[i].diem);    printf("\n\n");
	//tim sv co diem cao nhat     (a)
	printf("sv co diem cao nhat: ");
	max=sv[1].diem;
	for(i=2;i<=n;i++)
	 if(sv[i].diem > max)
	 max= sv[i].diem;
	 for(i=1;i<=n;i++)
	     if(sv[i].diem == max)
	    printf("\n%5d%-20s%8.2f",sv[i].msv,sv[i].ht,sv[i].diem);	
}
