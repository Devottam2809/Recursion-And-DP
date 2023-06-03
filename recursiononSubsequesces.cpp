#include <bits/stdc++.h>
using namespace std;

void f(int idx,int n,int arr[],vector<int>ds){
    if(idx == n){
        for(auto i:ds)
            cout<<i<<" ";
        cout<<endl;
    if(ds.size()==0)
        cout<<"{}";
    return;
    }
    ds.push_back(arr[idx]);
    f(idx+1,n,arr,ds);
    ds.pop_back();
    f(idx+1,n,arr,ds);
}

int main()
{   int arr[]={3,1,2};
    int n=3;
    vector<int>ds;
    f(0,n,arr,ds);
    return 0;
}
