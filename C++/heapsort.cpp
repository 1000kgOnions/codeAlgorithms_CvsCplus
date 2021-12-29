//Heapsort
#include<bits/stdc++.h>
using namespace std;
void vun(int *a,int n,int k)  //chu y day a danh chi so tu 1 den n
{
	if(2*k>n) return;
	int p=2*k; 
	if(2*k+1<=n &&a[2*k+1]>a[p]) p++;
	if(a[k]<a[p]) {swap(a[k],a[p]); vun(a,n-1,p);}
}
void heapsort(int *a,int n)
{
	//Tao dong
	for(int i=n/2;i>=0;i--) vun(a,n,i);
	for(int i=n;i>=1;i--)
	{
		swap(a[0],a[i]);
		vun(a,i-1,0);
	}
}
int main()
{
	int a[]={700,24,600,3,3412,2413,34,345,432,56},n=sizeof(a)/sizeof(int);
	heapsort(a,n-1);
	cout<<"\nDay sau khi sap xep\n";
	for(int i=0;i<n;i++) cout<<setw(5)<<a[i];
}


