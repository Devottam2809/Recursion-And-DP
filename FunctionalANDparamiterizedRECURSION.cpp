#include<iostream>
using namespace std;

int fact2(int n){
    if(n==0)
        return 1;
return n*fact2(n-1);
}

void fact1(int n,int sum){
    if(n<1){
        cout<<sum;
    return ;
    }
    fact1(n-1,sum+n);
}

int main()
{
    int n;
    int sum=0;
    cin>>n;
  //  fact1(n,sum);     passing of parameter
  // cout<<fact2(n);    functional
    return 0;
}
