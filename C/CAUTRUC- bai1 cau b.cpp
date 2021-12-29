#include<stdio.h>
#include<string.h>
#include<math.h>
typedef struct
{
	char ht[30];
	int msv;
	float dqt,dkt,dhp;
} ksv;
int main()
{
	ksv sv[100];
	int n,i;
	printf("so sinh vien: ");
	scanf("%d",&n);
	printf("\nnhap danh sach thi sinh\n: ");
	for(i=1;i<=n;++i)
	{
		printf("ma sinh vien: ");
		scanf("%d",&sv[i].msv);
		fflush(stdin);
		printf("ho ten: ");
		gets(sv[i].ht);
		printf("diem qua trinh: ");
		scanf("%f",&sv[i].dqt);
		printf("diem ket thuc hoc phan: ");
		scanf("%f",&sv[i].dkt);
		sv[i].dhp= sv[i].dqt*0.3 + sv[i].dkt*0.7;
	}
      printf("\ndanh sach sinh vien:\n ");
	  for(i=1;i<=n;++i)
	  printf("\n%8d%20s%8.2f%8.2f%8.2f",sv[i].msv,sv[i].ht,sv[i].dqt,sv[i].dkt,sv[i].dhp);
	  printf("\n\n");
	  //in danh sach sinh vien hoc lai
	  printf("danh sach sv hoc lai:");
	  for(i=1;i<=n;++i)
	  if(sv[i].dqt==0 || sv[i].dhp < 4)
	  printf("\n%8d%20s%8.2f%8.2f%8.2f",sv[i].msv,sv[i].ht,sv[i].dqt,sv[i].dkt,sv[i].dhp);
}
