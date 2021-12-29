#include<bits/stdc++.h>
using namespace std;
class CTY{
	private:
		string ten;
		int ntl;
	public:
		 CTY(){
		}
		void nhap(){
			cout<<"\nnhap ten cong ty:";
			fflush(stdin);
	        getline(cin,ten);
			cout<<"\nnhap nam thanh lap:";
			cin>>ntl;
		}
		void xuat(){
			cout<<"\nten cong ty:"<<ten;
			cout<<"\tso nam thanh lap:"<<ntl;
		}
		int Namtl()
			{
			return ntl;
			}
	};
class CTYPM : public CTY
{
	private:
		int sltv;
	public:
	void nhap(){
		CTY::nhap();
		cout<<"\n nhap so lap trinh vien:";
		cin>>sltv;
	}
	void xuat(){
		CTY::xuat();
		cout<<"\tso lap trinh vien:"<<sltv;
	}
	int Soltv()
			{
				return sltv;
			}
	
};		
class CTYVT: public CTY
{
	private:
		int soto;
	public:
		void nhap()
		{
			CTY::nhap();
			cout<<"\nnhap so o to:";
			cin>>soto;
		}
		void xuat()
		{
			CTY::xuat();
			cout<<"\t so o to:"<<soto;
		}
		int Sooto(){return soto;}
};
 main()
{
    int n,m;
    cout<<"\n so cong ty phan mem:";
    cin>>n;
    cout<<"\n so cong ty van tai:";
    cin>>m;
    CTYPM a[100];
    CTYVT b[100];
    cout<<"\ndanh sach cong ty phan mem:";
    for(int i=1;i<=n;i++)
      {a[i].nhap();
	   }
  cout<<"\ndanh sach cong ty van tai:";
     for(int i=1;i<=m;i++)
        {b[i].nhap();
	   }
	for(int i=1;i<=n;i++)
        {a[i].xuat();
	   }
    for(int i=1;i<=m;i++)
       {b[i].xuat();
	   }  
	 cout<<"\n-Nhung cty co so lap trinh vien lon hon 20 va thanh lap sau nam 2000 la:";
	for( int i=1;i<=n;i++)
		
			if(a[i].Soltv() > 20 && a[i].Namtl()>2000)
			{   a[i].xuat();	}
		cout<<"\n-Nhung cty co so o to nho hon 10 va thanh lap truoc nam 2000 la:";			
		for (int i=1;i<=m;i++)
			if(b[i].Sooto() < 10 && b[i].Namtl()<2000)
			{  b[i].xuat();	}
}

