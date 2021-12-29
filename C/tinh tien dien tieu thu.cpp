#include <stdio.h>
#define M1 1484
#define M2 1533
#define M3 1786
#define M4 2242
#define M5 2503
#define M6 2587
int main()
{
  int so;
  float tien,VAT,tongtien;
  printf("nhap so dien tieu thu");
  scanf("%d",&so);
  if(so<=50)
    tien= M1*so;
  else if(so<=100)
       tien=M1*50+M2*(so-50);
  else if(so<=200)
       tien=M1*50+M2*50+M3*(so-100);
  else if(so<=300)
       tien=M1*50+M2*50+M3*100+M4*(so-100);
  else if(so<=400)    
	   tien=M1*50+M2*50+M3*100+M4*100+M5*(so-100);
	   else
	   tien=M1*50+M2*50+M3*100+M4*100+M5*100+M6*(so-400);
  printf("so tien ko VAT=%.0f VND\n",tien);
  VAT=tien/10;
  printf("tien VAT=%.0f VND\n",VAT);
  tongtien=tien+VAT;
  printf("tong tien phai tra=%.0f VND",tongtien);	   
}

