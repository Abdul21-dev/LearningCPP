#include<iostream>
#include<limits.h>
#include<vector>
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

// Functions and Array
// void printArray(int arr[], int size){
//     for(int i=0; i<size; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// void inc(int arr[], int size){
//     arr[0]= arr[0]+ 10;
//     printArray(arr, size);
// }

// Linear seearch in Array
// bool find(int arr[], int size, int key){
//     for(int i=0; i<size; i++){
//         if(arr[i]==key){
//             return true;
//         }
//     }
//     // not found
        
//         return false;
// }

// Counting number of ones and zeros in an Array
// int count(int arr[],int size){
//     int numZero =0;
//     int numOne =0;
//     for(int i=0; i<size; i++){
//         if(arr[i]==0){
//         numZero++;
//         }
//         if(arr[i]==1){
//         numOne++;
//         }
//     }
//    cout << "Number of zeros are :" << numZero << endl;
// cout << "Number of Ones are :" << numOne << endl;
// }

//Maximum number in an Array
// int Maxi(int arr[], int size){
//     int maxint=INT_MIN;
//     for(int i=0; i<size; i++){
//         if(arr[i]>maxint){
//             maxint=arr[i];
//         }
//     }
//     cout << maxint << endl;
// }

// Minimum number in an Array
// int Mini(int arr[], int size){
//     int minint=INT_MAX;
//     for(int i=0; i<size; i++){
//         if(arr[i]<minint){
//             minint=arr[i];
//         }
//     }
//     cout << minint << endl;
// }

// finding unique
// int Findunique(vector<int>arr){
//     int ans=0;
//     for(int i=0; i<arr.size(); i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }

// Printing rowwise sum
// void Rowwisesum(int arr[][3], int row, int col){
//     cout << "Printing Rowwise Sum" << endl;
//     for(int i=0; i<row; i++){
//         int sum =0;
//         for(int j=0; j<col; j++){
//             sum = sum + arr[i][j];
//         }
//         cout << sum << " ";
//     }
//     cout << endl;
// }
// Printing columwise sum
// void Columnwisesum(int arr[][3], int row, int col){
//     cout << "Printing Columnwise Sum" << endl;
//     for(int i=0; i<row; i++){
//         int sum =0;
//         for(int j=0; j<col; j++){
//             sum = sum + arr[j][i];
//         }
//         cout << sum << endl;
//     }
// }

// Linear Search in 2-D Array
// bool Findnum(int arr[][3], int row, int col, int Key){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(arr[i][j] == Key){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// Finding maximum element in an Array
// void Findmax(int arr[][3], int row, int col){
//     int maxint = INT_MIN;
//     for(int i=0; i<row; i++){
        
//         for(int j=0; j<row; j++){
//             if(arr[i][j] > maxint){
//                 maxint = arr[i][j];
//             }
//         }

//     }
//     cout << "Maximum element is "<< maxint << endl;
// }

// Finding minimum element in an Array
// void Findmin(int arr[][3], int row, int col){
//     int minint = INT_MAX;
//     for(int i=0; i<row; i++){
        
//         for(int j=0; j<row; j++){
//             if(arr[i][j] < minint){
//                 minint = arr[i][j];
//             }
//         }

//     }
//     cout << "Minimum element is " << minint << endl;
// }

// Transpose of a Matrix
// void Transpose(int arr[][3], int row, int col, int TransposeArr[][3]){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             TransposeArr[j][i] = arr[i][j];
//         }
//     }
// }

// Printing Array
// void PrintArray(int arr[][3], int row, int col){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
    
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

// taking input in Array
// int arr[10];
// cout << "Enter Elements of Array" << endl;
// for(int i=0; i<10; i++){
//     int n;
//     cin >> n;
//     arr[i]= n;
// }
// cout << "Elements of Array are :"<< endl;
// for(int i=0; i<10; i++){
//     cout << arr[i] << " ";
// }

// ques. taking array input and printing its double
// int arr[5];
// cout << "Enter Elements of Array" << endl;
// for(int i=0; i<5; i++){
//     int n;
//     cin >> n;
//     arr[i]= n;
// }
// cout << "Elements of Array are :"<< endl;
// for(int i=0; i<5; i++){
//     cout << arr[i]*2 << " ";
// }

// ques2. changing all the values of an array to a constant
// int arr[5]= {1,3,5,7,9};
// for(int i=0; i<5; i++){
//     arr[i]=1;
// }
// cout << "New Array is :" << endl;
// for(int i=0; i<5; i++){
//     cout << arr[i] << " ";
// }

// functions and Array(Pass by reference example hai)
// int arr[]= {5,7};
// int size =2;

// inc(arr, size);
// printArray(arr, size);

// Linear Search in Array
// int arr[]={7,10,17,18,33,45,73,93};
// int size=8;
// int key;
// cout << "Enter Key " << endl;
// cin >> key;
// if(find(arr, size, key)){
//     cout << "Present " << endl;
// }else{
//     cout << "Absent "<< endl;
// }

// counting number of zeros and ones in an Array
// int arr[]={0,0,1,0,1,1,1,0,0,1,0,1,0,1,1};
// int size = 15;

// count(arr, size);

// Maximum number in an Array
// int arr[]={0,1,7,10,17,18,33,45,65,73,93,101};
// int size=12;
//  Maxi(arr, size);
//  Mini(arr, size);

// Printing Extremes in an Array
// int arr[]={10,20,30,40,50,60,70,80};
// int size=8;

// int start=0;
// int end= size-1;

// while(true){
//     if(start>end){
//         break;
//     }
    
// //for odd case
//     if(start==end){
//         cout << arr[start] << " ";
//         break;
//     }
//     else{
//     cout << arr[start] << " ";
//     cout << arr[end] << " ";
//     }
//     start++;
//     end--;
// }

// Reversing Array
// int arr[]={10,20,30,40,50,60,70,80};
// int size=8;

// int start=0;
// int end= size-1;

// while(true){
//     if(start>end){
//         break;
//     }
//     swap(arr[start], arr[end]);
//     start++;
//     end--;
// }
// for(int i=0; i<size; i++){
//     cout << arr[i] << " ";
// }

// Learning Array

// vector<int>arr;
// cout << arr.size() << endl;
// cout << arr.capacity() << endl;

// arr.push_back(5);
// arr.push_back(7);

// for(int i=0; i<arr.size(); i++){
//     cout << arr[i] << " ";
// }
// cout << endl;

// arr.pop_back();
// for(int i=0; i<arr.size(); i++){
//     cout << arr[i] << " ";
// }
// cout << endl;

// vector<int>brr(10, 1);
// cout << brr.size() << endl;
// cout << brr.capacity() << endl;
// for(int i=0; i<brr.size(); i++){
//     cout << brr[i] << " ";
// }
// cout << endl;

// vector<int>crr{7,10,17,18,33,45,73,93};
// for(int i=0; i<crr.size(); i++){
//     cout << crr[i] << " ";
// }
// cout << endl;

// int n;
// cout << "Enter the size of vector "<< endl;
// cin >> n;
// vector<int>drr(n);
// cout << drr.size() << endl;
// cout << drr.capacity() << endl;

// cout << "Checking if drr is empty or not :" << drr.empty() << endl;

// question1. finding unique

// int n;
// cout << "Enter the size of the Array " << endl;
// cin>> n;

// cout << "Enter elements of Array " << endl;
// vector<int>arr(n);
// for(int i=0; i<arr.size(); i++){
//     cin >> arr[i];
// }

// int uniqueElement = Findunique(arr);
// cout << "Unique Element is : " << uniqueElement;

// Union of Arrays
// int arr[]={1,2,3,4,6,8};
// int sizea = 6;
// int brr[]={3,4,9,10};
// int sizeb = 4;

// vector<int>ans;
// for(int i=0; i<sizea; i++){
//     ans.push_back(arr[i]);
// }
// for(int i=0; i<sizeb; i++){
//     ans.push_back(brr[i]);
// }

// // Printing ans array
// for(int i=0; i<ans.size(); i++){
//     cout << ans[i] << " ";
// }

// Intersection of two Arrays
// int arr[]={1,2,3,3,4,6,8};
// int sizea = 7;
// int brr[]={3,4,8,9,10};
// int sizeb = 4;

// vector<int>ans;
// for(int i=0; i<sizea; i++){
//     int element = arr[i];
//     for(int j=0; j<sizeb; j++){
//         if(element == brr[j]){
//             brr[j] = INT_MIN; // marking one element after taking intersection
//             ans.push_back(element);
//         }
//     }
// }
// // Printing ans array
// for(int i=0; i<ans.size(); i++){
//     cout << ans[i] << " ";
// }

// Intersection with duplicates
// int arr[]={1,2,4,6,8,10};
// int sizea = 6;
// int brr[]={3,4,5,6};
// int sizeb = 4;

// vector<int>ans;
// for(int i=0; i<sizea; i++){
//     int element = arr[i];
//     for(int j=0; j<sizeb; j++){
//         if(element == brr[j]){
//             brr[j] = INT_MIN;
//         }
//     }
// }

// for(int i=0; i<sizea; i++){
//     ans.push_back(arr[i]);
// }
// for(int i=0; i<sizeb; i++){
//     if(brr[i] != INT_MIN){
//     ans.push_back(brr[i]);
//     }
// }

// // Printing ans array
// for(int i=0; i<ans.size(); i++){
//     cout << ans[i] << " ";
// }

// Printing pair with sum as ans
// vector<int>arr{1,2,3,4,5,6,7};
// int sum=9;
// for(int i=0; i<arr.size(); i++){
//     int element = arr[i];
//     for(int j=i+1; j<arr.size(); j++){
//         if(arr[i] + arr[j] == sum){
//             cout << "(" << element << "," << arr[j] << ")" << endl ;
//         }
//     }
// }

// Printing triplet with sum as ans
// vector<int>arr{10,20,30,40};
// int sum = 80;
// for(int i=0; i<arr.size(); i++){
//     int element1 = arr[i];
//     for(int j=i+1; j<arr.size(); j++){
//     int element2 = arr[j];
//     for(int k=j+1; k<arr.size(); k++){
//     int element3 = arr[k];
//     if(element1 + element2 + element3 == sum){
//         cout << "(" << element1 << "," << element2 << "," << element3 << ")" << endl;
//     }
//   }
//  }
// }

// Sorting 0's and 1's
// vector<int>arr{0,1,1,0,1,0,1,0};
// vector<int>brr;
// vector<int>crr;
// vector<int>drr;
// for(int i=0; i<arr.size(); i++){
//     if(arr[i]==0){
//    brr.push_back(arr[i]);
//     }
//      if(arr[i]==1){
//    crr.push_back(arr[i]);
//     }
// }
// for(int i=0; i<brr.size(); i++){
//     drr.push_back(brr[i]);
// }
// for(int i=0; i<crr.size(); i++){
//     drr.push_back(crr[i]);
// }
// for(int i=0; i<drr.size(); i++){
//     cout << drr[i] << " ";
// }

// Sorting 0's and 1's by two pointer apporoach(starting me 0's daal do aur end me 1's)
// vector<int>arr{0,1,1,0,1,1,0,1,0};
// int start = 0;
// int end = arr.size() - 1;
//  int i=0;
// while(true){
   
//     if(i>end){
//         break;
//     }
//     if(arr[i] == 0){
//         swap(arr[i], arr[start]);
//         start++;
//         i++;
//     }
//     if(arr[i] == 1){
//         swap(arr[i], arr[end]);
//         end--;
//     }
    
// }
// for(int i=0; i<arr.size(); i++){
//     cout << arr[i] << " ";
// }

// Learning 2-D Arrays
// int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

// Taking input and giving output in 2-D Arrays
// int arr[3][3];
// int size = 3;

// row wise input le rahe
// for(int i=0; i<size; i++){
//     for(int j=0; j<size; j++){
//         cin >> arr[i][j];
//     }

// }

// column wise input le rahe
// for(int i=0; i<size; i++){
//     for(int j=0; j<size; j++){
//         cin >> arr[j][i];
//     }

// }
// //Printing row wise
// cout << "Printing row wise" <<endl;
// for(int i=0; i<size; i++){
//     for(int j=0; j<size; j++){
//     cout << arr[i][j] << " ";
//     }
//     cout << endl;
// }
// // Printing column wise
// cout << "Printing column wise" << endl;
// for(int i=0; i<size; i++){
//     for(int j=0; j<size; j++){
//     cout << arr[j][i] << " ";
//     }
//     cout << endl;
// }

// Printing row wise Sum
// int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
// int row = 3;
// int col = 3;
// for(int i=0; i<row; i++){
//     for(int j=0; j<col; j++){
//     cout << arr[i][j] << " ";
//     }
//     cout << endl;
// }
// Rowwisesum(arr, row, col);
// Columnwisesum(arr, row, col);

// Linear search in 2-D Array
// int arr[3][3] = {{5,6,8}, {7,2,4}, {1,6,9}};
// int row = 3;
// int col = 3;
// int Key;
// cout << "Enter Key"<< endl;
// cin >> Key;
// if(Findnum(arr, row, col, Key)){
//     cout << Key << " is present in the array" << endl;
// }else{
//     cout << Key << " is not present in the array"<< endl;
// }

// Finding Maximum and Minimum element in an Array
// int arr[3][3] = {{5,6,18}, {17,2,4}, {1,6,9}};
// int row = 3;
// int col = 3;
// Findmax(arr, row, col);
// Findmin(arr, row, col);

// Transpose of a Matrix
// int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
// int row =3;
// int col=3;
// int TransposeArr[3][3];
// cout << "Original Array " << endl;
// PrintArray(arr, row, col);
// Transpose(arr, row, col, TransposeArr);
// cout << "Transposed Array " << endl;
// PrintArray(TransposeArr, row, col);

// Vector of 2-D Array
// vector<vector<int> >arr;
// vector<int>a{1,2,3};
// vector<int>b{4,5,6,17,18};
// vector<int>c{7,8,9};

// arr.push_back(a);
// arr.push_back(b);
// arr.push_back(c);

// for(int i=0; i<arr.size(); i++){
//     for(int j=0; j<arr[i].size(); j++){
//         cout << arr[i][j] << " ";
//     }
//     cout << endl;
// }

// Initialising 2D Array
// int row = 3;
// int col = 5;
// vector<vector<int> >arr(row, vector<int>(col, 18));
// for(int i=0; i<arr.size(); i++){
//     for(int j=0; j<arr[i].size(); j++){
//         cout << arr[i][j] << " ";
//     }
//     cout << endl;
// }
};