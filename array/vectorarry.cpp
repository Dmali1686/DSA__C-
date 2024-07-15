#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    //push_back,size,capacity,pop_back,at,sort
    vector<int>v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(8);
    v.push_back(9);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v[0];
    sort(v.begin(),v.end());
         for(int i=0; i<v.size();i++){
        cout<<v.at(i)<<" " ;
    }
}