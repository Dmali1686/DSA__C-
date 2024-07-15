#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the size of arry :";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        int q;
        cout<<"Enter the number";
        cin>>q;
        v.push_back(q);
        break;
    }
     int x;
     cout<<"Enetr the target :";
     cin>>x;
        for(int i=0;i<=v.size()-2;i++){
            for(int j=i+1;i<=v.size()-1;j++){
             if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")";
            }

        }
    }
 }  
//      int m = nums1.size();
//         int n = nums2.size();
//         vector<int> & v(m+n) ;
//         int i = 0;
//         int j = 0;
//         int k = 0;
//         while(i<=m-1 && j<=n-1){
//             if(nums1[i]<nums[j]){
//                 v[k]=nums[i];
//                 i++;
//             }
//             else{
//                 v[k]=nums[j];
//                 j++;
//             }
//             k++;
//             if(i>=n){
                
//             }
//         }
          
//     }