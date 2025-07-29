#include<iostream>
using namespace std;

// void Printfunction(){
//     int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;
//     for(int i=0; i<n; i++){
//         cout << "Abdul"<<endl;
//     }
// }

// int max(int a, int b){
//     if(a>b){
//         return a;
//     }else{
//         return b;
//     }
// }

// function to print sum of two numbers
// int Sum(int a, int b){
//     return  a+ b;
// }

// function to find the max of three numbers;
// int max(int a, int b, int c){
//     if(a>=b && a>=c){
//         return a;
//     }else if(b>=a && b>=c){
//         return b;
//     }else{
//         return c;
//     }
// }

// Function for counting 1 to N
// void count(int N){
//     for(int i=1; i<=N; i++){
//         cout << i << endl;
//     }
//     cout << endl;
// }

// Function for sum of even number upto n
// int Sumeven(int n){
//     int sum =0;
//     if(n%2 == 0){
//         for(int i=0; i<=n; i=i+2){
//          sum = sum +i;
//         }
//         return sum;
//     }else{
//         for(int i=0; i<n; i=i+2){
//             sum= sum+i;
//         }
//         return sum;
//     }
    // for(int i=0; i<=n; i=i+2){
    //     sum = sum + i;
    // }
    // return sum;
// }

// int temp( int a){
//     int fah = 1.8*a + 32;
//     return fah;
// }
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
// Printfunction();
// cout << "Enter a" << endl;
// int a;
// cin >> a;
// cout << "Enter b" << endl;;
// int b;
// cin >> b;
// cout << max(a,b);

// Function to print the sum of two numbers
// cout << "Enter a" << endl;
// int a;
// cin >> a;
// cout << "Enter b" << endl;;
// int b;
// cin >> b;
// cout << Sum(a,b);

// function to find the max of two numbers
// cout << "Enter a" << endl;
// int a;
// cin >> a;
// cout << "Enter b" << endl;;
// int b;
// cin >> b;
// cout << "Enter c" << endl;;
// int c;
// cin >> c;
// cout << max(a, b, c)<< endl;

// Function for counting 1 to N
// cout << "Enter N" << endl;
// int N;
// cin >> N;
// count(N);

// function for sum of even numbers upto n
// cout << "Enter n" << endl;
// int n;
//  cin >> n;
// int ans= Sumeven(n);
// cout << "sum upto "<< n << " even number is: " << ans << endl;

// function for converting degree temperature to fahrenheight
// cout << "Enter temperature in degree celcius: "<< endl;
// int tem;
// cin >> tem;
// cout << "Temperature in fahrenheight is : " << temp(tem) << endl;

// Arrays
// int arr[5]= {1,2,3,4,5};
// char arrr[6]={'a','b','c','d','e','f'};
// cout << "Array successfully created" << endl;
// for(int i=0; i<5; i++){
//  cout << arr[i] << " ";    
// } 
// cout << endl;
// for(int i=0; i<6; i++){
//  cout << arrr[i] << " ";    
// }
// return 0;
};