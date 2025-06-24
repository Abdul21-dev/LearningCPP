#include<iostream>
using namespace std;

int main(){
    //cout << "Hello World!!" ;
    // cout << "Enter a number :" << endl ;
    // int a;
    // cin >> a;
    // cout << "You Entered :" << a << endl ;

    // Different types of operators
    // Arithmetic
    // int a = 5;
    // int b = 7;
    // cout << a+b << endl ;
    // cout << a-b << endl ;
    // cout << a*b << endl ;
    // cout << a/b << endl ;
    // cout << a%b << endl ;

    // Relational 
    // cout << (a>b) << endl ;
    // cout << (a<b) << endl ;
    // cout << (a>=b) << endl ;
    // cout << (a<=b)<< endl ;
    // cout << (a==b)<< endl ;
    // cout << (a!=b)<< endl ;

    // Logical
   // cout << (a+b && a>b) << endl ;
    // cout << (a+b && a<b) << endl ;
    // cout << (a+b || a>b) << endl ;
    // cout << (a+b || a<b) << endl ;
    // cout << (a+b && (a-b)*(-6)) << endl ;
   // cout << !(a+b && a>b) << endl ;

   // Conditional statement (if-else)
//    cout<< "Enter Your age" <<endl;
//    int age;
//    cin >> age;
//    if(age>=18){
//     cout << "You can vote" << endl;
//    }else{
//     cout << "You cannot vote" << endl;
//    }

// Using else-if statement
// cout << "Enter your marks" <<endl;
// int marks;
// cin >> marks;
// cout << "Your grade is :" << endl;
// if(marks >= 90){
//     cout << "A+" << endl;
// }else if(marks >= 80){
//      cout << "A" << endl;
// }else if(marks >= 60){
//     cout << "C" << endl;
// }else if(marks >= 40){
//     cout << "D" << endl;
// }else{
//    cout << "F" << endl; 
// }

// Using Loops
// cout << "Enter n:" << endl;
// int n;
// cin >> n;
// for(int i=0; i<n; i++){
//     cout << "Abdul Rahman" << endl;
// }

// **Printing Patterns**
// Printing a solid rectangle or square
cout << "Enter number of rows:"<< endl;
int rowCount;
cin >> rowCount;
cout << "Enter number of colums:"<< endl;
int colCount;
cin >> colCount;
// for(int row=0; row<rowCount; row++){
//     for(int col=0; col<colCount; col++){
//         cout << "* ";
//     }
//     cout << endl;
// }

// Printing hollow rectangle or square
for(int row=0; row<rowCount; row++){
    if(row==0 || row==rowCount-1){
        for(int col=0; col<colCount; col++){
            cout << "*";
        }
    }else{
        cout << "*";
        for(int i=0; i<colCount-2; i++){
            cout << " ";
        }
        cout << "*";
    }
    cout << endl;
}
};