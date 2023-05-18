#include <bits/stdc++.h>
using namespace std;

int f6(vector<int>nums, int n)
{
    if (n == 1)
        return nums[0];
    return max(nums[n-1], f6(nums, n-1));
}

int f5(vector<int>nums, int n)
{
    if (n == 1)
        return nums[0];
    return min(nums[n-1], f5(nums, n-1));
}

void f4(vector<int>nums, int n){
    int i;
    if(n>0)
    {
        i=n-1;
        cout<<nums[i]<<" ";
        f4(nums,i);
    }
return;
}

void f3(vector<int>nums, int i){
    if(i == nums.size())
        return ;
    cout<<nums[i]<<" ";
    f3(nums,i+1);
}

void f2(int n){
    if(n==0)
        return ;
    cout<<n<<" ";
    f2(n-1);
}

void f1(int n){
    if(n==0)
        return ;
    f1(n-1);
    cout<<n<<" ";
}

int main(){
    cout<<"1 . print numbers from 1 to n"<<endl;
    cout<<"2 . print numbers from n to 1"<<endl;
    cout<<"3 . print array recursively"<<endl;
    cout<<"4 . print array recursively(reverse order)"<<endl;
    cout<<"5 . print min in array"<<endl;
    cout<<"6 . print max in array"<<endl;
    
    int choice;
    cout<<"Enter the choice : ";
    cin>>choice;

    if(choice == 1){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
        f1(n);
    }

    else if(choice == 2){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    f2(n);
    }

    else if(choice == 3){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    vector<int>nums;
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            nums.push_back(data);
        }
        f3(nums,0);
    }

    else if(choice == 4){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    vector<int>nums;
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            nums.push_back(data);
        }
        f4(nums,n);
    }

    else if(choice == 5){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    vector<int>nums;
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            nums.push_back(data);
        }
        int mx=f5(nums,n);
        cout<<"The minimum element is : "<<mx;
    }
    else if(choice == 6){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    vector<int>nums;
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            nums.push_back(data);
        }
        int mx=f6(nums,n);
        cout<<"The maximum element is : "<<mx;
    }
    else    
        cout<<"Wrong Choice";

    return 0;
}

