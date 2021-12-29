#include<bits/stdc++.h>
using namespace std;
class Xe
{
	private:
		string bsx;
		float kg;
	public:
		Xe(){};
		void nhap(){
			cout<<"nhap bien so xe:";
			fflush(stdin);
			getline(cin,bsx);
			cout<<"nhap trong luong xe:";cin>>kg;
		}
		void xuat(){
			cout<<"\nbien so xe:"<<bsx;
			cout<<"\ttrong luong xe:"<<kg;
		}	
		float laykg(){		return kg;		}	
};
class Xecon : public Xe
{
	private:
		int scn;
	public:
		void nhap()
		{
			Xe::nhap();
			cout<<"nhap so cho ngoi:";cin>>scn;
		}
		void xuat(){
			Xe::xuat();
			cout<<"\tso cho ngoi:"<<scn;
		}	
		int layscn(){return scn;	}		
};
main()
{
	int n,m;
	Xecon a[100],b[100];
	cout<<"nhap so luong xe con:";cin>>n;
	cout<<"\nnhap so luong xe tai:";cin>>m;
	cout<<"nhap xe con:\n";
	for(int i=1;i<=n;i++)
       {
		 a[i].nhap();}
        
    cout<<"nhap xe tai:\n";
	for(int i=1;i<=m;i++)
       {
		 b[i].nhap();}
	
		for(int i=1;i<=n;i++){
		a[i].xuat();}
		
		for(int i=1;i<=m;i++){
		b[i].xuat();}
		
    cout<<"\ndanh sach xe con duoi 1 tan va ko qua 5 cho ngoi:";
      for(int i=1;i<=n;i++)
	  if(a[i].laykg()<1000 && a[i].layscn()<=5)
   	     {
			 a[i].xuat();
         }
}
