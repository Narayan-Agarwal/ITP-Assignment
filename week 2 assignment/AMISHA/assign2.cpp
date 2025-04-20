
//                  ********    ITP WEEK 2 ASSIGNMENT   **************
#include <iostream>                     
using namespace std;

//7. Find the Nth Fibonacci number using recursion.
//CODE
/*int fib(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return(fib(n-1)+fib(n-2));
}
int main(){
    int i,num;
    cout<<"Enter the term:"<<endl;
    cin>>num;
    cout<<"The Nth term is:"<<fib(num)<<endl;
    return 0;
} */

//OUTPUT
/*Enter the term:
3
The Nth term is:2*/

//8. Find the sum of digits of a number using recursion.
//CODE
/*int digit(int n){
    if(n<10)
    return n;

    return (n%10)+ digit(n/10);
}
int main(){
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    int sum =digit(num);
    cout<<"Sum of digits: "<<sum<<endl;
    return 0;
}  */
//OUTPUT
/*Enter a number:
264
Sum of digits: 12        */

//9. Print all elements of an array using recursion--
//CODE
/*void base(int arr[],int a,int unit=0){
    if (unit == a){
    return;
    }
    cin>>arr[unit];
    base(arr, a, unit+1);
}
void print(int arr[],int a, int unit=0){
    if(unit >= a){
        cout<<endl;
        return;
    }
    cout<<arr[unit]<<" ";
    print(arr, a,unit+1);
}
int main(){
    int n,i;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:";
    base(arr, n);
    cout<<"\nThe array is:";
    print(arr, n);
    return 0;
}   */
//OUTPUT
/*Enter the size of array:4
Enter the elements of array:1
2
3
4

The array is:1 2 3 4    */


/*6. Write a C++ program that takes two 2D arrays (matrices) of size 3×3 as input from the user. First, the program should calculate and
print the sum of the two original matrices. After that, it should compute the transpose of both the original matrices. Finally, the program
should calculate and display the sum of the two transposed matrices as well -_- */
//CODE

/*void base(int arr[10][10],int p,int q){   
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>arr[i][j];
        }
    }
}
void print(int arr[10][10],int p,int q){
    cout<<"The matrix is:"<<endl;
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void sum(int a[10][10],int b[10][10],int arr[10][10],int p,int q){
    int i,j;
    for(i=0; i<p; i++){
        for(j=0; j<q; j++){
            arr[i][j] = a[i][j]+b[i][j];
        }
    }
}
void trsp(int a[10][10],int b[10][10],int p,int q){
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            b[j][i]=a[i][j];
        }
    }
}
int main(){
    int n,m;
    cout<<"Enter the size of matrix: "<<endl;  
    cin>>m>>n; 
    int arr1[10][10],arr2[10][10];
    cout<<"Enter the elements for matrix1:";
    base(arr1,m,n);
    cout<<"Enter the elements for matrix2:";
    base(arr2,m,n);

    int sum1[10][10];
    sum(arr1,arr2,sum1,m,n);
    cout<<"The sum of 2 matrices:"<<endl;
    print(sum1,m,n);

    int tsp1[10][10],tsp2[10][10];
    cout<<"The transpose of matrix1:"<<endl;
    trsp(arr1,tsp1,m,n);
    print(tsp1,m,n);
    cout<<"The transpose of matrix2:"<<endl;
    trsp(arr2,tsp2,m,n);
    print(tsp2,m,n);

    int tsum[10][10];
    sum(tsp1,tsp2,tsum,m,n);
    cout<<"The sum of 2 matrices:"<<endl;
    print(tsum,m,n);
    return 0;
}  */
//OUTPUT
/*Enter the size of matrix: 
3 3
Enter the elements for matrix1:1 2 3 4 5 6 7 8 9
Enter the elements for matrix2:1 4 7 2 5 8 3 6 9
The sum of 2 matrices:
The matrix is:
2 6 10 
6 10 14 
10 14 18 
The transpose of matrix1:
The matrix is:
1 4 7 
2 5 8 
3 6 9 
The transpose of matrix2:
The matrix is:
1 2 3 
4 5 6 
7 8 9 
The sum of 2 matrices:
The matrix is:
2 6 10 
6 10 14 
10 14 18    */


/*1. Take two array as input, merge them and print it in reverse order
using loop*/
//CODE
/*
int main(){
    int i,n1,n2;
    int a[10], b[10], c[20];
    cout<<"Enter the size of 1st array(max.10): "<<endl;//array created
    cin>>n1;
    cout<<"Enter the elements:"<<endl;
    for(i=0; i<n1; i++){
        cin>>a[i];
    }
    cout<<"Enter the size of 2nd array(max.10): "<<endl;
    cin>>n2;
    cout<<"Enter the elements:"<<endl;
    for(i=0; i<n2; i++){
        cin>>b[i];
    }
    
    int mersz=n1+n2;              //merge 2 arrays
    for(i=0; i<n1; i++){
        c[i]=a[i];
    }
    for(i=0; i<n2; i++){
        c[n1+i]=b[i];
    }
    cout<<"\nMerged array:\n";
    for(i=0; i<mersz; i++){
        cout<<c[i]<< " ";
    }

    cout<<"\nMerged array in reverse order:\n";
    for(i=mersz - 1; i>=0; i--){
        cout<<c[i]<< " ";
    }

    return 0;
}*/
//OUTPUT
/*Enter the size of 1st array(max.10): 
4
Enter the elements:
1 2 3 4
Enter the size of 2nd array(max.10): 
3
Enter the elements:
5 6 7

Merged array:
1 2 3 4 5 6 7 
Merged array in reverse order:
7 6 5 4 3 2 1 */


//_____________________Here i hv used 2 recurring block of code as a user defined function for 2,3,4,5______________________________________________________        

/*void print_arr(int arr[],int sz){         //function to print array elements function
    for(int i=0; i<sz; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
void base(int arr[], int n){             //function to input elements & print
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The array is: ";
    print_arr(arr, n);
}*/

//2.Write a C++ program to sort a given array using function.
//CODE
/*void sort(int [],int);           //function prototype
int main(){
    int i,n;
    cout<<"Enter the size of array: "<<endl;  
    cin>>n; 
    int arr[n];   
    base(arr,n);                 //enter element function call
    cout<<"\nThe sorted array is:";
    sort(arr,n);
    print_arr(arr, n);
    return 0;
}

void sort(int arr[], int sz){        //bubble sort algo function--
    for(int i =0; i < sz-1; i++){
        for(int j =0; j < sz-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
}
*/
//OUTPUT
/*Enter the size of array: 
6
Enter the elements: 
5 8 9 4 3 2
The array is: 5 8 9 4 3 2 

The sorted array is:2 3 4 5 8 9  */


//3. Write a C++ program to copy the elements of one array into another array.
//CODE
/*int main(){
    int i,n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr1[n],arr2[n];
    base(arr1,n);
    for(i=0; i<n; i++){
        arr2[i]=arr1[i];                //copies elements of original array to copied one
    }
    cout<<"The elements of copied array:";
    print_arr(arr2, n);
    return 0;
} */
//OUTPUT
/*Enter the size of array:
6
Enter the elements:
1 2 3 4 5 6
The array is: 1 2 3 4 5 6
The elements of copied array:1 2 3 4 5 6   */


//4. Write a C++ program to find maximum occurring integer in an array.
//CODE
/*int main(){
    int n,i,count=0;
    cout<<"Enter the size of array"<<endl;    
    cin>>n;
    int arr[n];
    base(arr, n);

    int maxin = arr[0];       //assume a basis element
    for(i=0; i<n; i++){
        int ct = 1;
        for(int j = i+1; j<n; j++){
            if (arr[i] == arr[j]){      //brackets are v.imp
            ct ++;
            }
        }
        if(ct > count){
            count = ct;
            maxin = arr[i];       //replaced after running the program
        }
    }

    cout<<"Maximum occuring integer "<<maxin<<" occuring a total of "<<count<<" times"<<endl;
    return 0;
}  */
//OUTPUT
/*Enter the size of array
7
Enter the elements: 
4 6 2 6 1 6 4
The array is: 4 6 2 6 1 6 4 
Maximum occuring integer 6 occuring a total of 3 times  */


//5. Write a C++ program to find the second smallest elements in a given array of integers(all elements of array distinct)--
//CODE
/*int main(){
    int i,n;
    cout<<"Enter the size of array: "<<endl;  
    cin>>n; 
    int arr[n];
    base(arr,n);

    int min=arr[0], min2=arr[0];
    for(i=1; i<n; i++){
        if (min>arr[i])
        min = arr[i];
    }
    cout<<"The smallest element in the array:"<<min<<endl;
    for(i=0; i<n; i++){
        if(arr[i]>min && (min2 == min || arr[i]< min2))
        min2 = arr[i];
    }
    cout<<"The second smallest element in the array:"<<min2<<endl;
    return 0;
}   */
//OUTPUT
/*Enter the size of array: 
6
Enter the elements: 
-1 6 -2 4 2 1
The array is: -1 6 -2 4 2 1 
The smallest element in the array:-2
The second smallest element in the array:-1   */

