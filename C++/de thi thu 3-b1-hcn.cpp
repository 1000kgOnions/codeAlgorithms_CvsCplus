#include<bits/stdc++.h>
using namespace std;
class HCN
{
	private:
		float dai,rong;
	public:
		void nhap(){
			cin>>dai>>rong;
		}
		void xuat(){
			cout<<dai<<","<<rong;
		}
		float dientich()
		{
			return dai*rong;
		}
};
main()
{
	int n,i;
	HCN *a;
	cout<<"so hinh chu nhat:";cin>>n;cout<<endl;
	a=new HCN[n+1];
	for(i=1;i<=n;i++)
	     {	cout<<"nhap chieu dai va chieu rong hcn thu"<<i<<":";a[i].nhap();
		 }
	cout<<"Cac hinh chu nhat hien co:";
	for(i=1;i<=n;i++)
	     {
		    cout<<"\n chieu dai va chieu rong hcn thu"<<i<<":";a[i].xuat();
		 }
	float s=0;
     for(i=1;i<=n;i++)
     s+= a[i].dientich();
	cout<<"\ndien tich trung binh cac hinh chu nhat ="<<s/n;
	float min=a[1].dientich();
	
	for(i=1;i<=n;i++){
		if(a[i].dientich()<min)
		   {
		   	min=a[i].dientich();
		   }
		}
	cout<<"\nhcn co dien tich nho nhat la:";
	for(i=1;i<=n;i++)
		{
		if(a[i].dientich()==min)
		   {
		   	cout<<"\nhinh chu nhat thu "<<i<<":";a[i].xuat();
		   }
		}
}

