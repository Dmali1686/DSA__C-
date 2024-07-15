// #include<iostream>
// using namespace std;
// int main(){
//     int mark[6];
//     for(int i=0;i<=5;i++){
//         cin>>mark[i];
//     }
//     for(int i=0; i<=5 ;i++){
//         if(mark[i]<35) cout<<i<<" ";
//     }
// }
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
    int sum;
     for(int i=0;i<=n-1;i++){
        sum = sum+arr[i];
    }
     cout<<sum;
}