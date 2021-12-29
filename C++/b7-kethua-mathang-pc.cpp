#include<bits/stdc++.h>
using namespace std;
class MH
{
	private:
		int mahang;
		string ten,nsx;
		int sl;
		float gia;
	public:
		MH(){};
		void nhap()
		{
			cout<<"nhap ma san pham:";cin>>mahang;
			cout<<"nhap ten san pham:";fflush(stdin);getline(cin,ten);
			cout<<"nhap ten nha san xuat:";getline(cin,nsx);
			cout<<"gia san pham:";cin>>gia;
		}
		void xuat()
		{
			cout<<"\nma san pham:"<<mahang;
			cout<<"\nten san pham:"<<ten;
			cout<<"\tten nha san xuat:"<<nsx;
			cout<<"\tgia san pham:"<<gia;
		}
		float laygia(){return gia;}
};
class MT: public MH
{   private:
	string CPU;
	string hdh;
	float tl;
	public:
	void nhap()
	{
		MH::nhap();
		cout<<"nhap loai CPU:";fflush(stdin);getline(cin,CPU);
		cout<<"nhap he dieu hanh:";getline(cin,hdh);
		cout<<"trong luong may tinh:";cin>>tl;
	}
	void xuat()
	{
		MH::xuat();
		cout<<"\nloai CPU:"<<CPU;
		cout<<"\the dieu hanh:"<<hdh;
		cout<<"\ttrong luong may tinh:"<<tl;
	}
};
main()
{
   int n;
   MT a[100];
   cout<<"so luong may tinh:";cin>>n;
   cout<<"nhap thong tin:\n";
   for(int i=1;i<=n;i++)
   {
   	 a[i].nhap();
	}
	cout<<"sau day la thong tin cac loai san pham:";
		for(int i=1;i<=n;i++)
   {
   	 a[i].xuat();
	}
	
	float max=a[1].laygia();
	for(int i=1;i<=n;i++)
	{
	    if(a[i].laygia()>max)
	   max=a[i].laygia();
    }
	cout<<"\n\ncac may tinh co gia cao nhat la:";
	for(int i=1;i<=n;i++)
	 if(a[i].laygia()== max)
	 {
	 	a[i].xuat();
	 }
}
