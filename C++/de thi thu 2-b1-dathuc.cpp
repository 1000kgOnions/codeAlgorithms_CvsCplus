#include<bits/stdc++.h>
using namespace std;
class Dathuc
{ 
    private:
	int n;
	float *a;
	public:
		void nhap(int n1){		
			n=n1;
			a=new float[n+1];
			cout<<"nhap cac he so cua da thuc:"<<endl;
			for(int i=0;i<=n;i++)
			{
				cout<<"a["<<i<<"]= ";cin>>a[i];
			}
		}
		void xuat()
		{
			cout<<"\ncac he so cua da thuc:"<<endl;
				for(int i=0;i<=n;i++)
				cout<<a[i]<<"x^"<<i<<"+";
		}
		float daoham(float x){
			float dh=0;
			for(int i=0;i<=n;i++)
			 dh+=i*a[i]*pow(x,i-1);
			 return dh;
		}
		float giatri(float x)   //tinh gia tri da thuc tai x  (them)
		{
			float s=0; for(int i=0;i<=n;i++) s+=a[i]*pow(x,i); return s;
		}
};
main()
{
	int n,i;
	Dathuc d;
	float x;
	cout<<"\nbac cua da thuc:";cin>>n;
	d.nhap(n);
	cout<<endl;
	d.xuat();
	cout<<"\nnhap so thuc x:";cin>>x;
	cout<<"\ndao ham tai x="<<x<<"la:"<<d.daoham(x);
//	cout<<"\ngia tri tai x="<<t<<"la:"<<d.giatri(x);  (them)
}
