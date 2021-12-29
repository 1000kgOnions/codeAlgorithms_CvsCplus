#include<bits/stdc++.h>
using namespace std;
class Dathuc
{ 
    private:
	int n;
	float *a;
	public:
		Dathuc(){  n=0;a=NULL;	}
//		Dathuc(int n1){n=n1;a=new float[n+1];	}
//		void nhap(int n1){		
//			n=n1;
//			a=new float[n+1];
//			cout<<"nhap cac he so cua da thuc:"<<endl;
//			for(int i=0;i<=n;i++)
//			{	cout<<"a["<<i<<"]= ";cin>>a[i];	}	}
	friend istream& operator>>(istream& is,Dathuc& d)
		{   	cout<<"\nbac cua da thuc:";is>>d.n;
		      d.a=new float[d.n+1];
			cout<<"nhap cac he so cua da thuc:"<<endl;
                 for(int i=0;i<=d.n;i++)  //for(int i=d.n;i>=0;i--)
				{ is>>d.a[i]; }    // cout<<"a["<<i<<"]= "
				return is;		}
		friend ostream& operator<<(ostream& os,Dathuc& d)
		{
		     for(int i=0;i<=d.n;i++) //for(int i=d.n;i>=0;i--)
		   {  os<<"\t"<<d.a[i]<<"x^"<<i<<"+";}      return os;	}
//		void xuat()
//		{
//			cout<<"\ncac he so cua da thuc:"<<endl;
//				for(int i=0;i<=n;i++)
//				cout<<a[i]<<"x^"<<i<<"+";
//		}
//	float laya(int e){  return a[e]; }     
		float daoham(float x){
			float dh=0;
			for(int i=0;i<=n;i++)
			 dh+=i*a[i]*pow(x,i-1);
			 return dh;
		}
		float giatri(float x)   //tinh gia tri da thuc tai x 
		{	float s=0; for(int i=0;i<=n;i++) s+=a[i]*pow(x,i); return s;	}
	
};
main()
{
	int n,i;
	Dathuc d;
	cin>>d;     cout<<d<<"\n";
	float x,d1,d2;
	cout<<"\nnhap so thuc x:";cin>>x;
	cin>>d1>>d2;
	cout<<"\ndao ham tai x="<<x<<"la:"<<d.daoham(x);
    cout<<"\ngia tri tai x="<<x<<"la:"<<d.giatri(x);
    cout<<"\ntong P(d1)+P(d2)="<<d.giatri(d1)+d.giatri(d2);
}
