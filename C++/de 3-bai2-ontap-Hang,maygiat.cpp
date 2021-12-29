#include<bits/stdc++.h>
using namespace std;
class Hang
{private:  int mahang,sl,gia;    string ten;
  public:
  	void nhap()
  	{   cout<<"nhap ma hang:"; cin>>mahang;
  		fflush(stdin); 	cout<<"nhap ten hang:"; getline(cin,ten);
  			cout<<"nhap so luong:"; cin>>sl;
  			cout<<"nhap gia:"; cin>>gia;
	  }
	  void xuat()
	  {   cout<<endl<<setw(20)<<mahang;			
			cout<<setw(20)<<ten;			
			cout<<setw(20)<<sl;
			cout<<setw(20)<<gia;
	  }
	  string laytenhang(){return ten;}
	  int layma(){return mahang;}    int laygia(){return gia;}
};
class MayGiat : public Hang
{   private:
		int kg;
	public:
		void nhap()
		{ Hang::nhap();
		cout<<"khoi luong:";cin>>kg;
		}
		void xuat()
		{ Hang::xuat();
		cout<<setw(20)<<kg;
		}
	int laykg(){return kg;}
};
main()
{  int n,i,chon,ma,kt=0;
   cout<<"nhap n:";cin>>n;
   MayGiat *a;   string tentim;
   a=new MayGiat[n+1];
   for(i=1;i<=n;i++)
	{	a[i].nhap();	}
	cout<<"\nMENU:"<<endl;
	cout<<setw(20)<<"Mahang:"<<setw(20)<<"tenhang:"<<setw(20)<<"soluong:"<<setw(20)<<"Gia:"<<setw(20)<<"khoi luong:";
		for(i=1;i<=n;i++)
	{a[i].xuat();}
   cout<<"\nBan muon tim mat hang theo ten hay ma hang?(ten:bam 1/mahang:bam 2)";cin>>chon;
   if(chon==1) {
       fflush(stdin); cout<<"\nMoi nhap ten mat hang can tim:";getline(cin,tentim); 
   	  for(i=1;i<=n;i++)
	    //if(a[i].laytenhang().compare(tentim)==0) *dung cai nay cung duoc*
	    if(a[i].laytenhang()==tentim)    { a[i].xuat();kt=1; }
	    if(kt==0)  cout<<"\nkhong tim thay mat hang";
	   }
   else if(chon==2) {
   cout<<"\nMoi nhap ma hang can tim:";cin>>ma;
   	for(i=1;i<=n;i++)
	    //if(a[i].laytenhang().compare(tentim)==0) *dung cai nay cung duoc*
	    if(a[i].layma()==ma) { a[i].xuat(); kt=1; }      //C2:dung return ko can` dat co`: cout<<"\nTIM THAY"; a[i].xuat(); return 0;
	    if(kt==0)  cout<<"\nkhong tim thay mat hang";    //bo "if(kt==0)" di
   }
   int min=a[1].laygia();
    	for(i=1;i<=n;i++)
    {	if(a[i].laygia()<min && a[i].laykg()>6)    min=a[i].laygia();}
   cout<<"\nNhung loai may giat >6kg va  co gia nho nhat:";
    		for(i=1;i<=n;i++)
    {if(a[i].laygia()==min && a[i].laykg()>6)       a[i].xuat();}       
}

