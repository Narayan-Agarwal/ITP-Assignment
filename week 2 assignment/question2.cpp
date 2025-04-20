#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the 1st side:";
    cin>>a;
    int b;
    cout<<"enter the 2nd side:";
    cin>>b;
    int c;
    cout<<"enter the 3rd side:";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b){
        cout<<"valid triangle"<<endl;
        if(a==b && b==c){
            cout<<"equilateral triangle";
        }
        else if( a==b || b==c || a==c){
            cout<<"isosceles triangle";
        }
        else{
            cout<<"scalene triangle";
        }
    }
    else{
        cout<<"not a valid triangle";
    }
}

