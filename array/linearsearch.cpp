#include<iostream>
#include<climits>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of element";
  cin>>n;
  int arr[n];
  for(int i = 0; i<=n-1; i++){
    cin>>arr[i];
  }
//   int x;
//   cout<<"enter the number you want to search "<<endl;
//   cin>>x;
//   bool flag = false;
//   for(int i = 0; i<=n-1;i++){
//     if(arr[i]==x) flag =true;
//   }
//   if(flag=true) cout<<"element in present";
//   else cout<<"element not found";

//***************************************************/for maximumn element/***********************************
    // int max = INT_MIN;
    // for(int i=1;i<=n-1;i++){
    //     if(max<arr[i]) max=arr[i];
    // }
    // cout<<"the maximum element is :";
    // cout<<max;

//**************************************************/for minimum element/**************************************
    //  int min =arr[0];
    //         for(int i =1;i<=n-1;i++){
    //             if(min>arr[i]) min=arr[i];
    //         }
    //         cout<<"The lowest element is :"<<min;
//**************secound largest*************
    //  int smax = INT_MIN;
    //         for(int i = 1;i<=n-1;i++){
    //             if(arr[i]!= max && smax < arr[i]) smax=arr[i];
    //         }
    //         cout<<"second largest number:"<<smax;
//****************count the element******************
    // int x;
    // cout<<"Enter that number : "<<endl;
    // cin>>x;
    // int count = 0;
    // for (int i=0;i<=n-1;i++){
    //     if(arr[i]>x) count++;
    // }
    // cout<<"The count is :"<<count;
//***********duplicates************************
    // int x;
    // cout<<"Enter the element want to check";
    // cin>>x;
    bool flag=false;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
        if(arr[i]==arr[j]) flag=true;
        }
        if(flag=true) cout<<arr[i];

    }
}