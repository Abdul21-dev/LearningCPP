#include<iostream>
using namespace std;

int main(){
    //cout << "Hello World!!" ;
    // cout << "Enter a number :" << endl ;
    // int a;
    // cin >> a;
    // cout << "You Entered :" << a << endl ;

    //Printing a rectangle
    cout << "Enter length:"<< endl;
    int a;
    cin>>a;
    cout << "Enter breadth:"<< endl;
    int b;
    cin>>b;
    // for(int row=0; row<a; row++){
    //     for(int col=0; col<b; col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // similar for square length and breadth are same

    //Printing hollow rectangle or square
    for(int row=0; row<a; row++){
        if(row==0 || row==a-1){
        for(int col=0; col<b; col++){
            cout << "* ";
        }
        }else{
            cout<< "* ";
            for(int col=0; col<b-2; col++){
                cout << "  ";
            }
            cout<< "* ";
        }
        cout << endl;
    }    


    // Printing hollow hollow half-pyramid
    // cout << "Enter number of rows:" << endl;
    // int n;
    // cin>>n;
    //  for(int row=0; row<n; row++){
    //     if(row==0||row==n-1){
    //         for(int col=0; col<n-row; col++){
    //             cout << "* ";
    //         }
    //         }else{
    //             cout << "*";
    //             for(int col=0; col<n-1-row; col++){
    //                 cout << "  ";
    //             }
    //             cout << "* ";
    //     }
    //     cout << endl;
    //  }

    // Printing a full Pyramid
    // cout << "Enter number of rows:" << endl;
    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     int k=0;
    //    for(int col=0; col< 2*n+1; col++){
    //     if(col<n-row-1){
    //         cout << " ";
    //     }else if(k<2*row+1){
    //         cout << "*";
    //         k++;
    //     }else{
    //         cout << " ";
    //     }
    //    }
    //     cout<<endl;
    // }

    // Printing hollow pyramid
    // cout << "Enter number of rows:" << endl;
    // int n;
    // cin>>n;
    // for(int row=0; row<n; row++){
    //     int k=0;
    //    for(int col=0; col< 2*n+1; col++){
    //     if(col<n-row-1){
    //         cout << " ";
    //     } else if(k<2*row+1){
    //         if(k==0 || k==2*row || row==n-1){
    //           cout<< "*";
    //         }else{
    //             cout<< " ";
    //     }
    //         k++;
    //      }
    //       else{
    //         cout << " ";
    //     }
    //    }
    //     cout<<endl;
    // }
};