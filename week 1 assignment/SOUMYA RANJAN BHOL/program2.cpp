#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides of a triangle: ";
    cin >> a >> b >> c;
    
    if ((a + b > c) && (a + c > b) && (b + c > a)) 
    {
        cout << "A triangle can be formed." << endl;
        
        if (a == b && b == c)
        {
            cout << "The triangle is Equilateral.";
            cout  << endl;
        } 
        else if (a == b || b == c || a == c) 
        {
            cout << "The triangle is Isosceles.";
            cout  << endl;
        }
        else 
        {
            cout << "The triangle is Scalene.";
            cout  << endl;
        }
    } 
    else
    {
        cout << "A triangle cannot be formed with these sides.";
        cout  << endl;
    }
    
    return 0;
}
