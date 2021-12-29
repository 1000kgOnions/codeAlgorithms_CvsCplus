#include<stdio.h>
#include<string.h>
#include<math.h>
typedef struct Date Date;
struct Date
{
	int Ngay;
  	int Thang;
   	long Nam;
};

typedef struct DanhSach DanhSach;
struct DanhSach
{
  char HoTen[60];
  long Luong;
  Date NgaySinh;
};

int main(int argc,char*argv[])//tuong tu vs int main()
{
  int n=0,k=0,i=0,j=0,nhanvienduoi30=0,tuoinhanvien=0;
  long tongluong=0,tongluongduoi30=0,nhieuluongnhat=0;
  double trungbinh1=0,trungbinh2=0;
  DanhSach NhanVien[10];
  printf("Nhap so luong nhan vien:");
  scanf("%d",&n);
  printf("----THONG TIN TUNG NHAN VIEN----- \n");
  for(i=1;i<=n;i++)
     {
       printf("Nhan vien thu %d:\n",i);
       printf("Ho Ten:");
       fflush(stdin);
       gets(NhanVien[i].HoTen);
       printf("Tien luong (Trieu dong):");
       scanf("%ld",&NhanVien[i].Luong);
       printf("Ngay/Thang/Nam Sinh:");
       scanf("%d%d%ld",&NhanVien[i].NgaySinh.Ngay,&NhanVien[i].NgaySinh.Thang,&NhanVien[i].NgaySinh.Nam);
       printf("=> %d/%d/%ld \n",NhanVien[i].NgaySinh.Ngay,NhanVien[i].NgaySinh.Thang,NhanVien[i].NgaySinh.Nam);
       printf("-------------------- \n");
     }

//Tinh luong trung binh cua cong ty
   for(i=1;i<=n;i++)
      {
        tongluong += NhanVien[i].Luong;
      }
   trungbinh1 = (double)(tongluong)/(double)(n);
   printf("Trung binh luong cua nhan vien la: %lf trieu dong \n",trungbinh1);
   printf("---------------------------- \n");
//Tinh luong trung binh cua nhan vien duoi 30 tuoi
   for(i=1;i<=n;i++)
      {
        tuoinhanvien= 2018 - NhanVien[i].NgaySinh.Nam;
        if(tuoinhanvien <= 30 )
          {
            tongluongduoi30 += NhanVien[i].Luong;
            nhanvienduoi30 ++;
          }
      }
   trungbinh2 = (double)(tongluongduoi30)/(double)(nhanvienduoi30);
   printf("luong trung binh duoi 30 tuoi la: %lf trieu dong \n",trungbinh2);
   printf("-----------------------------\n");
//Tim nguoi co muc luong cao nhat
  for(i=1;i<=n;i++)
     {
       if(NhanVien[i].Luong > nhieuluongnhat || NhanVien[i].Luong == nhieuluongnhat)
         {
          nhieuluongnhat=NhanVien[i].Luong;
         }
     }
  for(i=1;i<=n;i++)
     {
       if(nhieuluongnhat==NhanVien[i].Luong)
         {
           printf("Nguoi co luong cao nhat la: %s \n",NhanVien[i].HoTen);
         }
     }
   printf("----------------------- \n");  
//Sap xep luong theo thu giam dan
  for(i=1;i<=(n-1);i++)
     {
       for(j=i+1;j<=n;j++)
          {
            if(NhanVien[i].Luong < NhanVien[j].Luong)
              {
                k=NhanVien[i].Luong;
                NhanVien[i].Luong=NhanVien[j].Luong;
                NhanVien[j].Luong=k;
              }
          }
     }
  printf("Danh sach luong theo thu tu tu cao den thap:");
  for(i=1;i<=n;i++)
     {
       printf("%.1ld",NhanVien[i].Luong);
     }
   printf("-----------------------");
  return 0;
}

