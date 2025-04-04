#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int i;  
    for( i=1;i<=n;i++){
        if(i*i==n){
            break;
        }
    }
        if(i*i==n){
            cout<< n << "is a perfect square"<<endl;
        }
        else{
            cout<< n <<"is not a perfect square"<<endl;
        }
    }   