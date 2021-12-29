#include<bits/stdc++.h>
using namespace std;
class Nguoi{
	private:
		string ht;
		int  tuoi;
	public:
		Nguoi(){}		
	void nhap(){
			cout<<"\nnhap ten :";	cin>>ht;
			cout<<"\nnhap tuoi:";	cin>>tuoi;
		}
	void xuat()
		{		cout<<"\n ho ten:"<<ht<<"\ttuoi:"<<tuoi;	}		
};
class QLNV: public Nguoi{
	private:
		int snct;
		float hsl;
	public:
		void nhap(){
			Nguoi::nhap();
			cout<<"\nnhap so nam cong tac:";cin>>snct;
			cout<<"\nnhap he so luong:";	cin>>hsl;
		}
	void xuat(){
		Nguoi::xuat();
		cout<<"\t so nam cong tac: "<<snct;
		cout<<"\t he so luong: "<<hsl;
	}
		float tinhtienluong(){	return 1.5*hsl+snct*0.2;	}
		int laySNCT(){		return snct;	}
};
main()
{
	int n;
	cout<<"\n nhap n nhan vien:";	cin>>n;
	QLNV a[100];
	for(int i=1;i<=n;i++)
	{	a[i].nhap();}
	cout<<"\n cac nhan vien la:";
	for(int i=1;i<=n;i++)
	{	a[i].xuat();}
	
	int max=a[1].laySNCT();
	for(int i=1;i<=n;i++){
	if(a[i].laySNCT()>max)
	   {
		  max=a[i].laySNCT();
	   }
	}
	cout<<"\n nhung ong lam viec lau nhat:";
	for(int i=1;i<=n;i++){
	if(a[i].laySNCT()==max)
	a[i].xuat();
    }
    cout<<"\nsapxep:";
    for(int i=1;i<=n;i++)
    for(int j=i+1;j<=n;j++){
       if(a[i].tinhtienluong()<a[j].tinhtienluong()){
       	QLNV t=a[i];
       	a[i]=a[j];
       	a[j]=t;	   }
      }
    for(int i=1;i<=n;i++)
	  a[i].xuat();
}
