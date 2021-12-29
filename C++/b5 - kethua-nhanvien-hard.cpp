#include<bits/stdc++.h>
using namespace std;
class Nguoi{
	private:
		string hoten;
		int tuoi;
	public:
		Nguoi(){};
		void nhap(){
			cout<<"\n nhap ho ten:";fflush(stdin);getline(cin,hoten);
			cout<<"\nnhap tuoi:";cin>>tuoi;	}
		void xuat(){
			cout<<"\nten thanh vien:"<<hoten;
			cout<<"\ttuoi thanh vien:"<<tuoi;	}		
};
class Quanly: public Nguoi
{	private:
		int snct; int hsl;
	public:
		void nhap(){
			Nguoi::nhap();
			cout<<"\nnhap so nam cong tac:";cin>>snct;
			cout<<"\nnhap he so luong:";cin>>hsl;	}
		void xuat(){
			Nguoi::xuat();
			cout<<"\tso nam cong tac:"<<snct;
			cout<<"\the so luong:"<<hsl;		}
	int tinhluong(){
		if(snct>=15)
	    	{return 3*hsl+3;	}
		else if(5<=snct<15)
	    	{return 3*hsl+2;}
		else{ return 3*hsl+1; }	}
};
main()
{   int n;
	cout<<"\nso nhan vien:";cin>>n;
	Quanly a[100];
	cout<<"\nnhap danh sach:";
    for(int i=1;i<=n;i++)
      {a[i].nhap();}
	cout<<"\ndanh sach nhan vien:";
	for(int i=1;i<=n;i++)
       {a[i].xuat();}
    
    int max=a[1].tinhluong();
    for(int i=1;i<=n;i++){
	if(a[i].tinhluong()>max)
	   {
		  max=a[i].tinhluong();
	   }
	}
	cout<<"\n nhan vien co luong cao nhat:";
	for(int i=1;i<=n;i++)
	{if(a[i].tinhluong()==max)
	         a[i].xuat();}
	
	int min=a[1].tinhluong();
    for(int i=1;i<=n;i++){
	if(a[i].tinhluong()<min)
	   {
		  min=a[i].tinhluong();
	   }
	}
	cout<<"\n nhan vien co luong thap nhat:";
		for(int i=1;i<=n;i++)
	{	if(a[i].tinhluong()==min)	a[i].xuat();   }       
}
