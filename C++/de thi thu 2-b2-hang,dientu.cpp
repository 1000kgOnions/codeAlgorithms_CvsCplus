#include<bits/stdc++.h>
using namespace std;
class QLH
{
	private:
		string mahang,tenhang,xuatxu;
		int loaihang,soluong;
	public:
		void nhap()
		{	
		  fflush(stdin);   
		    cout<<"nhap ma hang:";
			getline(cin,mahang);
			cout<<"nhap ten hang:";
			getline(cin,tenhang);
			cout<<"nhap xuat xu:";
			getline(cin,xuatxu);
			cout<<"loai hang:";cin>>loaihang;
			cout<<"so luong:";cin>>soluong;
		}
		void xuat()
		{
			cout<<"\n ma hang:"<<mahang;			
			cout<<"\t ten hang:"<<tenhang;			
			cout<<"\t xuat xu:"<<xuatxu;
			cout<<"\t loai hang:"<<loaihang;
			cout<<"\t so luong:"<<soluong;
		}
		int laylh(){
			return loaihang;
		}
		string laytenhang(){
			return tenhang;
		}
		
};
class Dientu: public QLH
{
	private:
		int tgbh;
	public:
		void nhap()
		{
			QLH::nhap();
			cout<<"thoi gian bao hanh(theo thang):";cin>>tgbh;
		}
		void xuat(){
			QLH::xuat();
			cout<<"\ttgbh(theo thang):"<<tgbh;
		}
		int laytgbh(){
			return tgbh;
		}
};
main()
{
	int n,i,kt=0;
	string tentim;
	Dientu *a;
	cout<<"\nso mat hang dien tu:";cin>>n;
	a=new Dientu[n+1];
	for(i=1;i<=n;i++)
	{
		a[i].nhap();
	}
	cout<<"\n MENU:";
		for(i=1;i<=n;i++)
	{
		a[i].xuat();
	}
	int A=0,B=0,C=0;
	for(i=1;i<=n;i++)
	{
		if(a[i].laylh()==1 && a[i].laytgbh()>=12)
		     A++;
	}
	cout<<"\ntong so hang cua loai hang 1 co tgbh tu 12 thang tro len:"<<A;
	
	for(i=1;i<=n;i++)
	{
		if(a[i].laylh()==2 && a[i].laytgbh()>=12)
		     B++;
	}
	cout<<"\ntong so hang cua loai hang 2 co tgbh tu 12 thang tro len:"<<B;
	
	for(i=1;i<=n;i++)
	{
		if(a[i].laylh()==3 && a[i].laytgbh()>=12)
		     C++;	}
	cout<<"\ntong so hang cua loai hang 3 co tgbh tu 12 thang tro len:"<<C;
	fflush(stdin);
	cout<<"\nten mat hang can tim:";getline(cin,tentim);
	for(i=1;i<=n;i++)
	    //if(a[i].laytenhang().compare(tentim)==0) *dung cai nay cung duoc*
	    if(a[i].laytenhang()==tentim)
	         {     	a[i].xuat();			 kt=1;			 		 }
	    if(kt==0)  cout<<"\nkhong tim thay mat hang";
}
