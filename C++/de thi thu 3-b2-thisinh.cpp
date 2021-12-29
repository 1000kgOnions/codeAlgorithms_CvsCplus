#include<bits/stdc++.h>
using namespace std;
class Thisinh
{
	private:
		string ht;
		float diem;
	public:
		void nhap()
		{	
		  fflush(stdin);
		  cout<<"\nnhap ho ten thi sinh:"; getline(cin,ht);
		  cout<<"diem cua thi sinh:";cin>>diem;	
		}
		void xuat()
		{
			cout<<"\nho ten thi sinh:"<<ht;
			cout<<"\tdiem cua thi sinh:"<<diem; 	}
		float docdiem(){	return diem;	}
		
};
class Olympic: public Thisinh
{
	private:
		string truong;
	public:
		void nhap(){
			Thisinh::nhap();
			fflush(stdin);
			cout<<"nhap ten truong:";	getline(cin,truong);}
		void xuat(){
			Thisinh::xuat();
			cout<<"\ttruong:"<<truong;	}
		string laytruong(){		return truong;	}
};
main()
{
	int n,i;
	Olympic *a;
	cout<<"so thi sinh tham gia:";cin>>n;
	a=new Olympic[n+1];
	for(i=1;i<=n;i++)
	{ a[i].nhap(); }
	cout<<"\ndanh sach thi sinh:";
		for(i=1;i<=n;i++)
	{ a[i].xuat(); }
	//tinh tong diem cac truong va tim truong co tong max
	float dA=0,dB=0,dC=0,max;
	for(i=1;i<=n;i++)
	{
		if(a[i].laytruong()=="A") dA+= a[i].docdiem();
		if(a[i].laytruong()=="B") dB+= a[i].docdiem();
		if(a[i].laytruong()=="C") dC+= a[i].docdiem();
	}
	cout<<"\ntong diem cua 3 truong A,B,C lan luot la:"<<dA<<",,,"<<dB<<",,,"<<dC;
	max=dA>dB?dA:dB; 
	max=max>dC?max:dC;
	if(max==dA)
	cout<<"\ntruong A co tong diem cao nhat la:"<<max;
	else{
		if(max==dB)
			cout<<"\ntruong B co tong diem cao nhat la:"<<max;
	    else 
		cout<<"\ntruong C co tong diem cao nhat la:"<<max;
	    }
	//thong ke so thi sinh tham gia cua moi truong
	int tA=0,tB=0,tC=0;
	for(i=1;i<=n;i++)
	{ 	if(a[i].laytruong()=="A")
		  tA++;	}
	cout<<"\nso thi sinh cua truong A tham gia la:"<<tA;
		for(i=1;i<=n;i++)	{
		if(a[i].laytruong()=="B")
		      tB++;	}
	cout<<"\nso thi sinh cua truong B tham gia la:"<<tB;
	for(i=1;i<=n;i++)
	{    if(a[i].laytruong()=="C")
		         tC++;	}
	cout<<"\nso thi sinh cua truong C tham gia la:"<<tC;	
	}
