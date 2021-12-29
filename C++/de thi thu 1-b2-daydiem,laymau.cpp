#include<bits/stdc++.h>
using namespace std;
class Toado
{
	private:
		float x,y;
	public:
	void nhap(){
		cin>>x>>y;
	}
	void xuat(){
		cout<<"\n("<<x<<","<<y<<")";
	}
	float kc(){
		return sqrt(x*x+y*y);
	}
//float kc(Diem &d)          //tinh khoang cach tu diem hien tai toi diem d
//{   return sqrt(pow(x-d.x,2)+pow(y-d.y,2));	}		
//friend float kc(Diem d1,Diem d2)  //tinh khoang cach giua 2 diem d1 va d2(dung ham friend)
//{  return sqrt(pow(d1.x-d2.x,2)+pow(d1.y-d2.y,2));	}	
};
class Diemmau : public Toado
{
	private:
	 int mau;
	public:
		void nhap()
		{
			Toado::nhap();
	  	cout<<"nhap ma mau:";cin>>mau;
		}
		void xuat(){
			Toado::xuat();
			switch(mau)
		{
			case 1: cout<<"Red"<<endl; break;
			case 2: cout<<"Yellow"<<endl; break;
			case 3: cout<<"Blue"<<endl; break;
			default: cout<<"DEO CO"; break;
		}
		}
		int laymau(){
			return mau;
		}
};
main()
{   int n;
	Diemmau *a;    //Diemmau d1,d2;
	//d1.nhap();  d2.nhap();
      cout<<"so diem tren mat phang:";cin>>n;
      a=new Diemmau[n+1];
	  for(int i=1;i<=n;i++)
	      {	cout<<"\nNhap toa do diem "<<i<<":";a[i].nhap();	}
	  cout<<"\ndanh sach cac diem:";
	  for(int i=1;i<=n;i++)
          {a[i].xuat();}
    //diem co kc max den goc O
   float max=a[1].kc();
   for(int i=1;i<=n;i++)
       if(a[i].kc()>max)
         {	max=a[i].kc(); }
	cout<<"\n cac diem co khoang cach lon nhat den goc toa do:";
	for(int i=1;i<=n;i++)
	     {if(a[i].kc()==max) a[i].xuat();   }       
	//thong ke so diem moi mau;
	cout<<"\nthong ke so diem moi mau:";
    int d=0,b=0,c=0;
    for(int i=1;i<=n;i++)
      {
       {	if(a[i].laymau()==1)
       	      {d++;}
	   }
	   }
	   	cout<<"\nso diem mau Do la:"<<d;
	
	for(int i=1;i<=n;i++)
      {
       {	if(a[i].laymau()==2)
       	      {b++;}
	   }
	   }
	   	cout<<"\nso diem mau Vang la:"<<b;
	 
	  for(int i=1;i<=n;i++)
      {
       {	if(a[i].laymau()==3)
       	      {c++;}
	   }
	   }
	   	cout<<"\nso diem mau Xanh la:"<<c;  
	   	//cout<<"khoang cach tu diem 1 den diem 2 la:"; cout<<kc(d1,d2);
}

   
