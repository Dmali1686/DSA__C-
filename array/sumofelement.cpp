#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of elements";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
//******sum**********
    int sum =0;
     for(int i=0;i<=n-1;i++){
        sum = sum + arr[i];
    }
     cout<<"The sum is :"<<sum<<endl;
//************product**********
   int pro=1;
   for(int i=0; i<=n-1;i++){
    pro=pro*arr[i];
   }
   cout<<"The product is : "<<pro;
}