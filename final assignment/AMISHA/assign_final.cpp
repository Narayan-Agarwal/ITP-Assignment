//                  ********    ITP WEEK FINAL ASSIGNMENT   **************
#include<iostream>
using namespace std;

void print_arr(int arr[],int sz){         //function to print array elements function
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
}
//1. Write a C++ program to move all the negative elements to one side of the array.
//CODE
/*int main(){
    int num,i;
    cout<<"Enter the size of array:";
    cin>>num;
    int a[num];
    base(a,num);
    int j=0;
    for(i=0; i<num; i++){    
        if(a[i]<0){
            int temp = a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
    cout<<"Sorted elements:";
    print_arr(a, num);
    return 0;
}*/
//OUTPUT
/*Enter the size of array:6
Enter the elements: 
-1 0 2 3 -6 -4
The array is: -1 0 2 3 -6 -4 
Sorted elements:-1 -6 -4 3 0 2 
*/

//2. Write a C++ program to find the total number of alphabets, digits and special characters in a string.
//CODE
/*int main(){
    string s;
    cout<<"Enter a string:";
    cin>>s;

    int alp=0, dig=0, chr=0;
    for(int j=0; s[j]!='\0'; j++){
        char i = s[j];
        if(i>=48 && i<=57)
        dig++;
        else if((i>=65 && i<=90)||(i>=97 && i<=122))
        alp++;
        else
        chr++;
    }
    cout<<"The total no. of alphabets:"<<alp<<"\ndigits:"<<dig<<"\nspecial character:"<<chr;
    return 0;
}  */
//OUTPUT
/*Enter a string:2ish@9 
The total no. of alphabets:3
digits:2
special character:1    */

//3. Write a C++ program to remove all characters except alphabets in a string.
//CODE
/*int main(){
    string s;
    cout<<"Enter a string:";
    cin>>s;
    cout<<"The required string is:"<<endl;
    for(int i=0; s[i]!='\0'; i++){
        char j = s[i];              //store the current character frm string s at posn i into temp var j
        if(j>=65 && j<122){
            cout<<j;
        }
    }  
    return 0;
}    */
//OUTPUT
/*Enter a string:2ish@9
The required string is:
ish*/

//4. Write a C++ program to rotate an array to the right by k positions--
//CODE
/*int main(){
    int k,j,num;
    cout<<"Enter the size of array:";
    cin>>num;
    int arr[num];
    base(arr, num);

    cout<<"Enter rotation count:";
    cin>>k;
    k%=num;           //will covert number greater than k

    int b[k];
    for(j=0; j<k; j++){
        b[j]=arr[num-k+j];       //store lasst element
    }
    for(j=num-1; j>=k; j--){
        arr[j]=arr[j-k];        //shift rem elements
    }
    for(j=0; j<k; j++){
        arr[j]=b[j];             //insert stored elements
    }
    cout<<"The required array is:";
    print_arr(arr,num);

    return 0;
}       */
//OUTPUT
/*Enter the size of array:6
Enter the elements: 
1 2 3 4 5 6
The array is: 1 2 3 4 5 6 
Enter rotation count:3
The required array is:4 5 6 1 2 3   */

//5. Write a C++ program to remove duplicates from an array and create a new array and store all distinct elements--
//CODE
/*int main(){
    int i,j,num,count=0;
    cout<<"Enter the size of array:";
    cin>>num;
    int og[num],ndp[num];
    base(og, num);

    for(i=0; i<num; i++){
        bool dup = false;
        for(j=0; j<count; j++){
            if(og[i] == ndp[j]){
                dup = true;
                break;
            }
        }
        if(!dup){
            ndp[count] = og[i];
            count++;
        }
    }
    cout<<"Array with distinct elements:";
    print_arr(ndp,count);
    return 0;
}    */
//OUTPUT
/*Enter the size of array:7
Enter the elements: 
1 6 2 4 2 6 3  
The array is: 1 6 2 4 2 6 3 
Array with distinct elements:1 6 2 4 3    */

//6. Write a C++ program to convert a string to lowercase without using inbuilt functions.
//CODE
/*int main(){
    string s;
    cout<<"Enter a string:";
    getline(cin,s);

    for(int i=0; s[i]!='\0'; i++){
        char j = s[i];
        if(j>= 65 && j<=90){
            j = j + 32;
            s[i]= j;      //updates string(w/o this case conversion wont occur)
        }
    }
    cout<<"The string in lowercase: "<<s;
    return 0;
}   */
//OUTPUT
/*Enter a string:CasE ConVerSioN
The string in lowercase: case conversion    */

//7. Write a C++ program to remove all occurrences of a given character from a string.
//CODE
/*int main(){
    string s;
    char c;
    cout<<"Enter a string:";
    getline(cin,s);

    cout<<"Enter a character to remove";
    cin>>c;
    for(int i=0; i<s.length(); ){              //used string functions
        if(s[i] == c){
            s.erase(i, 1);    
        }
        else{i++;}
    }
    cout<<"The string after excluding the character:"<<s<<endl;
    return 0;
}   */
//OUTPUT
/*Enter a string:TELEKENESIS
Enter a character to removeE
The string after excluding the character:TLKNSIS  */

//8. Write a C++ program to check whether a given string is a palindrome. (without using any built-in reverse function)
//CODE
/*int main(){
    char str[30];
    int i,len=0,pal=1;
    cout<<"Enter a string: ";
    cin.getline(str,30);
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='\n')
        break;
        else{len++;}
    }
    for(int i=0; i<len; i++){
        if(str[i]!= str[len-1-i]){
            pal=0;
            break;
        }
    }
    if(pal){
        cout<<"The string is a palindrome";
    }
    else
    cout<<"The string is not a palindrome";
    return 0;
}  */
//OUTPUT
/*Enter a string: abcdcba
The string is a palindrome
Enter a string: ITP ASSIGNMENT DONE
The string is not a palindrome
*/
