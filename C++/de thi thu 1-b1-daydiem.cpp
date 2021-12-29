#include<bits/stdc++.h>
using namespace std;
class Diem
{
	private:
		float x,y;
	public:
//	Diem(){} //ham tao khong doi
//	Diem(float x1,float y1){x=x1;y=y1;	} //ham tao co doi
//	void nhap()
//    	{	cin>>x>>y;	}
//	void xuat()
//	    {	cout<<"\n("<<x<<","<<y<<")";}	
	friend istream& operator>>(istream& is,Diem& a)
		{	 is>>a.x>>a.y;	 return is;	}
	friend ostream& operator<<(ostream& os,Diem& a)
     	{ os<<"("<<a.x<<","<<a.y<<")";	return os;	}
	float kc()
	    {	return sqrt(x*x+y*y);	}
//float kc(Diem &d)          //tinh khoang cach tu diem hien tai toi diem d
//{   return sqrt(pow(x-d.x,2)+pow(y-d.y,2));	}	
//Diem operator*(Diem d) //xay dung ham nhan 2 diem thanh (x1*x2,y1*y2)
//{	Diem t;	t.x=x*d.x;		t.y=y*d.y;		return t;	}
//friend float kc(Diem d1,Diem d2) //tinh khoang cach giua diem d1vad2(dung ham friend)
//{  return sqrt(pow(d1.x-d2.x,2)+pow(d1.y-d2.y,2));	}	
};
main()
{
	int n;
	cout<<"so diem tren mat phang:";cin>>n;
	Diem *a;
	a=new Diem[n+1];
	cout<<"\nnhap danh sach cac diem:\n";
	for(int i=1;i<=n;i++)
	{
	    cout<<"Nhap toa do diem "<<i<<":"; cin>>a[i]; //a[i].nhap();
	}
		cout<<"\ndanh sach cac diem:";
		for(int i=1;i<=n;i++)
        {cout<<"\ntoa do diem"<<i<<":"<<a[i]<<endl;}  //a[i].xuat();
    float tong;
       for(int i=1;i<=n;i++)
            tong += a[i].kc();
    
cout<<"\ntong khoang cach tu cac diem den goc O la:"<<tong;            
    
	float min=a[1].kc();
    for(int i=1;i<=n;i++)
       if(a[i].kc()<min)
       {
       	min=a[i].kc();
	   }
	   	cout<<"\n diem gan goc toa do nhat:";
		for(int i=1;i<=n;i++)
	        {
	      if(a[i].kc()==min)
	      cout<<a[i];   }       
}
