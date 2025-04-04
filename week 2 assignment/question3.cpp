#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a:";
    cin>>a;
    int b;
    cout<<"enter b:";
    cin>>b;
    int c;
    cout<<"enter c:";
    cin>>c;
    if(a>b && a>c){
        cout<<"a is the greatest";
    }
    else if(b>c && b>a){
        cout<<" b is the greatest";
    }
    else{
        cout<<"c is the greatest";
    }
}