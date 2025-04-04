//                  ********    ITP WEEK 1 ASSIGNMENT   **************
//1
/*Write a program to print the numbers from 1 to 100, but
replace multiples of 3 with "Fizz" and multiples of 5 with "Buzz" and if divisible
by both print “FizzBuzz”. */

/*//CODE
#include<iostream>        
using namespace std;
int main(){
    int i;
    for(i=1; i<=100; i++){
        if(i%3 == 0)
        cout<<"Fizz"<<endl;
        else if(i%5 == 0)
        cout<<"Buzz"<<endl;
        else if(i%3 ==0 && i%5 ==0)
        cout<<"FizzBuzz"<<endl;
        else
        cout<<i<<endl;
    }
    return 0;
}*/
 
/*OUTPUT
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
Fizz
16
17
Fizz
19
Buzz
Fizz
22
23
Fizz
Buzz
26
Fizz
28
29
Fizz
31
32
Fizz
34
Buzz
Fizz
37
38
Fizz
Buzz
41
Fizz
43
44
Fizz
46
47
Fizz
49
Buzz
Fizz
52
53
Fizz
Buzz
56
Fizz
58
59
Fizz
61
62
Fizz
64
Buzz
Fizz
67
68
Fizz
Buzz
71
Fizz
73
74
Fizz
76
77
Fizz
79
Buzz
Fizz
82
83
Fizz
Buzz
86
Fizz
88
89
Fizz
91
92
Fizz
94
Buzz
Fizz
97
98
Fizz
Buzz*/

//2
/*Write a C++ program to input 3 sides of triangle and a triangle can be drawn
from it or not, if triangle can be drawn then check if it is equilateral, isosceles or
scalene triangle.*/

/*//CODE
#include<iostream>            
using namespace std;
int main(){
    float a, b, c;
    cout<<"Enter the three sides of a triangle - "<<endl;
    cin>> a >> b >> c;

    if(a+b>c && b+c>a && a+c>b){
        if(a == b && b == c && c == a)
        cout<<"This triangle is an equilateral triangle"<<endl;
        else if(a == b || a == c || b == c)
        cout<<"This triangle is an isosceles triangle"<<endl;
        else
        cout<<"This triangle is a scalene triangle"<<endl;
    }
    else
    cout<<"This is not a triangle"<<endl;
    return 0;
}*/

/*OUTPUT
Enter the three sides of a triangle -
9 9 9
This triangle is an equilateral triangle
Enter the three sides of a triangle - 
1 1 8
This is not a triangle*/

//3
/*Write a C++ program to find the largest digit in a number*/

/*//CODE
#include<iostream>             
using namespace std;
int main(){
    int num,x,max=0;
    cout<<"Enter a number"<<endl;
    cin>>num;
    while(num!=0){
        x=num%10;
        if (x>max)
        max=x;
        num=num/10;
    }
    cout<<"The largest digit in the number is:"<<max<<endl;
    return 0;
}*/

/*OUTPUT
Enter a number
297
The largest digit in the number is:9*/

//4
/*Write a C++ program to input a decimal number and convert it into binary and
octal number system using loops.*/

/*//CODE
#include <iostream>
using namespace std;
int main(){
    int i,num,quo,j;
    cout<<"Enter a decimal number- "<<endl;
    cin>>num;
    int bi[15],oc[15];
    i=0;
    quo = num;
    while(quo > 0){
        bi[i]=quo%2;
        quo /= 2;
        i++;
    }
    cout<<"The number in binary number system is:";
    for(j=i-1;j>=0;j--){
        cout<<bi[j];
    }
    cout<<endl;

    i=0;
    quo = num;
    while(quo > 0){
        oc[i]=quo%8;
        quo/=8;
        i++;
    }
    cout<<"The number in octal number system is:";
    for(j=i-1;j>=0;j--){
        cout<<oc[j];
    }
    return 0;   
}*/

/*OUTPUT
Enter a decimal number- 
999
The number in binary number system is:1111100111
The number in octal number system is:1747  */

//5
/*Write a C++ program to check if a Number is Perfect square using loops.*/

/*//CODE
#include<iostream>
using namespace std;

int main(){
    int num,i;
    bool perf = false;
    cout<<"Enter a number"<<endl;
    cin>>num;
    for (i=0;i<=num;i++){
        if (i*i==num){
            perf = true;
            break;
        }
        if(i*i > num){
            break;
        }
    }
    if(perf)
    cout<<num<<" is a perfect square"<<endl;
    else 
    cout<<num<<" is not a perfect square"<<endl;
    return 0;
}   */

/*//OUTPUT
Enter a number
99
99 is not a perfect square    */

//6
/*Write a C++ program to print the pattern
sample output: for n=3                   for n=2
               123                   12
               112233                1122
               111222333                                    */

/*//CODE
#include <iostream>
using namespace std;
int main(){
    int num,i,j,k;
    cout<<"Enter any number"<<endl;
    cin>>num;
    for (i=1;i<=num;i++){
        for(k=1;k<=num;k++){
            for(j=1;j<=i;j++)
            {
                cout<<k;
            }
        }
        cout<<endl;
    }
    return 0;
} */

/*//OUTPUT
Enter any number
3
123
112233
111222333                  */

//7
/*Write a C++ program to print the pattern
sample output: for n=3              sample output: for n=4
               1*2*3                 1*2*3*4
               4*5*6                 5*6*7*8
               7*8*9                 9*10*11*12                     */

/*//CODE
#include <iostream>
using namespace std;
int main(){
    int i,j,a,num;
    a=1;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    for(i=1; i<=num; i++){
        for(j=1; j<=num; j++){
            cout<<a++;
            if (j!=num){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}  */

/*//OUTPUT
Enter a number:
3
1*2*3
4*5*6
7*8*9     */

//8
/*Write a C++ program to print the pattern
sample output: for n=4
1      1
12    21
123  321
12344321              */

/*//CODE
#include <iostream>
using namespace std;
int main(){
    int num,i,j,a,b;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    for(i=1;i<=num;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
    
        for(a=1; a<= 2*(num - i);a++){
            cout<<" ";
        }

        for(b=i; b>=1; b--){
            cout<<b;
        }
        cout<<endl;
    }
    return 0;
}           */

/*//OUTPUT
Enter a number:
4
1      1
12    21
123  321
12344321                 */