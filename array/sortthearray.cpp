#include<iostream>
#include<vector>

using namespace std;
    void sort(vector<int> & v1){

//**********************************m1*********************************************************
        // int noz =0;
        // int noo =0;
        // for (int i=0;i<v1.size();i++){
        //     if(v1[i]==0) noz++;
        //     else noo++;
        // }
        // // cout<<"noz"<<noz<<endl;
        // // cout<<"noo"<<noo;


        // for(int i=0; i<v1.size();i++){
        //     if(i<noz) v1[i]=0;
        //     else v1[i]=1;
           
           
        // }
//***********************************m2**********************************************8 */
    // int i =0 ;
    // int j =v1.size()-1;
    // while (i<j){
    //     if (v1[i]==0) i++;
    //     if (v1[j]==1) j--;
    //     else if ((v1[i]==1) && (v1[j]==0)){
    //         v1[i]=0;
    //         v1[j]=1;
    //         i++;
    //         j--;
    //     }
    // } 

    int i =0 ;
    int j =v1.size()-1;
    while (i<j){
        if (v1[i]>0) i++;
        if (v1[j]<0) j--;
        else if ((v1[i]<0) && (v1[j]>0)){
            int temp =v1[i];
            v1[i] =v1[j]  ;
            v1[j]= temp;
            i++;
            j--;
        }
    } 
    
    }
int main (){
    vector<int> v1;
    v1.push_back(-1);
    v1.push_back(2);
    v1.push_back(-2);
    v1.push_back(9);
    v1.push_back(-4);
    v1.push_back(0);
    
    for( int i=0; i<v1.size();i++){
         
         cout<<v1[i]<<" ";
         cout<<endl;
    }
    sort(v1);
       for( int i=0; i<v1.size();i++){
         
         cout<<v1[i]<<" ";

       }
}