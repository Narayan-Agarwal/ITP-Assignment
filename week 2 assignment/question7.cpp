#include <iostream>
using namespace std;

int main() {
    int m;
    cout<<"enter the no. of rows:";
    cin>>m;
    int n;
    cout<<"enter the no. of columns:";
    cin>>n;
    int k = 1;
    for (int i = 1; i <= m; i++) {           
        for (int j = 1; j <= n; j++){       
            cout <<k;
            k++;
            if (j != n) {                   
                cout << " * ";
            }
        }
        cout << endl;
    }

   
}
