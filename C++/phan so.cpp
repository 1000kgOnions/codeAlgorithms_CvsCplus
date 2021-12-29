#include<bits/stdc++.h>
using namespace std;
class phanso
{
	private:
		int ts,ms;
		int ucln(int a,int b)	{while(a != b) {if(a>b) a -= b;else b-=a;} return a;};
	public:
	//void nhap(){ cout<<"\ntu so,mau so:";cin>>ts>>ms;}
	//void xuat(){ cout<<ts/ucln(ts,ms)<<"/"<<ms/ucln(ts,ms);	}
	friend istream &operator>>(istream &is,phanso& p) //xay dung ham nhap =toantu
    	{		is>>p.ts>>p.ms;   	return is;		}
	friend ostream &operator<<(ostream &os,phanso& p) //xay dung ham xuat =toantu
    	{	os<<p.ts<<"/"<<p.ms;    return os;	    }
	phanso operator*(phanso p)    //nhan 2 phan so
     	{	phanso t;  t.ts=ts * p.ts;     t.ms=ms * p.ms;	return t; }
	phanso operator++()        //tang truoc them 1 don vi --prefix
		{    this->ts=ts+ms; return *this;  	}
	phanso operator++(int)        //tang sau them 1 don vi --postfix
		{ phanso t; t=*this; ts=ts+ms; return t;}
	void rutgon()            //rut gon phan so
		{   int d=__gcd(ts,ms);	    if(d){ts /=d;ms /=d;}	}
	phanso operator+(phanso& q)   //cong 2 phan so
		{  phanso p;
		   p.ts=ts*q.ms+ms*q.ts;
		   p.ms=ms*q.ms;
		   p.rutgon();
		   return p;	}
	bool operator>(phanso p)  //so sanh xem so dung truoc co lon hon so dung sau ko?
		{
			int a=ts*p.ms-ms*p.ts;
			int b=ms*p.ms;
			return b*a>0;
		}
//	friend phanso operator*(phanso p1,phanso p2);  //nhan 2 phan so--dung friend
};
//        phanso operator*(phanso p1,phanso p2)
//    {  	phanso t; t.ts =p1.ts*p2.ts; t.ms=p1.ms*p2.ms;  return t;   }
main()
{
  phanso p,q,tong,tich;
  cin>>p>>q;          //p.nhap(); q.nhap();
  cout<<p<<"  "<<q;   //dung toantu is,os
  cout<<endl;
   tong=p+q;   //tong
   cout<<tong<<endl;
   tich=p*q;   //tich
   cout<<tich<<endl;
   tich=tich++;  //tang truoc
   cout<<"sau khi tang SAU 1 ="; cout<<tich;
    tich=++tich;  //tang sau
    cout<<"sau khi tang TRUOC 1 ="; cout<<tich;
}

