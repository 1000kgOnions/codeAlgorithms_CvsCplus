#include<stdio.h>
#include<string.h>
#include<math.h>
typedef struct
{
	int ngay;
	int thang;
	int nam;
}date;
typedef struct
{
	char hoten[50];
	date ngaysinh;
	int luong;
}knv;
int main()
{
	knv nv[100],t;
	int n,i,j;
	float ltb=0,ltb30=0,nv30=0,maxl,tuoinv=0;
	printf("so nhan vien: ");
	scanf("%d",&n);
	printf("nhap danh sach nhan vien:\n ");
	for(i=1;i<=n;++i)
	{
	   printf("Nhan vien thu %d:\n",i);
	   fflush(stdin);
	   printf("Ho Ten:");
       gets(nv[i].hoten);
       printf("Tien luong (Trieu dong):");
       scanf("%d",&nv[i].luong);
       printf("Ngay/Thang/Nam Sinh:");
       scanf("%d%d%d",&nv[i].ngaysinh.ngay,&nv[i].ngaysinh.thang,&nv[i].ngaysinh.nam);
       printf("%d/%d/%d\n",nv[i].ngaysinh.ngay,nv[i].ngaysinh.thang,nv[i].ngaysinh.nam);
       printf("-------------------- \n");
	}
	//Tinh luong trung binh cua cong ty
		for(i=1;i<=n;++i)
		{
			ltb += nv[i].luong;
		}
		printf("luong trung binh cua cong ty la: %f\n",ltb/n);
		printf("-------------------- \n");
	//Tinh luong trung binh cua nhan vien duoi 30 tuoi
	    for(i=1;i<=n;++i)
	    {
	    	tuoinv=2018 - nv[i].ngaysinh.nam;
	    	if(tuoinv <30)
	    	{
	    		ltb30 += nv[i].luong;
	    		nv30++;
			}
		}
		if(nv30==0)
		    printf("khong co nhan vien nao duoi 30 tuoi");
	    else
	        printf("luongtb cua nv duoi 30 tuoi la:%f\n",ltb30/nv30);
	printf("-------------------- \n");
	//Tim nguoi co muc luong cao nhat
	    maxl=nv[1].luong;
	    for(i=2;i<=n;++i)
	    {
		    if(nv[i].luong > maxl)
		    maxl=nv[i].luong;
	    }
	    for(i=1;i<=n;++i)
	    if(nv[i].luong == maxl)
	    printf("nhan vien co luong cao nhat la:%s\n",nv[i].hoten);
	    printf("-------------------- \n");
    //Sap xep luong theo thu giam dan
        for(i=1;i<=n-1;++i)
	        for(j=i+1;j<=n;++j)
	            if(nv[j].luong> nv[i].luong)
				{
	        	   t=nv[i];
	               nv[i]=nv[j];
			       nv[j]=t;	   
	            }
			 printf("\ndanh sach nhan vien theo thu tu luong tu cao den thap la:\n");
			 for(i=1;i<=n;++i)
			 printf("%5s",nv[i].hoten);
}

