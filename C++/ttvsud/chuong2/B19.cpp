#include<bits/stdc++.h>
using namespace std;
string B19(string s){
    map<char, int> mp;
    for (auto x : s)
    {
        mp[x]++;
    }
    vector<pair<char, int> > vt(mp.begin(), mp.end());
    string c = "";
    for (int i = 0; i < vt.size(); i++)
    {
        for (int j = i+1; j < vt.size(); j++)
        {
            if (vt[i].second < vt[j].second)
            {
                swap(vt[i], vt[j]);
            }
            else if (vt[i].second == vt[j].second)
            {
                if (vt[i].first > vt[j].first)
                {
                    swap(vt[i], vt[j]);
                }
            }
        }
    }
    for (auto x : vt)
    {
        c.push_back(x.first);  //them vao cuoi
    }
    return c;
}
int B21(vector<int> arr1, vector<int> arr2)
{
    map <int, int> a;
    int sum = 0;
    for (auto x : arr1)
        a[x] = x;
    for (auto x : arr2)
    {
        if (a.find(x) != a.end())  //neu phan tu can tim ko phai phan tu cuoi thi di tiep
        {
            sum += a.find(x)->second;
           a[x] = 0;   //sau khi cong vao sum thi xoa di vì moi so chi dc tinh 1 lan
        }
    }
    return sum; 
}
int B22(vector<string> arr)    //Dùng map <string, int> de luu các chuoi trong, voi khóa là các chuoi~ và ánh xa cua nó là chi sô xuat hien dau tiên cua nó.
{
    map<string, int> MAP;
    int d = 0;
    for(int i=0;i<arr.size();i++){
        if(MAP.find(arr[i]) == MAP.end()){
            MAP[arr[i]] = i;
        }
        else{
            d = max(d, i-(MAP.find(arr[i])->second));
        }
    }
    return d;
}
bool B23(vector<int> arr, int sum){
    map<int, int> MAP;
    for (auto x : arr)
        MAP[x]++;         //so nao xuat hien 1 lan thi value la 1,xuat hien 2 lan thi value la 2 -- map(key,value)
    for (auto x : arr)
    {
        if (MAP[sum-x] >= 1)  //xet xem co ton tai so ma sum-x thoa man(VD:6-2=4 thi xem trong arr co ton tai so 4 nua ko)
        {
            if (x != sum-x || (x == sum-x && MAP[x] > 1))    //xem so dag xet hoac la ko lap lai hoac la lap lai 2 lan thi true
                return true;
        }
    }
    return false;
}
int B24(vector<int> arr)  //khoi tao map<int, int> voi khóa là các chu so xuat hien trong arr duoc sap xep tang dan, ánh xa cua nó là tan so cua nó.
// Cuoi cùng chi cân duyet tu dau den cuai dãy và dua ra sô có tan so nho nhat.
{
    map <int, int> MAP;
    for (auto x : arr)
        MAP[x]++;       
    int min = 0;
    int dem = MAP.size();   
    for (auto x : MAP)
    {
        if (x.second <= dem)  //neu so lan xuat hien cua x <= v
        {
            dem = x.second;
            min = x.first;
        }
    }
    return min;
}
vector<int> B25(vector<string> contacts, vector<string> names)
{
    map<string, int> MAP;
    for (auto x : names)
    {
        int dem = 0;
        for (auto y : contacts)
        {   
            bool check = true;
            for (int i = 0; i < x.length(); i++)
            {
                if (x[i] != y[i])
                    check = false;
            }
            if (check==true)
                dem++;
        }
        MAP[x] = dem;
    }
    vector<int> result;
    for(auto name:names){
        result.push_back(MAP[name]);
    }
    return result;
}
vector<int> B26(vector<string> A, vector<string> B){
    map <string, int> MAP;
    for (auto x : A)
    {
        MAP[x]++;
    }  
    vector <int> result;
    for (auto x : B)
    {
        if (MAP[x] == 0)   //neu hang trong B ko co cai nao trung voi voi hang trong A da luu trong map thi thuc hien lenh
        {
            result.push_back(true);
            MAP[x]++;
        } else {
            result.push_back(false);
        }
    }
    return result;
}
 main()
{
	string b19 = B19("helloword");
	int b21 = B21({6,7,5,4,6,8},{2,5,7,5,3});
	vector<string> arr22 = {"b", "a", "c", "d", "a","e"}; //B22
    vector<int> arr23 = {3,-1,3,9,8}; //B23
      vector<int> arr24 = {4,4,2,2,6,6,6}; //B24
      vector<string> a={"Codelearn", "Codewar"}; vector<string> b= {"Code", "Codel", "io"};    //B25
    // ----
	cout<<b19;
	cout<<"\n"<<b21;
	cout<<"\n"<<B22(arr22);
	cout<<"\n"<<B23(arr23,6);
	cout<<"\n"<<B24(arr24)<<"\n";   
    for(auto x :B25(a,b))
	    cout<<x<<' '; 
	    	cout<<"\n";
	for(auto x :B26({"Banana", "Banana", "Apple"},{"Orange", "Apple", "Orange", "Watermelon"}))
		cout<<x<<' '; 
}
