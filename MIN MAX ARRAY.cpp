#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getMax( int num[],int n){
     int maxi = INT_MIN;
     for(int i=0;i<n;i++){
          // if(num[i]>max){
           //    max=num[i];
          // } or change the code in place of max place maxi and  vice versa
          maxi = max(maxi,num[i]); 
             }
             return maxi;
             }
int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
            cin>>num[i];;
            }
            
            cout<<"max value is : "<<getMax(num,size)<<endl;
                      
}
