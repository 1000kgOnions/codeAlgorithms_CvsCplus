#include<bits/stdc++.h>
using namespace std;
class Diem
{
	int hd,td;
	public:
	     void nhap()
	     {
	     	cout<<"Nhap hoang do ";
	     	cin>>hd;
	     	cout<<"Nhap tung do ";
	     	cin>>td;
		 }
		 void xuat()
		 {
		 	cout<<"("<<hd<<","<<td<<")"<<" ";
		 	
		 }
	    float kc()
	    {
	    	return (sqrt(hd*hd+td*td));
	    }
};		
class DiemMau:public Diem
{   int mau;
    public:
	void nhap1()
	{
		Diem::nhap();
		cout<<"nhap mau ";
		cin>>mau;
	}
	void xuat1()
	{
		Diem::xuat();
		switch(mau)
		{
			case 1: cout<<"Red"<<endl; break;
			case 2: cout<<"Yellow"<<endl; break;
			case 3: cout<<"Blue"<<endl; break;
			default: cout<<"DEO CO"; break;
		}
	}
	int getMau()
	{
		return mau;
	}
};
int main()
{
    int i,n;
    DiemMau *A;
    cout<<"Nhap so diem ";
    cin>>n;
    A= new DiemMau[n+1];
    for(i=1;i<=n;i++)
    {
    	A[i].nhap1();
	}
	  for(i=1;i<=n;i++)
	  {
	  	A[i].xuat1();
	  }
	int r=0,y=0,b=0;
	for(i=1;i<=n;i++)
	{
		if(A[i].getMau()==1)
		r++;
	}
	cout<<"So diem mau do :"<<r<<"lan lll ";
		for(i=1;i<=n;i++)
	{
	if(A[i].getMau()==1)
	A[i].xuat();
    }
    	for(i=1;i<=n;i++)
	{
		if(A[i].getMau()==2)
		y++;
	}
	cout<<endl<<"So diem mau vang :"<<y<<"lan lll ";
		for(i=1;i<=n;i++)
	{
	if(A[i].getMau()==2)
	A[i].xuat();
    }
		for(i=1;i<=n;i++)
	{
		if(A[i].getMau()==3)
		b++;
	}
	cout<<endl<<"So diem mau xanh :"<<b<<"lan lll ";
		for(i=1;i<=n;i++)
	{
	if(A[i].getMau()==3)
	A[i].xuat();
    }
    
    
}
