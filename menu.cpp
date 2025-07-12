#include<iostream>
using namespace std;

void Printfunction(){
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Abdul"<<endl;
    }
}
int main(){
    //cout << "Hello World!!" ;
    // cout << "Enter a number :" << endl ;
    // int a;
    // cin >> a;
    // cout << "You Entered :" << a << endl ;

    //Printing a rectangle
    // cout << "Enter length:"<< endl;
    // int a;
    // cin>>a;
    // cout << "Enter breadth:"<< endl;
    // int b;
    // cin>>b;
    // for(int row=0; row<a; row++){
    //     for(int col=0; col<b; col++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // similar for square length and breadth are same

    //Printing hollow rectangle or square
    // for(int row=0; row<a; row++){
    //     if(row==0 || row==a-1){
    //     for(int col=0; col<b; col++){
    //         cout << "* ";
    //     }
    //     }else{
    //         cout<< "* ";
    //         for(int col=0; col<b-2; col++){
    //             cout << "  ";
    //         }
    //         cout<< "* ";
    //     }
    //     cout << endl;
    // };


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

    //Different approach for full pyramid
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row++){
    //     // for spaces
    //     for(int col=0; col<n-row-1; col++){
    //         cout << " ";
    //     }
    //     // for stars
    //     for(int k=0; k<row+1; k++){
    //        cout << "* ";
    //     }
    //     cout<<endl;
    // }

    // Different approach for hollow full pyramid
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row++){
    //     // for spaces
    //     for(int col=0; col<n-row-1; col++){
    //         cout << "  ";
    //     }
    //     // for stars
    //     for(int k=0; k<2*row+1; k++){
    //       if(k==0 || k==2*row || row==n-1){
    //         cout << "* ";
    //       }else{
    //         cout << "  ";
    //       }
    //     }
    //     cout<<endl;
    // }
    // return 0;

    // Printing reverse pyramid
    // int n;
    // cin >> n;
    // for(int row=0; row<n-1; row++){
    //     // for spaces
    //     for(int col=1; col<n-row-1; col++){
    //         cout << " ";
    //     }
    //     // for stars
    //     for(int k=0; k<row+1; k++){
    //        cout << "* ";
    //     }
    //     cout<<endl;
    // }

    // for(int row=0; row<n; row++){
    //   // for spaces
    //   for(int col=0; col<row; col++){
    //     cout << " ";
    //   }
    //   // for stars
    //   for (int col=0; col<n-row-1; col++){
    //     cout << "* ";
    //   }
    //   cout<<endl;
      
    // }

    // Printing hollow daimond
    // int n;
    // cin >> n;
    //    for(int row=0; row<n; row++){
    //     //for spaces
    //     for(int col=0; col<n-row-1; col++){
    //       cout << " ";
    //     }
    //     // for stars
    //     for(int k=0; k<2*row+1; k++){
    //       if(k==0 || k==2*row){
    //         cout << "*";
    //       }else{
    //         cout << " ";
    //       }
    //     }
    //     cout << endl;
    //    }

    //    for(int row=0; row<n; row++){
    //     //spaces
    //     for(int col=0; col<row; col++){
    //       cout<< " ";
    //     }
    //     for(int col=0; col<2*n-2*row-1; col++){
    //       if(col==0 || col==2*n-2*row-2){
    //         cout<< "*";
    //       }else{
    //         cout<< " ";
    //       }
    //     }
    //     cout<<endl;
    //    }

    // Flipped solid daimond
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row++){
    //   // for half pyramid
    //   for(int col=0; col<n-row; col++){
    //     cout << "*";
    //   }
    //   // For spaces
    //   for(int col=0; col<2*row+1; col++){
    //     cout << " ";
    //   }
    //   // second half pyramid
    //   for(int col=0; col<n-row; col++){
    //     cout << "*";
    //   }
    //   cout << endl;
    // }
    // for(int row=0; row<n; row++){
    //   // for half pyramid
    //   for(int col=0; col<row+1; col++){
    //       cout << "*";
    //   }
    //   // for spaces
    //   for(int col=0; col<2*n-2*row-1; col++){
    //     cout << " ";
    //   }
    //   // For second half pyramid
    //   for(int col=0; col<row+1; col++){
    //       cout << "*";
    //   }
    //   cout<<endl;
    // }

    //Fancy patterns
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout << row+1;
    //         if(col != row){
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row; col++){
    //         cout<< n-row;
    //         if(col != n-row-1){
    //         cout << "*";
    //     }
    //     }
    //     cout << endl;
    // }

    // Fancy pattern 2
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row++){
    //     int col=0;
    //     for(; col<row+1; col++){
    //         cout << col+1;
    //     }
    //     col = col - 1;
    //     // reverse counting
    //     for(; col>0; col--){
    //         cout << col;
    //     }
    //     cout << endl;
    // }
   
    // Fancy pattern3 => Alphabetic Palindrome
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row++){
    //     int col=0;
    //     for(; col<row+1; col++){
    //         int ans = col+1;
    //         char ch = ans + 'A'-1;
    //         cout << ch;
    //     }
    //     // reverse counting
    //     for(int col=row; col>0; col--){
    //         int ans = col;
    //         char ch = ans + 'A'-1;
    //         cout << ch;
    //     }
    //     cout << endl;
    // }

    // Fancy pattern 4
    // int n;
    // cin >> n;
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row-1; col++){
    //         cout << "  ";
    //     }
    //     int start;
    //     start=row+1;
    //     for(int col=0; col<row+1; col++){
    //         cout << start << " ";
    //         start = start+1;
    //     }
    //     int end = start-2;
    //     for(int col=0; col<row; col++){
    //         cout << end << " ";
    //         end=end-1;
    //     }
    //     cout<<endl;
    // }

    // fancy pattern 5
//     int n;
//     cin >> n;
//     for(int row=0; row<n; row++){
//         for(int col=0; col<n-row-1; col++){
//             cout << " ";
//         }

//         for(int col=0; col<row+1; col++){
//             if(col==0){
//             cout << "1";
//             }
//             }
//             if(row!=n-1){
//             for(int col=0; col<2*row-1; col++){
//                 cout << " ";
//             }
//             }
//            if(row!=0 && row!=n-1){
//             cout << row+1;
//             }
//             if(row==n-1){
//                 for(int col=1; col<row+1; col++){
//                      cout << " ";
//                     cout << col+1;
//                 }
        
//    }
//   cout << endl;
// }

// Switch case
// cout  << "Enter the number" << endl;
// int val;
// cin >> val;
// switch(val){
//      case 1: cout << "Love";
//      break;
//      case 2: cout << "Rahul";
//      break;
//      case 3: cout << "Virat";
//      break;
//      case 4: cout << "Rohit";
//      break;
//      default: "suresh";
// }

// Learning functions
Printfunction();
};