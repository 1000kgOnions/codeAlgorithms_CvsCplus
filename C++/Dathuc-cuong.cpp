#include<bits/stdc++.h>
using namespace std;

class DT{
	private:
		int *a;
		int mu;
	public:
		void nhap(){
			cout<<"Nhap bac cua da thuc:"; cin>>mu;
			a = new int[mu+1];
			for( int i = 0; i<= mu; i++){
				cout<<"\nHe so bac"<<i;
				cin>>a[i];
			}
		}
		int laya(int i){
			return a[i];
		}
		int laymu(){
			return mu;
		}
};
int main(){

	DT p;
	p.nhap();
	float x;
	cout<<"\nNhap x:";
	cin>>x;
	float s=0;
	for( int i = 1; i<= p.laymu(); i++){
		s+= p.laya(i)*i*pow(x,i-1);
	}
	cout<<"\nDao ham cua ham so tai x="<<x<<" la:"<<s;
}

