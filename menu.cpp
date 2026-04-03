#include<iostream>
#include<limits.h>
#include<vector>
#include<algorithm>
#include<set>
#include<utility>
#include<string.h>
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

// Binary search
// int BinarySearch(int arr[], int size, int target){
//     int start = 0;
//     int end = size - 1;
   

//     while (start <= end){
//          int mid = (start + end)/2;
//         int element = arr[mid];

//         if(target == element){
//             return mid;
//         }
//         else if(target < element){
//             end = mid - 1;
//         }
//         else{
//             start = mid + 1;
//         }
        
//         mid = (start + end)/2;

//     }

//     return -1;
// }

// Finding first occurance through binary search
// int FirstOccurance(vector<int>arr, int target){
//     int start =0;
//     int end= arr.size() - 1;
//     int mid = start + (end - start)/2 ;
//     int ans = -1;

//     while(start<=end){
//         if(arr[mid] == target){
//             ans = mid;
//             end = mid - 1;
//         }
//         else if(target > arr[mid]){
//             start = mid + 1;
//         }
//         else if(target < arr[mid]){
//             end = mid - 1;
//         }
//         mid = start + (end - start)/2 ;
//     }
//     return ans;
// }

// int LastOccurance(vector<int>arr, int target){
//     int start =0;
//     int end= arr.size() - 1;
//     int mid = start + (end - start)/2 ;
//     int ans = -1;

//     while(start<=end){
//         if(arr[mid] == target){
//             ans = mid;
//             start = mid + 1;
//         }
//         else if(target > arr[mid]){
//             start = mid + 1;
//         }
//         else if(target < arr[mid]){
//             end = mid - 1;
//         }
//         mid = start + (end - start)/2 ;
//     }
//     return ans;
// }

// void rearrangeNegatives(vector<int>& arr) {
//     int start = 0, end = arr.size() - 1;
    
//     while (start <= end) {
//         if (arr[start] < 0) {
//             start++;
//         } else if (arr[end] >= 0) {
//             end--;
//         } else {
//             swap(arr[start], arr[end]);
//             start++;
//             end--;
//         }
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

// Binary Search
// int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
// int size = 8;
// int target;
// cout << "Enter target search value" << endl;
// cin >> target;

// int indexOftarget = BinarySearch(arr, size, target);
// if(indexOftarget == -1){
//     cout << "Target not found";
// }
// else{
//     cout << "Target found at " << indexOftarget << " index" << endl;
// }

// finding the first occurance by binary search
// vector<int>arr{1,3,3,3,3,3,4,4,4,4,5,6,7};
// int target = 4;
// int ans = FirstOccurance(arr, target);
// cout << "first occurance is at index " << ans << endl;

// predefined binary function
// vector<int>arr{1,3,3,3,3,3,4,4,4,4,5,6,7};
// if(binary_search(arr.begin(), arr.end(), 8)){
//     cout << "Found" << endl;
// }
// else{
//     cout << "Not found " << endl;
// }

// finding the last occurance by binary search
// vector<int>arr{1,3,3,3,3,3,4,4,4,4,5,6,7};
// int target = 3;
// int ans = LastOccurance(arr, target);
// cout << "Last occurance is at index " << ans << endl;
// };

// vector<int>arr{1,3,-6,5,-2};
// // int start = 0;
// // int end = arr.size() - 1 ;
// rearrangeNegatives(arr);
// for(int i=0; i<arr.size(); i++){
//     cout << arr[i] << " ";
// }

// vector<int>nums{1,1,0,2,1,0,2,0};
// int start = 0;
// int end = nums.size() - 1 ;
// int i =0;
// while(i<=end){
// if(nums[i]==0){
//     swap(nums[start],nums[i]);
// start++;
// i++;
// }else if(nums[i]==2){
//     swap(nums[end],nums[i]);
//     end--;
// }else if(nums[i]==1){
//     i++;
// }
// }
// for(int i=0; i<nums.size(); i++){
//     cout << nums[i] ;
// }

// int arr[] = {2,4,6,8,10,12,14,16};
// int start = 0;
// int end = 7;
// int mid = start + (end - start)/2;
// int target = 14;

// while(start<=end){
//     if(arr[mid]>target){
//         end = mid -1;
//        mid = start + (end - start)/2;
//     }else if(arr[mid]<target){
//         start = mid + 1;
//         mid = start + (end - start)/2;
//     }else if(arr[mid]==target){
//         cout << mid;
//         break;
//     }else(
//         cout << "Target not found"
//     );
// };

// Q. finding the first occurence of a number

// vector<int>arr{1,2,3,3,3,3,3,4,4,4,5,6,7,8,8,8,8,8};
// int start = 0;
// int end = arr.size()-1;
// int mid = start + (end - start)/2;
// int target = 8;
// int ans = -1;

// while(start<=end){
//     if(arr[mid]==target){
//         ans = mid;
//         end = mid - 1;
//     }else if(arr[mid]<target){
//         start = mid + 1;
//     }else if(arr[mid]>target){
//         end = mid - 1;
//     }
//     mid = start + (end - start)/2;
// }
// cout << ans ;

// Q. finding the last occurence of a number
// vector<int>arr{1,2,3,3,3,3,3,4,4,4,5,6,7,8,8,8,8,8};
// int start = 0;
// int end = arr.size()-1;
// int mid = start + (end - start)/2;
// int target = 3;
// int ans = -1;

// while(start<=end){
//     if(arr[mid]==target){
//         ans = mid;
//         start = mid + 1;
//     }else if(arr[mid]<target){
//         start = mid + 1;
//     }else if(arr[mid]>target){
//         end = mid - 1;
//     }
//     mid = start + (end - start)/2;
// }
// cout << ans ;

//Q. Finding mountain peak
// vector<int>arr{0,3,10,5,2};
// int start = 0;
// int end = arr.size()-1;
// int mid = start + (end - start)/2;

// while(start<end){
//     if(arr[mid]<arr[mid + 1]){
//         start = mid+1;
//     }else{
//         end = mid;
//     }
//     mid = start + (end - start)/2;
// }
// cout << start ;

// Q. Finding square root of a number
// int n;
// cout << "Enter a number"<<endl;;
// cin>> n;
// int start =0;
// int end = n;
// int target = n;
// int mid = start + (end - start)/2;
// int ans = -1;
// while(start<=end){
//     if(mid*mid == target){
//         ans = mid ;
//         break;
//     }else if(mid*mid>target){
//        end = mid -1;
//     }else if(mid*mid < target ){
//         ans = mid;
//         start = mid + 1;
//     }
//     mid = start + (end - start)/2;
// }
// cout << "SquareRoot of the given number is : " << ans << endl;

// // Q. Calculating precision of the square root of the number
// double finalans = ans; 
// int precision;
// cout << "Enter number of floating digits you want" << endl;
// cin >> precision;

// double step = 0.1;

// for(int i=0; i<precision; i++){

//     for(double j=finalans; j*j<n; j=j+step){
//         finalans=j;
//     }
//     step = step/10;
// }
// cout << "Final precise ans you want is " << finalans<<endl;

//Q. Calculating target in a 2-D Array

// int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
// int rows = 5;
// int cols = 4;
// int start =0;
// int end = rows*cols -1;
// int mid = start + (end - start)/2;
// int n;
// cout << "Enter number whose index you want to find "<<endl;
// cin >> n;
// int target = n;

// while(start<=end){
//     int indexofrows = mid/cols;
//     int indexofcols = mid%cols;
//     if(arr[indexofrows][indexofcols]==target){
//         cout << "Index of required number is ("<<indexofrows<<","<<indexofcols<<")"<< endl;
//         break;
//     }else if (arr[indexofrows][indexofcols]<target){
//         start = mid + 1;
//         mid = start + (end - start)/2;
//     }else if(arr[indexofrows][indexofcols]>target){
//         end = mid - 1;
//         mid = start + (end - start)/2;
//     }else{
//         cout <<"Number is not present in the matrix"<<endl;
//     }
//}

//Q. Binary search in a nearly sorted Array
// vector<int>arr{10,3,40,20,50,80,70};
// int n;
// cout << "Enter target" << endl;
// cin >> n;
// int target = n;
// int s=0;
// int e=arr.size()-1;
// int mid = s+(e-s)/2;

// while(s<=e){
//     if(arr[mid]==target){
//         cout << "Index of target is " << mid ;
//         break;
//     }
//     if(mid-1>=0 && arr[mid-1]==target){
//         cout << "Index of target is " << mid-1 ;
//         break;
//     }
//     if(mid+1<arr.size() && arr[mid+1]==target){
//         cout << "Index of target is " << mid+1 ;
//         break;
//     }
//     else if (arr[mid]<target){
//         s=mid+2;
//     }
//     else if (arr[mid]>target){
//         e=mid-2;
//     }
//      mid = s+(e-s)/2;
// }

//Q. Diving two numbers by BinarySearch
// int dividend = 22;
// int divisor = 7;
// int quotient ;

// int s=0;
// int e= dividend;
// int mid = s+(e-s)/2;
// while(s<=e){
//     if(mid*divisor == dividend){
//         quotient=mid;
//     }else if(mid*divisor > dividend){
//      e = mid-1;
//     }else if(mid*divisor < dividend){
//         quotient = mid;
//         s = mid +1;
//     }
//     mid = s+(e-s)/2;
// }
// cout<< "Divisor is: "<< quotient <<endl;

//  // Q. Calculating precision of the divisor
// double finalans = quotient; 
// int precision;
// cout << "Enter number of floating digits you want" << endl;
// cin >> precision;

// double step = 0.1;

// for(int i=0; i<precision; i++){

//     for(double j=finalans; j*divisor<dividend; j=j+step){
//         finalans=j;
//     }
//     step = step/10;
// }
// cout << "Final precise ans you want is " << finalans<<endl;

// Find the odd occuring element in an array
// int arr[11]= {1,1,2,2,3,3,4,600,600,4,4};
// int s=0;
// int e=12;
// int  mid = s+(e-s)/2;
// int ans;

// while(s<=e){
//     if(s==e){
//         ans=s;
//         break;
//     }
//     if(mid%2==0){
//         if(arr[mid]==arr[mid+1]){
//             s=mid+2;
//         }else{
//             e=mid;
//         }
//     }else if(mid%2!=0){
//         if(arr[mid]==arr[mid-1]){
//             s=mid+1;
//         }else{
//             e=mid-1; //ans can't be at odd positiion
//         }
//     }
//      mid = s+(e-s)/2;
// }
// cout << ans;

//Q.Finding the duplicates
//Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and using only constant extra space.
// vector<int>nums{1,3,4,2,2};
//  int ans=-1;
//         for(int i=0; i<nums.size(); i++){
//             int index = abs(nums[i]);
//             if(nums[index]<0){
//                 ans=index;
//                 break;
//             }
            
//                 nums[index] *= -1;
           
//         }
//       //  return ans;
    
//     cout << ans;

//q. finding missing elements from array with duplicates
// vector<int>arr{1,3,5,3,4};
// for(int i=0; i<arr.size(); i++){
//     int index = abs(arr[i]);
//     if(arr[index-1]>0){
//         arr[index-1] *= -1;
//     }
// }
// for(int i=0; i<arr.size(); i++){
//     if(arr[i]>0){
//     cout << i+1;
//     }
// }

//q. Common elements in 3 Sorted Arrays
// vector<int>a{2,4,18,30,20,40,80,100};
// vector <int>b{1,3,5,18,22,20,13,88,80};
// vector<int>c{5,8,45,20,80,66,18,19};
// vector<int>arr;

// for(int i=0; i<a.size(); i++){
//     int element = a[i];
//     for(int j=0; j<b.size(); j++){
//         if(element==b[j]){
//             for(int k=0; k<c.size(); k++){
//                 if(element==c[k]){
//                     arr.push_back(element);
//                 }
//             }
//         }
//     }
// }
// for(int i=0; i<arr.size(); i++){
//     cout << arr[i] << " ";
// }

//Q. Wave-print a Matrix
// int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
// int rows=3;
// int cols=4;

// for(int col=0; col<cols; col++){
//     if(col%2==0){
//         for(int row=0; row<rows; row++){
//             cout << arr[row][col] << " ";
//         }
//     }else{
//         for(int row=2; row>=0; row--){
//             cout <<arr[row][col] << " ";
//         }
//     }
// }

//Q. Factorial of a large number
// int n;
// cout << "enter number whose factorial you want to find " << endl;
// cin >> n;
// vector<int>ans;
// ans.push_back(1);
// int carry=0;

// for(int i=2; i<=n; i++){
//     for(int j=0; j<ans.size(); j++){
//         int x = ans[j]*i + carry;
//         ans[j]=x%10;
//         carry=x/10;
//     }
//     while(carry){
//         ans.push_back(carry%10);
//         carry = carry/10;
//     }
//     carry=0;
// }
// reverse(ans.begin(),ans.end());
// for(int i=0; i<ans.size(); i++){
//     cout << ans[i];
// }

//Q. finding k pairs with a difference given k
// vector<int>arr{3,1,4,1,5};
// sort(arr.begin(),arr.end());
// int i=0;
// int j=1;
// int k=2;
// set<pair<int,int>>ans;

// while(j<arr.size()){
//     int diff = arr[j]-arr[i];
    
//     if(diff == k)
//     {
//         ans.insert({arr[i],arr[j]});
//         i++;
//         j++;
//     }else if(diff > k){
//         i++;
//     }else if(diff < k){
//         j++;
//     }else if(i == j){
//         j++;
//     }
// }
// cout << ans.size();

//Q. find k closest element to x
// vector<int>arr{1,2,3,4,5};
// int k=4;
// int x=3;
// int l=0;
//        int h=arr.size()-1;
//        vector<int>ans;
//        while(h-l>=k){
//         if(x-arr[l]>arr[h]-x){
//            l++;
//         }else{
//             h--;
//         }
//        }
//        for(int i=l; i<=h; i++){
//         ans.push_back(arr[i]);
//         cout << arr[i] << " ";
//        }
       
//Q. EKO SPOJ
    // vector<int>arr{20,15,10,17};
    // int M=7;
    // int N=arr.size();
    // int x;
    // int y = 0;
    // for(int i=0; i<20; i++){
    //       for(int j=0; j<arr.size(); j++){
    //         if(arr[j]-i>0){
    //         y += arr[j]-i;
    //         }
           
    //       }
    //       if(y>=M){
    //         x=i;
    //       }
    //       y=0;
    //       }
    //       cout << x;

    //Q.method-2 by BinarySearch
    // vector<int>arr{20,15,10,17};
    // int M=7;
    // int N=arr.size();
    // int y=0;
    // int x;
    // int s=0;
    // int e=20;
    // int mid = s+(e-s)/2;
    // while(s<=e){
    //    for(int i=0; i<arr.size(); i++){
    //     if(arr[i]-mid>0){
    //        y += arr[i]-mid;
    //     }
    //    }
    //    if(y>=M){
    //     x=mid;
    //     s=mid+1;
    //    }else{
    //     e = mid-1;
    //    }
    //    y=0;
    //    mid = s+(e-s)/2;
    // }
    // cout << x;

    // Char Array & String
    // char name[100];
    // cout << "enter your name :" << endl;
    // cin >> name;
    //  cout << name; 
    // for(int i=0; i<6; i++){
    //     cout << " index of " << i << " is " << name[i] << endl;
    // }
    // int value = (int)name[5];
    // cout << value;

    // char name[100];
    // cout << "enter your name :" << endl;
//    // cin >> name;
//    cin.getline(name, 50);
//     cout << name;
    //  cin.getline(name, 50);
    //   int length = 0;
    //   int i = 0;
    //   while(name[i] != '\0'){
    //     length++;
    //     i++;
    //   }
    //   cout << length <<endl;

    // Reversing a string
    // for(int i=length-1; i>=0; i--){
    //       cout << name[i];
    // }

    // Reversing a string by two pointer method 
    // int s=0;
    // int e=length-1;
    // while(s<=e){
    //     swap(name[s],name[e]);
    //     s++;
    //     e--;
    // }
    // cout << name;

    // Replacing spaces in a String
    //  char name[100];
    // cout << "enter your name :" << endl;
    //  cin.getline(name, 50);
    //  cout << name << endl;
    //   int length = strlen(name);
    //  // cout << length;
    //   for(int i=0; i<length; i++){
    //     if(name[i]==' '){
    //         name[i]='@';
    //     };
    //   }
    //   cout << name ;

    // Palindrome
    // int yes=0;
    // int no=0;
    // for(int i=0; i<length; i++){
    //     if(name[i]==name[length-1-i]){
    //         yes++;
    //     }else{
    //        no++;
    //     }
    // }
    // if(yes == length){
    //     cout << "Palindrome";
    // }else{
    //     cout << "No Palindrome";
    // }

    // Palindrome method 2
    // int yes=0;
    // int no=0;
    // int s=0;
    // int e=length-1;
    // while(s<=e){
    //     if(name[s]==name[e]){
    //         yes++;
    //     }else{
    //         no++;
    //     }
    //     s++;
    //     e--;
    // }
    // if(no>1){
    //     cout << "No Palindrome";
    // }else{
    //     cout << "Palindrome";
    // }

    // Converting string into uppercase
    //  char name[100];
    // cout << "enter your name :" << endl;
    //  cin.getline(name, 50);
    //  cout << name << endl;
    //   int length = strlen(name);
    //   for(int i=0; i<length; i++){
    //     name[i] = name[i] - 'a' + 'A';
    //     cout << name[i];
    //   }
      // Converting string inti lowercase
    //   for(int i=0; i<length; i++){
    //     name[i]=name[i]-'A'+'a';
    //     cout << name[i];
    //   }

    // Strings
//     string str;
//     cout << "enter your string" <<endl;
//     getline(cin, str);
//     cout << str <<endl;;
//   //  cout << str.length();
//     cout << str.substr(0,4);

// string A = "boss";
// string B = "boss";
//cout << A.compare(B);

// leetcode 1047 (Remove all adjacent duplicates in a string)
// string s = "abbaca";
// for(int i=0; i<s.length()-1; i++){
//     if(s[i]==s[i+1]){
//      s.erase(i,2);
//      i=-1;
//     }
// }
// cout << s;

// Method 2
// string s = "abbaca";
// string ans = "";
// for(int i=0; i<s.length(); i++){
//     if(ans.length()>0){
//       if(s[i]==ans[ans.length()-1]){
//         ans.pop_back();
//       }else{
//         ans.push_back(s[i]);
//       }
//     }else{
//         ans.push_back(s[i]);
//     }
// }
// cout << ans;

// Removing k adjacent elements in a string
// string s = "deeedbbcccbdaa";
// int k=3;
// string ans="";
// string ans2="";
// vector<int>count;
// for(int i=0; i<s.length(); i++){
//    if(ans.length()==0){
//     ans.push_back(s[i]);
//     count.push_back(1);
//    }
//   else{
//     if(s[i]==ans.back()){
//         count.back()++;
//     }else{
//         ans.push_back(s[i]);
//         count.push_back(1);
//     }
//     if(count.back()==k){
//         ans.pop_back();
//         count.pop_back();
//     }
//    }
// }
// int j=0;
// while(j<count.size()){
// for(int i=0; i<count[j]; i++){
//   ans2.push_back(ans[j]);
// }
// j++;
// }
// cout << ans2;

// Leetcode 1
//    int nums[]={2,7,11,15};
//    int target = 9;
//   vector<int>ans;
//         for(int i=0; i<sizeof(nums); i++){
//             int element = nums[i];
//             for(int j=i+1; j<sizeof(nums); j++){
//                 if(nums[j]+element==target){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                 }
//             }
//         }
//        cout << ans;

//Leetcode 15
// vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         set<vector<int>>st;
//         for(int i=0; i<nums.size(); i++){
//             int l=i+1;
//             int r=nums.size()-1;
//            while(l<r){
//             int sum = nums[i]+nums[l]+nums[r];
//             if(nums[i]+nums[l]+nums[r]==0){
//              vector<int>triplet={nums[i],nums[l],nums[r]};
//                sort(triplet.begin(),triplet.end());
//                st.insert(triplet);
//                l++;
//                r--;
//             }else if(sum<0){
//                 l++;
//             }else{
//                 r--;
//             }
//            }
//         }
//         vector<vector<int>>ans(st.begin(),st.end());
//         return ans;
//     }

// Leetcode 680 Valid Palindrome2
// bool checkPalindrome(string s, int i, int j){
//         while(i<=j){
//             if(s[i] != s[j]){
//                 return false;
//             }else{
//                 i++;
//                 j--;
//             }
//         }
//         return true;
//     }
//     bool validPalindrome(string s) {
//         int i=0;
//         int j=s.length()-1;
//         while(i<=j){
//           if(s[i] != s[j]){
//             return checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);
//           }else{
//             // s[i] == s[j];
//             i++;
//             j--;
//           }
//         }
//         return true;
//     }

// Leetcode 539. Minimum Time difference
// int findMinDifference(vector<string>& timePoints) {
//         vector<int>Minutes;
//         for(int i=0; i<timePoints.size(); i++){
//             string current = timePoints[i];
//             int hours = stoi(current.substr(0,2));
//             int minute = stoi(current.substr(3,2));
//             int totalminutes = hours*60 + minute;
//             Minutes.push_back(totalminutes);
//         }
//         sort(Minutes.begin(), Minutes.end());

//         int Mini = INT_MAX;
//         int n = Minutes.size();
//         for(int i=0; i<n-1; i++){
//            int diff = Minutes[i+1]-Minutes[i];
//            Mini = min(Mini, diff);
//         }
//         int lastdiff = (1440-Minutes[n-1]+Minutes[0]);
//         Mini = min(Mini, lastdiff);

//         return Mini;
//     }

// Leetcode 647. Palindromic Sunstring
// int ExpandAroundIndex(string s, int i, int j){
//     int count = 0;
//     while(i>=0 && j<s.length() && s[i]==s[j]){
//         count++;
//         i--;
//         j++;
//     }
//     return count;
// }
//     int countSubstrings(string s) {
//         int count = 0;
//         int n = s.length();
//         for(int i=0; i<n; i++){
//             //check odd
//         int checkOdd = ExpandAroundIndex(s, i, i);
//         count = count + checkOdd;
//             //check even
//             int checkEven = ExpandAroundIndex(s, i, i+1);
//         count = count + checkEven;
//         }
//         return count;
//     }

// Leetcode 69. squareroot
// int mySqrt(int x) {
//         int a=0;
//        int s=0;
//        int e=x;
//        while(s<=e){
//         long mid = s+(e-s)/2;
//         if(mid*mid == x){
//             a = mid;
//             break;
//         }else if(mid*mid > x){
//             e = mid - 1;
//         }else{
//             a = mid;
//             s = mid + 1;
//         }
//        }
//        return a;
//     }

// Leetcode 74. Search in 2D matrix
//  bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         for(int i=0; i<matrix.size(); i++){
//             for(int j=0; j<matrix[i].size(); j++){
//                 if(matrix[i][j] == target){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }

// Leetcode 66. PlusOne
// vector<int> plusOne(vector<int>& digits) {
//     for (int i = digits.size() - 1; i >= 0; i--) {
//         if (digits[i] < 9) {
//             digits[i]++;
//             return digits;
//         }
//         digits[i] = 0;
//     }
//     digits.insert(digits.begin(), 1);
//     return digits;
// }

// Pointers
// int a=5;
// int* ptr = &a;

// cout << a <<endl;
// cout << &a <<endl;
// cout << ptr <<endl;
// cout << *ptr <<endl;

// Null pointer
// int* ptr =0;
// cout << *ptr;

// int a=5;
// int* p=&a;
// int* q=p;
// cout << a <<endl;
// cout << &a <<endl;
// cout << p <<endl;
// cout << &p <<endl;
// cout << *p <<endl;
// cout << q <<endl;
// cout << &q <<endl;
// cout << *q <<endl;

// Leetcode. 917 Reverse only Letters
// string reverseOnlyLetters(string s) {
//         int i=0;
//         int e = s.length()-1;

//         while(i<=e){
//             if((s[i]>='A'&& s[i]<='Z' || s[i]>='a'&&s[i]<='z') && (s[e]>='A'&& s[e]<='Z' || s[e]>='a'&&s[e]<='z')){
//                 swap(s[i],s[e]);
//                 i++;
//                 e--;
//             }else if(!(s[i]>='A'&& s[i]<='Z' || s[i]>='a'&&s[i]<='z')){
//                 i++;
//             }else{
//                 e--;
//             }
//         }
//         return s;
//     }

// Leetcode 242. Valid Anagram
// bool isAnagram(string s, string t) {
        // if(s.length() != t.length()){
        //     return false;
        // }
        // for(int i=0; i<s.length(); i++){
        //     char element = s[i];
        //     for(int j=0; j<t.length(); j++){
        //        if(s[i]==t[j]){
        //         t.erase(j,1);
        //         break;
        //        }
        //     }
        // }

        // if(t==""){
        //    return true; 
        // }
        // return false;

        // Method 2
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if(s==t){
        //     return true;
        // }else{
        //     return false;
        // }

        // Method 3 by hashmap
    //     int Hashtable[256]={0};

    //     for(int i=0; i<s.length(); i++){
    //         Hashtable[s[i]]++;
    //     }
    //      for(int i=0; i<t.length(); i++){
    //         Hashtable[t[i]]--;
    //     }
    //     for(int i=0; i<256; i++){
    //         if(Hashtable[i]!=0){
    //             return false;
    //         }
    //     }
    //     return true;
    // }

    // Leetcode 345. Reverse vowels of a string
    // string reverseVowels(string s) {
    //     int i=0;
    //     int e=s.length()-1;
    //     while(i<e){
    //     if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') && (s[e]=='a'||s[e]=='e'||s[e]=='i'||s[e]=='o'||s[e]=='u'||s[e]=='A'||s[e]=='E'||s[e]=='I'||s[e]=='O'||s[e]=='U')){
    //         swap(s[i],s[e]);
    //         i++;
    //         e--;
    //     }else if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')){
    //         i++;
    //     }else{
    //         e--;
    //     }
    //     }
    //     return s;
    // }

    // Leetcode. 14 Longest common prefix
    //  string longestCommonPrefix(vector<string>& strs) {
    //     string ans;
    //     int i=0;
    //     while(true){
    //         char curr = 0;
    //         for(int j=0; j<strs.size(); j++){
    //             if(i>=strs[j].size()){
    //                 curr = 0;
    //                 break;
    //             }
    //             if(curr == 0){
    //                 curr = strs[j][i];
    //             }else if(curr != strs[j][i]){
    //                 curr = 0;
    //                 break;
    //             }
    //         }
    //         if(curr==0){
    //             break;
    //         }
    //         ans.push_back(curr);
    //         i++;
    //     }
    //     return ans;
    // }

    // Leetcode 5. Longest Palandromic substring
//     bool isPalindrome(string&s, int start, int end){
//     while(start<end){
//         if(s[start]!=s[end]){
//             return false;
//         }
//         start++;
//         end--;
//     }
//     return true;
// }
//     string longestPalindrome(string s) {
//         string ans="";
//         for(int i=0; i<s.length(); i++){
//            for(int j=i; j<s.length(); j++){
//             if(isPalindrome(s,i,j)){
//                 string t = s.substr(i, j-i+1);
//                 if(t.size()>ans.size()){
//                     ans = t;
//                 }
//             }
//            }
//         }
//         return ans;
//     }

// Leetcode 204. Count Primes
//  int countPrimes(int n) {
//         if(n==0) return false;
//     vector<bool>Prime(n, true);
//     Prime[0] = Prime[1] = false;
//         int ans=0;
//        for(int i=2; i<n; i++){
//            if(Prime[i]){
//               ans++;
              
//             int  j=2*i;
//               while(j<n){
//                 Prime[j] = false;
//                 j=j+i;
//               }
//            }
//        }
    //     return ans;
    // }

    // Leetcode 12. Integer to Roman
    //  string intToRoman(int num) {
    //     string ans="";
    //     vector<char>arr={'I','V','X','L','C','D','M'};
    //     int nums = num;
    //     while(nums>0){
    //         if(nums>=1000){
    //             ans.push_back(arr[6]);
    //             nums = nums - 1000;
    //         }else if(nums>=900 && nums<1000){
    //             ans.push_back(arr[4]);
    //             ans.push_back(arr[6]);
    //             nums = nums - 900;
    //         }else if(nums>=500 && nums<900){
    //             ans.push_back(arr[5]);
    //             nums = nums - 500;
    //         }else if(nums>=400 && nums<500){
    //             ans.push_back(arr[4]);
    //             ans.push_back(arr[5]);
    //             nums = nums - 400;
    //         }else if(nums>=100 && nums<400){
    //             ans.push_back(arr[4]);
    //             nums = nums - 100;
    //         }else if(nums>=90 && nums<100){
    //             ans.push_back(arr[2]);
    //             ans.push_back(arr[4]);
    //             nums = nums - 90;
    //         }else if(nums>=50 && nums<90){
    //             ans.push_back(arr[3]);
    //             nums = nums - 50;
    //         }else if(nums>=40 && nums<50){
    //             ans.push_back(arr[2]);
    //             ans.push_back(arr[3]);
    //             nums = nums - 40;
    //         }else if(nums>=10 && nums<40){
    //             ans.push_back(arr[2]);
    //             nums = nums - 10;
    //         }else if(nums==9){
    //             ans.push_back(arr[0]);
    //             ans.push_back(arr[2]);
    //             nums = nums -9 ;
    //         }else if(nums>=5 && nums<9){
    //             ans.push_back(arr[1]);
    //             nums = nums - 5;
    //         }else if(nums==4){
    //             ans.push_back(arr[0]);
    //             ans.push_back(arr[1]);
    //             nums = nums - 4;
    //         }else if(nums>=1 && nums<4){
    //             ans.push_back(arr[0]);
    //             nums = nums - 1;
    //         }
    //     }
    //     return ans;
    // }

    // Leetcode 344 Reversina string
    //  void reverseString(vector<char>& s) {
    //     int i=0;
    //     int e = s.size()-1;
    //     while(i<=e){
    //         swap(s[i],s[e]);
    //         i++;
    //         e--;
    //     }
        
    // }

    // 
    //Leetcode 15. Roman to integer
    //  int romanToInt(string s) {
    //      int ans=0;
    //     vector<char>arr{'I','V','X','L','C','D','M'};
    //     for(int i=s.length()-1; i>=0; i--){
    //         if(s[i]==arr[0]){
    //             ans = ans + 1;
    //         }else if(s[i]==arr[1] && i>0 && s[i-1]==arr[0]){
    //             ans=ans+4;
    //             i--;
    //         }else if(s[i]==arr[1] ){
    //             ans=ans+5;
    //         }else if(s[i]==arr[2] && i>0 && s[i-1]==arr[0]){
    //             ans=ans+9;
    //             i--;
    //         }else if(s[i]==arr[2] ){
    //             ans=ans+10;
    //         }else if(s[i]==arr[3] && i>0 && s[i-1]==arr[2]){
    //             ans=ans+40;
    //             i--;
    //         }else if(s[i]==arr[3]  ){
    //             ans=ans+50;
    //         }else if(s[i]==arr[4] && i>0 && s[i-1]==arr[2] ){
    //             ans=ans+90;
    //             i--;
    //         }else if(s[i]==arr[4] ){
    //             ans=ans+100;
    //         }else if(s[i]==arr[5] && i>0 && s[i-1]==arr[4]){
    //             ans=ans+400;
    //             i--;
    //         }else if(s[i]==arr[5] ){
    //             ans=ans+500;
    //         }else if(s[i]==arr[6] && i>0 && s[i-1]==arr[4] ){
    //             ans=ans+900;
    //             i--;
    //         }else if(s[i]==arr[6] ){
    //             ans=ans+1000;
    //         }
            
    //     }
    //     return ans;
    // }

    // Leetcode. 367 Valid Perfect square
    // bool isPerfectSquare(int num) {
    //     long i=0;
    //     while(i<=num){
    //       if(i*i == num){
    //         return true;
    //       }
    //       i++;
    //     }
    //     return false;
    // }

    // Leetcode 88. Merge two sorted arrays
    //  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //     for(int i=0; i<n; i++){
    //          nums1.pop_back();
    //     }
    //     for(int i=0; i<n; i++){
    //         nums1.push_back(nums2[i]);
    //     }
    //     sort(nums1.begin(), nums1.end());
    // }

    // Leetcode 977. square of sorted Array
    // vector<int> sortedSquares(vector<int>& nums) {
    //     vector<int>ans;
    //     for(int i=0; i<nums.size(); i++){
    //         int element = nums[i]*nums[i];
    //         ans.push_back(element);
    //     }
    //     sort(ans.begin(), ans.end());
    //     return ans;
    // }

    // Leetcode 58. Length of last word
    //  int lengthOfLastWord(string s) {
    //     int ans=0;
        
    //     for(int i=s.length()-1; i>=0; i--){
    //          if(s[i] == ' '){
    //             s.pop_back();
    //         }else{
    //             break;
    //         }
    //     }
    //     for(int i=s.length()-1; i>=0; i--){
    //         if(s[i] != ' '){
    //             ans++;
    //         }else{
    //             break;
    //         }
    //     }
    //     return ans;
    // }

    // Leetcode 125. Valid Palindrome
    //  bool isPalindrome(string s) {
    //     string ans;
    //     for(int i=0; i<s.length(); i++){
    //        if(s[i]>='A' && s[i]<='Z'){
    //         s[i] = s[i] + 'a' -'A';
    //        }
    //     }
    //     for(int i=0; i<s.length(); i++){
    //         if((s[i]>='a'&&s[i]<='z') || (s[i]>='0' && s[i]<='9')){
    //         ans.push_back(s[i]);
    //        }
    //     }
    //     int i=0;
    //     int j=ans.length()-1;
    //     while(i<=j){
    //         if(ans[i]==ans[j]){
    //             i++;
    //             j--;
    //         }else{
    //             return false;
    //         }
    //     }
    //     return true;
    // }

    // Leetcode 8. string to integer(atoi)
    // int myAtoi(string s){ 
    //     // int integer = atoi(s.c_str());
    //     // return integer;

    //     int i=0;
    //     int num = 0;
    //     int sign = 1;
    //     while(i<s.length() && s[i] == ' '){
    //         i++;
    //     } 

    //     while(i<s.length() && (s[i] == '-' || s[i] == '+')){
    //         if(s[i] == '-'){
    //             sign = -1;
    //         }
    //         i++;
    //         break;
    //     }

    //     while(i<s.length() && isdigit(s[i])){
    //         if(num > INT_MAX/10 || (num == INT_MAX/10 && s[i]>'7')){
    //             if(sign == -1){
    //                 return INT_MIN;
    //             }else{
    //                 return INT_MAX;
    //             }
    //         }
    //         num = num*10 + (s[i] - '0');
    //         i++;
    //     }
    //     return num*sign;
    // }

    // Leetcode 179. Largest number
    //  static bool mycomp(string a, string b){
    //     string t1=a+b;
    //     string t2=b+a;
    //     return t1>t2;    
    //     }

    //  bool checkzero(vector<int>nums){
    //     for(int i=0; i<nums.size(); i++){
    //         if(nums[i] != 0){
    //             return false;
    //         }
    //     }
    //     return true;
    //  }   
    // string largestNumber(vector<int>& nums) {
    //     if(checkzero(nums)){
    //         return "0";
    //     }
    //     vector<string>snums;
    //     for(int i=0; i<nums.size(); i++){
    //         snums.push_back(to_string(nums[i]));
    //     }

    //     sort(snums.begin(), snums.end(), mycomp);
    //     string ans="";
    //     for(int i=0; i<snums.size(); i++){
    //         ans += snums[i];
    //     }
    //     return ans;
    // }

    // Leetcode 238. Moving zeroes
    // void moveZeroes(vector<int>& nums) {
    // int j=0;
    // for(int i=0; i<nums.size(); i++){
    //     if(nums[i] != 0){
    //         swap(nums[i],nums[j]);
    //         j++;
    //     }
    // }
    // }

    // Leetcode 136single number
    // int singleNumber(vector<int>& nums) {
    //     int ans = 0;
    //     for(int i=0; i<nums.size(); i++){
    //          ans = ans^nums[i];
    //     }
    //     return ans;
    // }

    // Leetcode 767 Reorganise string
    // string reorganizeString(string s) {
    //     int hash[26] = {0};

    //     for(int i=0; i<s.size(); i++){
    //         hash[s[i]-'a']++;
    //     }

    //     char max_feq_char;
    //     int max_count = INT_MIN;
    //     for(int i=0; i<26; i++){
    //         if(hash[i]>max_count){
    //             max_count = hash[i];
    //             max_feq_char = i + 'a';
    //         }
    //     }
    //     int index = 0;
    //     while(max_count > 0 && index < s.size()){
    //         s[index] = max_feq_char;
    //         max_count--;
    //         index += 2;
    //     }

    //     if(max_count != 0){
    //         return "";
    //     }
        
    //     hash[max_feq_char - 'a'] = 0;

    //     for(int i=0; i<s.size(); i++){
    //         while(hash[i]>0){
    //             if(index > s.size()){
    //                 index = 1;
    //             }
    //             s[index] = i + 'a';
    //             hash[i]--;
    //             index += 2;
    //         }
    //     }
    //     return s;
    // }

    //Q.387 First unique character in a string 
    // int firstUniqChar(string s) {
    //     int hash[26] = {0};
    //     for(int i=0; i<s.size(); i++){
    //         hash[s[i] - 'a']++;
    //     }

    //     for(int i=0; i<s.size(); i++){
    //         if(hash[s[i]-'a'] == 1){
    //             return i;
    //         }
    //     }
    //     return -1;
    // }

    // Q.867 Transpose a matrix
    // vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    //     int n = matrix.size();
    //     int m = matrix[0].size();
    //     vector<vector<int>> trans(m, vector<int>(n));
    //     for(int i=0; i<n; i++){
    //         for(int j=0; j<m; j++){
    //             trans[j][i] = matrix[i][j];
    //         }
    //     }
    //     return trans;
    // }

    // Q. 704 Binary search
    // int search(vector<int>& nums, int target) {
    //     int s = 0;
    //     int e = nums.size()-1;
    //     while(s<=e){
    //         int mid = s + (e-s)/2;
    //         if(nums[mid] == target){
    //             return mid;
    //         }
    //         else if(nums[mid] > target){
    //           e = mid - 1;
    //         }else{
    //             s = mid + 1;
    //         }
    //     }
    //     return -1;
    // }

    // @.704 To Lowercase
    // string toLowerCase(string s) {
        // string ans = "";
        // for(int i=0; i<s.length(); i++){
        //     if(s[i]>='A' && s[i]<='Z'){
        //         ans.push_back(s[i] + 'a' - 'A');
        //     }else{
        //         ans.push_back(s[i]);
        //     }
        // }
        // return ans;

    //     for(int i=0; i<s.length(); i++){
    //         if(s[i]>='A' && s[i]<='Z'){
    //            s[i] = s[i] + 'a' - 'A';
    //         }
    //     }
    //     return s;
    // }

    // Q.1748 Sum of unique elements
    // int sumOfUnique(vector<int>& nums) {
    //     for(int i=0; i<nums.size(); i++){
    //         int element = nums[i];
    //         for(int j=0; j<nums.size(); j++){
    //             if(i!=j && element == nums[j]){
    //                nums[j] = INT_MIN;
    //                nums[i] = INT_MIN;
    //             }
    //         }
    //     }

    //     int ans = 0;
    //     for(int i=0; i<nums.size(); i++){
    //         if(nums[i] != INT_MIN){
    //             ans += nums[i];
    //         }
    //     }
    //     return ans;
    // }

    // Leercode 205 Isomorphic string
    //  bool isIsomorphic(string s, string t) {
    //     int hash[256] = {0};
    //     bool istCharMapped[256] = {0};

    //     for(int i=0; i<s.size(); i++){
    //         if(hash[s[i]] == 0  && istCharMapped[t[i]] == 0){
    //             hash[s[i]] = t[i];
    //             istCharMapped[t[i]] = true;
    //         }
    //     }

    //     for(int i=0; i<s.size(); i++){
    //         if(char(hash[s[i]]) != t[i]){
    //             return false;
    //         }
    //     }
    //     return true;
    // }

    // Leeetcode 1365
    // vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    //     vector<int>ans;
    //     int count = 0;
    //     for(int i=0; i<nums.size(); i++){
    //         for(int j=0; j<nums.size(); j++){
    //             if(nums[i] > nums[j] && i != j){
    //                 count++;
    //             }
    //         }
    //         ans.push_back(count);
    //         count = 0;
    //     }
    //     return ans;
    // }

    //Leetcode 1464
    // int maxProduct(vector<int>& nums) {
    //    for(int i=0; i<nums.size(); i++){
    //         nums[i] -= 1;
    //     }

    //     int count = 0;

    //     for(int i=0; i<nums.size(); i++){
    //         for(int j=i+1; j<nums.size(); j++){
    //             if(nums[i]*nums[j]>count){
    //                 count = nums[i]*nums[j];
    //             }
    //         }
    //     }
    //     return count;
    // }

    // Leetcode 1929
    // vector<int> getConcatenation(vector<int>& nums) {
    //     vector<int>ans;
    //     for(int i=0; i<nums.size(); i++){
    //         ans.push_back(nums[i]);
    //     }
    //     for(int i=0; i<nums.size(); i++){
    //         ans.push_back(nums[i]);
    //     }
    //     return ans;
    // }

    // Leetcode 1346
    //  bool checkIfExist(vector<int>& arr) {
    //     for(int i=0; i<arr.size(); i++){
    //         for(int j=0; j<arr.size(); j++){
    //             if(arr[i] == 2*arr[j] && i != j){
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;
    // }

    // Leetcode 3798
    //  string largestEven(string s) {
    //     for(int i=s.length()-1; i>=0; i--){
    //         if(s[i] == '1'){
    //             s.pop_back();
    //         }else{
    //             break;
    //         }
    //     }
    //     return s;
    // }

    // Leetcode 2016
    // int maximumDifference(vector<int>& nums) {
    //     int ans=-1;
    //     for(int i=0; i<nums.size(); i++){
    //         for(int j=i+1; j<nums.size(); j++){
    //             if(nums[i]<nums[j] && i<j){
    //                 int x = nums[j]-nums[i];
    //                 ans = max(ans,x);
    //             }
    //         }
    //     }
    //     return ans;
    // }

    // Leetcode 2540
    //  int getCommon(vector<int>& nums1, vector<int>& nums2) {
    //     int i=0;
    //     int j=0;
    //     while(i<nums1.size() && j<nums2.size()){
    //         if(nums1[i]==nums2[j]){
    //             return nums1[i];
    //         }else if(nums1[i]<nums2[j]){
    //             i++;
    //         }else{
    //             j++;
    //         }
    //     }
        
    //     return -1;
    // }

    // Leetcode 2441
    // int findMaxK(vector<int>& nums) {
    //     sort(nums.begin(), nums.end());
    //     for(int i=nums.size()-1; i>=0; i--){
    //         int element = nums[i];
    //         for(int j=0; j<nums.size(); j++){
    //             if(element == -1*nums[j]){
    //                 return element;
    //             }
    //         }
    //     }
    //     return -1;
    // }

    // Leetcode 2089
    // vector<int> targetIndices(vector<int>& nums, int target) {
    //     sort(nums.begin(), nums.end());
    //     vector<int>arr;
    //     for(int i=0; i<nums.size(); i++){
    //         if(nums[i]==target){
    //             arr.push_back(i);
    //         }
    //     }
    //     return arr;
    // }

    // Leetcode 2109
    // string addSpaces(string s, vector<int>& spaces) {
    //     string ans="";
    //    int j=0;
    //     for(int i=0; i<s.length(); i++){
    //         if(j<spaces.size() && i==spaces[j]){
    //            // ans += ' ';
    //            ans.push_back(' ');
    //             j++;
    //         }
    //             // ans += s[i];
    //             ans.push_back(s[i]);
    //     }
    //     return ans;
    // }

    // Leetcode 1822
//     int signFunc(int x){
//     if(x>0){
//         return 1;
//     }else if(x<0){
//         return -1;
//     }else{
//         return 0;
//     }
// }
//     int arraySign(vector<int>& nums) {
//         int ans=1;
//         for(int i=0; i<nums.size(); i++){
//            if(nums[i]>0){
//             ans *= 1;
//            }else if(nums[i]<0){
//             ans *= -1;
//            }else{
//             ans *= 0;
//            }
//         }
//         int ans2 = signFunc(ans);
//         return ans2;
//     }

// Leetcode 217
// bool containsDuplicate(vector<int>& nums) {
        // for(int i=0; i<nums.size(); i++){
        //     for(int j=i+1; j<nums.size(); j++){
        //         if(nums[i]==nums[j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;

    //     sort(nums.begin(), nums.end());
    //     for(int i=0; i<nums.size()-1; i++){
    //         if(nums[i]==nums[i+1]){
    //             return true;
    //         }
    //     }
    //     return false;
    // }

    // Leetcode 442
    // vector<int> findDuplicates(vector<int>& nums) {
    //     sort(nums.begin(), nums.end());
    //     vector<int>arr;
    //     for(int i=0; i<nums.size()-1; i++){
    //         if(nums[i]==nums[i+1]){
    //             arr.push_back(nums[i]);
    //         }
    //     }
    //     return arr;
    // }

    // Leetcode 1480
    // vector<int> runningSum(vector<int>& nums) {
    //     int ans = 0;
    //     vector<int>arr;
    //     for(int i=0; i<nums.size(); i++){
    //         ans += nums[i];
    //         arr.push_back(ans);
    //     }
        
    //     return arr;
    // }

    // Leetcode 1816
    // string ans="";
    //     int a=0;
    //     for(int i=0; i<s.length(); i++){
    //         if(s[i]==' '){
    //             a++;
    //         }
    //         if(a==k){
    //             break;
    //         }
    //         ans.push_back(s[i]);
    //     }
    //     return ans;

    // Leetcode 1979
    // int findGCD(vector<int>& nums) {
    //     int s=INT_MIN;
    //     int t=INT_MAX;
    //     for(int i=0; i<nums.size(); i++){
    //         if(nums[i]>s){
    //             s = nums[i];
    //         }
    //         if(nums[i]<t){
    //             t = nums[i];
    //         }
    //     }
    //     int k=1;
    //     for(int i=1; i<=t; i++){
    //     if(s%i == 0 && t%i == 0){
    //         k=i;
    //     }
    //     }
    //     return k;
    //     }

    // Leetcode 1491
    //  vector<int>arr;
    //     int s=INT_MIN;
    //     int t=INT_MAX;
    //     for(int i=0; i<salary.size(); i++){
    //         if(salary[i]>s){
    //             s = salary[i];
    //         }
    //         if(salary[i]<t){
    //             t = salary[i];
    //         }
    //     }
    //    for(int i=0; i<salary.size(); i++){
    //     if(salary[i]==s || salary[i]==t){
    //         continue;
    //     }
    //     arr.push_back(salary[i]);
    //    }
    //    int ans=0;
    //    for(int i=0; i<arr.size(); i++){
    //     ans += arr[i];
    //    }
    //    int p=arr.size();
    //    double m = (double)ans/p;
    //    return m;
    // }

    // // Leetcode 2351
    //  char repeatedCharacter(string s) {
    //     int hash[26]={0};
    //     for(int i=0; i<s.length(); i++){
    //         hash[s[i]-'a']++;

    //         if(hash[s[i]-'a']==2){
    //             return s[i];
    //         }
    //     }
    //     return '\0';
    // }

    // Leetcode 240
   // bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int m = matrix.size();
        // int n = matrix[0].size();
        // for(int i=0; i<m; i++){
        //     for(int j=0; j<n; j++){
        //         if(matrix[i][j]==target){
        //             return true;
        //         }
        //     }
        // }
        // return false;
    

    // int m = matrix.size();
    // int n = matrix[0].size();
    // int row = 0;
    // int col = n-1;
    // while(row<m && col>=0){
    //     if(matrix[row][col]==target){
    //         return true;
    //     }else if(matrix[row][col]>target){
    //         col--;
    //     }else{
    //         row++;
    //     }
    // }
    // return false;
    //  }

    // Leetcode 3813
    // int vowelConsonantScore(string s) {
    //     int v=0;
    //     int c=0;
    //     for(int i=0; i<s.length(); i++){
    //         if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]>'a' && s[i]<='z'){
    //             c++;
    //         }else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
    //             v++;
    //         }
    //     }
    //     if(c==0){
    //         return 0;
    //     }
    //     int score = floor(v/c);
    //     return score;
    // }

    // Leetcode 169
    // int majorityElement(vector<int>& nums) {
        // unordered_map<int,int> hash;
        // for(int i=0; i<nums.size(); i++){
        //     hash[nums[i]]++;
        //     if(hash[nums[i]]>(nums.size()/2)){
        //         return nums[i];
        //     }
        // }
        // return '\0';

    //     int candidate = 0;
    //     int count = 0;
    //     for(int i=0; i<nums.size(); i++){
    //         if(count==0){
    //             candidate = nums[i];
    //         }
    //         if(candidate==nums[i]){
    //             count++;
    //         }else{
    //             count--;
    //         }
    //     }
    //     return candidate;
    // }

    // Leetcode 229
    // vector<int> majorityElement(vector<int>& nums) {
    //     unordered_map<int,int>hash;
    //     set<int>arr;
    //     for(int i=0; i<nums.size(); i++){
    //         hash[nums[i]]++;
    //         if(hash[nums[i]]>(nums.size()/3)){
    //             arr.insert(nums[i]);
    //         }
    //     }
    //     vector<int>ans;
    //     for(int x: arr){
    //         ans.push_back(x);
    //     }
    //     return ans;
    // }

    //  unordered_map<int,int>hash;
    //     vector<int>arr;
    //     for(int i=0; i<nums.size(); i++){
    //         hash[nums[i]]++;
    //     }
    //     for(auto p: hash){
    //         if(p.second > nums.size()/3){
    //             arr.push_back(p.first);
    //         }
    //     }
       
    //     return arr;

    // int count1 = 0;
    // int count2 = 0;
    // int candidate1 = 0;
    // int candidate2 = 0;
    // for(int i=0; i<nums.size(); i++){
    //     if(candidate1 == nums[i]){
    //         count1++;
    //     }else if(candidate2 == nums[i]){
    //         count2++;
    //     }else if(count1 == 0){
    //         candidate1 = nums[i];
    //         count1=1;
    //     }else if(count2 == 0){
    //         candidate2 = nums[i];
    //          count2=1;
    //     }else{
    //         count1--;
    //         count2--;
    //     }
    // }
    
    // count1 =0;
    // count2 = 0;
    // for(int i=0; i<nums.size(); i++){
    //     if(nums[i]==candidate1){
    //         count1++;
    //     }else if(nums[i]==candidate2){
    //         count2++;
    //     }
    // }

    // vector<int>ans;
    // if(count1>nums.size()/3){
    //     ans.push_back(candidate1);
    // }
    //  if(count2>nums.size()/3){
    //     ans.push_back(candidate2);
    // }
    // return ans;
    // }

    // Leetcode 961
    //  int repeatedNTimes(vector<int>& nums) {
    //     unordered_map<int,int>hash;
    //     int n = nums.size()/2;
    //     for(int i=0; i<nums.size(); i++){
    //         hash[nums[i]]++;
    //     }
    //     for(auto p: hash){
    //         if(p.second==n){
    //             return p.first;
    //         }
    //     }
    //     return '/0';
    // }

    // Leetcode 448
    // bool isPresent(const vector<int> &arr, int i){
//         for(int j=0; j<arr.size(); j++){
//             if(i==arr[j]){
//                 return true;
//             }
//         }
//         return false;
//     }
  // vector<int> findDisappearedNumbers(vector<int>& nums) {
    //    vector<int>ans;
    //   int n = nums.size();
    //     for(int i=1; i<=n; i++){
    //         if(isPresent(nums, i)){
    //             continue;
    //         }else{
    //             ans.push_back(i);
    //         }
    //     }
    //    return ans;
    
// vector<int>ans;
//     for(int i=0; i<nums.size(); i++){
//         int index = abs(nums[i])-1;

//         if(nums[index]>0){
//             nums[index] *= -1;
//         }
//     }
//     for(int i=0; i<nums.size(); i++){
//         if(nums[i]>0){
//             ans.push_back(i+1);
//         }
//     }
//     return ans;
// }

// Leetcode 4 
 // double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // vector<int>nums3;
        // nums3.reserve(nums1.size() + nums2.size());
        // for(int i=0; i<nums1.size(); i++){
        //     nums3.push_back(nums1[i]);
        // }
        // for(int i=0; i<nums2.size(); i++){
        //     nums3.push_back(nums2[i]);
        // }
        // sort(nums3.begin(), nums3.end());
        // int n=nums3.size();
        // // double ans;
        // if(n%2 != 0){
        //     int p = n/2;
        //     return (double)nums3[p];
        // }else{
        //     int q = n/2;
        //     int r = (n/2)-1;
        //     return (double)(nums3[q]+nums3[r])/2.0;
        // }
       // double z = round(ans * 100000) / 100000;
        //return ans;


       //   vector<int>nums3;
        // nums3.reserve(nums1.size() + nums2.size());
        // for(int i=0; i<nums1.size(); i++){
        //     nums3.push_back(nums1[i]);
        // }
        // for(int i=0; i<nums2.size(); i++){
        //     nums3.push_back(nums2[i]);
        // }

        // for(int i=0; i<nums2.size(); i++){
        //     nums1.push_back(nums2[i]);
        // }
    //     nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    //     sort(nums1.begin(), nums1.end());
    //     int n=nums1.size();
    //     // double ans;
    //     if(n%2 != 0){
    //         int p = n/2;
    //         return (double)nums1[p];
    //     }else{
    //         int q = n/2;
    //         int r = (n/2)-1;
    //         return (double)(nums1[q]+nums1[r])/2.0;
    //     }
    // }

    // Leetcode 219
    //   bool containsNearbyDuplicate(vector<int>& nums, int k) {
    //     // for(int i=0; i<nums.size(); i++){
    //     //     for(int j=i+1; j<=i+k && j<nums.size(); j++){
    //     //         if(nums[i]==nums[j] && abs(i-j)<=k){
    //     //             return true;
    //     //         }
    //     //     }
    //     // }
    //     // return false;

    //     unordered_map<int,int>hash;
    //     for(int i=0; i<nums.size(); i++){
    //         if(hash.count(nums[i]) && i-hash[nums[i]]<=k){
    //             return true;
    //         }
    //         hash[nums[i]] = i;
    //     }
    //     return false

    // Leetcode 137
    // int singleNumber(vector<int>& nums) {
    //     unordered_map<int,int>hash;
    //     for(int i=0; i<nums.size(); i++){
    //         hash[nums[i]]++;
    //     }
    //     for(auto &p: hash){
    //         if(p.second==1){
    //             return p.first;
    //         }
    //     }
    //     return '/0';
    // }

    // Leetcode 231
    // bool isPowerOfTwo(int n) {
    //     if(n<0){
    //         return false;
    //     }
    //     for(int i=0; i<=n; i++){
    //         if(pow(2,i)==n){
    //             return true;
    //         }else if(pow(2,i)>n){
    //             return false;
    //         }
    //     }
    //     return '/0';
    // }

    // Leetcode 507
    //  bool checkPerfectNumber(int num) {
    //     int ans=0;
    //     for(int i=1; i<=num/2; i++){
    //         if(num%i==0){
    //             ans += i;
    //         }
    //     }
    //     if(ans == num){
    //         return true;
    //     }
    //     return false;
    // }

    // Leetcode 50
    //  double myPow(double x, int n) {
    //     return round(pow(x,n)*100000)/100000;
       
    // }

    // Leetcode 167
    // vector<int> twoSum(vector<int>& numbers, int target) {
    //  //   vector<int>ans;
    //    int s = 0;
    //    int e = numbers.size()-1;
    //    while(s<e){
    //     int sum = numbers[s]+numbers[e];
    //     if(sum==target){
    //         // ans.push_back(s+1);
    //         // ans.push_back(e+1);
           
    //          break;
    //     }else if(sum<target){
    //         s++;
    //     }else{
    //         e--;
    //     }
    //    }
    //    // return ans;
    //   return {s+1, e+1};
    // }

    // Leetcode 976
    // int largestPerimeter(vector<int>& nums) {
    //    sort(nums.begin(), nums.end());
    
    // for(int i = nums.size() - 1; i >= 2; i--) {
    //     if(nums[i-1] + nums[i-2] > nums[i]) {
    //         return nums[i] + nums[i-1] + nums[i-2];
    //     }
    // }
    
    // return 0;
    // }

    // Leetcode 2022 
    // vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    //     vector<vector<int>>brr;
    //     if(m*n != original.size()){
    //         return brr;
    //     }
    //      vector<vector<int>>arr(m, vector<int>(n));
    //      int k=0;
    //      for(int i=0; i<m; i++){
    //         for(int j=0; j<n; j++){
    //             arr[i][j]=original[k];
    //             k++;
    //         }
    //      }
    //      return arr;
    // }

    // Leetcode 1394
    //   int findLucky(vector<int>& arr) {
    //     unordered_map<int,int>hash;
    //     for(int i=0; i<arr.size(); i++){
    //         hash[arr[i]]++;
    //     }
    //    int ans=INT_MIN;
    //     for(auto &p: hash){
    //         if(p.second == p.first && p.second>ans){
    //             ans = p.second ;
    //         }
    //     }
    //     if(ans>INT_MIN){
    //         return ans;
    //     }
    //     return -1;
    // }

    // Leetcode 3005
    // int maxFrequencyElements(vector<int>& nums) {
    //     unordered_map<int,int>hash;
    //     for(int i=0; i<nums.size(); i++){
    //         hash[nums[i]]++;
    //     }
    //     int ans=INT_MIN;
    //     for(auto &p: hash){
    //         if(p.second > ans){
    //             ans = p.second;
    //         }
    //     }
    //     int ans2=0;
    //     for(auto &p: hash){
    //       if(p.second == ans){
    //         ans2 += ans;
    //       }
    //     }
    //     return ans2;
    // }

    // Leetcode 260
    //   vector<int> singleNumber(vector<int>& nums) {
    //     vector<int>ans;
    //     unordered_map<int,int>hash;
    //     for(int i=0; i<nums.size(); i++){
    //         hash[nums[i]]++;
    //     }

    //     for(auto &p: hash){
    //       if(p.second == 1){
    //          ans.push_back(p.first);
    //       }
    //     }
    //     return ans;
    // }

    // // Leetcode 540
    //  int singleNonDuplicate(vector<int>& nums) {
    //     // int ans = 0;
    //     // for(int i=0; i<nums.size(); i++){
    //     //     ans = ans^nums[i];
    //     // }
    //     // return ans;

    //     int s=0;
    //     int e=nums.size()-1;
    //     while(s<e){
    //         int mid = s+(e-s)/2;
    //         if(mid%2 == 1){
    //             mid--;
    //         }
    //         if(nums[mid]==nums[mid+1]){
    //             s = mid+2;
    //         }else{
    //             e = mid;
    //         }
    //     }
    //     return nums[e];
    // }

    // Leetcode 1941
    // bool areOccurrencesEqual(string s) {
    //     unordered_map<int,int>hash;
    //     for(int i=0; i<s.size(); i++){
    //         hash[s[i]]++;
    //     }
    //     int ans;
    //     for(auto &p: hash){
    //         ans = p.second;
    //         break;
    //     }

    //     for(auto &p: hash){
    //         if(p.second != ans){
    //             return false;
    //         }
    //     }
    //   return true;
    // }

    // Letcode 2390
    // string removeStars(string s) {
    //     for(int i=0; i<s.size(); i++){
    //         if(s[i]=='*'){
    //             s.erase(i-1,2);
    //             i=i-2;
    //         }
    //     }
    //     return s;
    // }

    // Leetcode 326
    //  bool isPowerOfThree(int n) {
    //     if(n<=0){
    //         return false;
    //     }
    //     long long ans=1;
    // //     for(int i=0; i<=n; i++){
            
    // //         if( ans== n){
    // //             return true;
    // //         }else if(ans>n){
    // //             // break;
    // //             return false;
    // //         }
    // //         ans *= 3;
    // //     }
    // //    // return false;
    // //    return '/0';

    // while(ans <= n){
    //     if(ans == n){
    //         return true;
    //     }
    //     ans *= 3;
    // }
    // return false;
    // }

    // Leetcode 2309
//     bool isPresent(string s, char a){
//     for(int i=0; i<s.size(); i++){
//         if(s[i]-a==32){
//             return true;
//         }
//     }
//     return false;
// }
//     string greatestLetter(string s) {
//         char great='0';
//         for(int i=0; i<s.size(); i++){
//             if(s[i]>great && s[i]>='A' &&s[i]<='Z' && isPresent(s, s[i])){
//                 great = s[i];
//             }
//         }
//       string ans="";
//       if(great != '0'){
//           ans.push_back(great);
//       }
//       return ans;
//     }

// Leetcode 342
// bool isPowerOfFour(int n) {
//     if(n <= 0) return false;

//     long long ans = 1;
//     while(ans <= n){
//         if(ans == n) return true;
//         ans *= 4;
//     }
//     return false;
// }

// Leetcode 35
//  int searchInsert(vector<int>& nums, int target) {
//         int s=0;
//         int e=nums.size()-1;
//         while(s<=e){
//             int mid = s + (e-s)/2;
//             if(nums[mid]==target){
//                 return mid;
//             }else if(nums[mid]>target){
//                 e = mid-1;
//             }else{
//                 s=mid+1;
//             }
//         }
//         return e+1;
//     }

// Leetcode 509
//  int fib(int n) {
//        int a=0; int b=1;
//        int s=0;
//        int i=1;
//        if(n==1){
//         return 1;
//        }
//        while(n>i){
//         s=a+b;
//         a=b;
//         b=s;
//         i++;
//        }
//        return s;
//     }

// Leetcode 389
// bool isPresent(char x, string &s){
//     for(int i=0; i<s.size(); i++){
//         if(x==s[i]){
//             s[i]='0';
//             return true;
//         }
//     }
//     return false;
// }
//     char findTheDifference(string s, string t) {
//         char ans;
//         for(int i=0; i<t.size(); i++){
//             if(isPresent(t[i], s)){
//                 continue;
//             }else{
//                 ans = t[i];
//                 break;
//             }
//         }
//     return ans;
//  }

// Leetcode 1287
//  int findSpecialInteger(vector<int>& arr) {
//         unordered_map<int,int>hash;
//         for(int i=0; i<arr.size(); i++){
//             hash[arr[i]]++;
//         }
//         int max=INT_MIN;
//         for(auto &p: hash){
//             if(p.second > max){
//                 max = p.second;
//             }
//         }
//         for(auto &p: hash){
//             if(p.second == max){
//                 return p.first;;
//             }
//         }
//         return '/0';
//     }

// Letter 744
// char nextGreatestLetter(vector<char>& letters, char target) {
//         char x = letters[0];
//         sort(letters.begin(), letters.end());
//         for(int i=0; i<letters.size(); i++){
//             if(letters[i]>target){
//                 return letters[i];
//             }
//         }
//         return x;
//     }

// Leetcode 1089
//  void duplicateZeros(vector<int>& arr) {
//     int n = arr.size();
//     int zeros = 0;

//     // Count zeros
//     for(int i = 0; i < n; i++){
//         if(arr[i] == 0) zeros++;
//     }

//     int i = n - 1;
//     int j = n + zeros - 1;

//     // Traverse from back
//     while(i >= 0){
//         if(j < n){
//             arr[j] = arr[i];
//         }

//         if(arr[i] == 0){
//             j--;
//             if(j < n){
//                 arr[j] = 0;
//             }
//         }

//         i--;
//         j--;
//     }
//     }

// Leetcode 1207
//   bool uniqueOccurrences(vector<int>& arr) {
//         unordered_map<int,int>hash;
//         for(int i=0; i<arr.size(); i++){
//             hash[arr[i]]++;
//         }
//         for(auto &p: hash){
//             for(auto &q: hash){
//                 if(p.first != q.first && p.second == q.second){
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }

// Leetcode 1550
//  bool threeConsecutiveOdds(vector<int>& arr) {
//         if(arr.size()<3){
//             return false;
//         }
//         for(int i=0; i<arr.size()-2; i++){
//             if(arr[i]%2 != 0 && arr[i+1]%2 != 0 && arr[i+2]%2 != 0){
//                return true;
//             }
//         }
//         return false;
//     }

// Leetcode 1704
// bool isVowel(char x){
//     if(x=='A' ||x=='E' ||x=='I' ||x=='O' ||x=='U' ||x=='a' ||x=='e' ||x=='o' ||x=='i' ||x=='u'){
//         return true;
//     }
//     return false;
// }
//     bool halvesAreAlike(string s) {
//         string a="";
//         string b="";
//         for(int i=0; i<=(s.size()/2)-1; i++){
//             a.push_back(s[i]);
//         }
//          for(int i=(s.size()/2); i<s.size(); i++){
//             b.push_back(s[i]);
//         }

//         int v1=0;
//         int v2=0;
//         for(int i=0; i<a.size(); i++){
//             if(isVowel(a[i])){
//                 v1++;
//             }
//         }
//         for(int i=0; i<b.size(); i++){
//             if(isVowel(b[i])){
//                 v2++;
//             }
//         }
//         if(v1==v2){
//             return true;
//         }
//         return false;
//     }

// Leetcode 1523
// int countOdds(int low, int high) {
//         int count = 0;
//         for(int i=low; i<=high; i++){
//             if(i%2 != 0){
//                 count++;
//             }
//         }
//         return count;
//     }

// Leetcode 1323
//  int maximum69Number (int num) {
//         vector<int>arr;
//         while(num>0){
//             arr.push_back(num%10);
//             num = num/10;
//         }
//         reverse(arr.begin(), arr.end());
//         for(int i=0; i<arr.size(); i++){
//             if(arr[i]==6){
//                 arr[i]=9;
//                 break;
//             }
//         }
//         int n=arr.size();
//         int ans=0;
//         for(int i=n-1; i>=0; i--){
//             ans += arr[i]*pow(10,n-i-1);
//         }
//         return ans;
//     }

// Leetcde 349
// bool isPresent(int a, vector<int>nums2){
//     for(int i=0; i<nums2.size(); i++){
//         if(a==nums2[i]){
//             return true;
//         }
//     }
//     return false;
// }
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         set<int>st;
//         for(int i=0; i<nums1.size(); i++){
//             if(isPresent(nums1[i], nums2)){
//                 st.insert(nums1[i]);
//             }
//         }
//         vector<int>ans;
//        for (auto x : st) {
//     ans.push_back(x);
// }
//         return ans;
//     }

// Leetcode 7
//  int reverse(int x) {
//         vector<int>ans;
//         int sign = 1;
//         long long a = abs((long long)x);
//         if(x<0){
//             sign = -1;
//         }
        
//         while(a>0){
//             ans.push_back(a%10);
//             a=a/10;
//         }
//         long long ans2=0;
//         for(int i=ans.size()-1; i>=0; i--){
//             ans2 += ans[i]*pow(10,ans.size()-i-1);
//         }
       
//        long long y= sign*ans2;
//        if(y>INT_MAX || y<INT_MIN){
//         return 0;
//        }
//        return y;
//     }

// Leetcode 1281
// int subtractProductAndSum(int n) {
//         vector<int>arr;
//         while(n>0){
//             arr.push_back(n%10);
//             n=n/10;
//         }
//         long long pro=1;
//         int sum=0;
//         for(int i=0; i<arr.size(); i++){
//             pro *= arr[i];
//         }
//         for(int i=0; i<arr.size(); i++){
//            sum += arr[i];
//         }
//         int ans = pro-sum;
//         return ans;
//     }

// Leetcode 1295
//   int findNumbers(vector<int>& nums) {
//           int count = 0;

//     for(int x : nums){
//         if(to_string(x).size() % 2 == 0){
//             count++;
//         }
//     }

//     return count;
//     }

// Leetcode 3442
//  int maxDifference(string s) {
//         unordered_map<int,int>hash;
//         for(int i=0; i<s.size(); i++){
//             hash[s[i]]++;
//         }
//         int odd=0;
//         int even=INT_MAX;
//         for(auto &p: hash){
//           if(p.second%2 == 0){
//             even = min(even, p.second);
//           }else{
//             odd = max(odd, p.second);
//           }
//         }
//         int a = odd-even;
//         return a;
//     }

// Leetode 3663
// int getLeastFrequentDigit(int n) {
//         vector<int>arr;
//         while(n>0){
//             arr.push_back(n%10);
//             n=n/10;
//         }
//         reverse(arr.begin(), arr.end());
//         unordered_map<int,int>hash;
//         for(int i=0; i<arr.size(); i++){
//             hash[arr[i]]++;
//         }
//         int meen = INT_MAX;
//         for(auto &p: hash){
//             if(p.second<meen){
//                 meen = p.second;
//             }
//         } 
//         int ans=INT_MAX;
//         for(auto &p: hash){
//             if(p.second == meen){
//                 ans = min(ans, p.first);
//             }
//         }
//         return ans;
//     }

// Leetcode 9
 bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        vector<int>arr;
        while(x>0){
            arr.push_back(x%10);
            x=x/10;
        }
        int s=0;
        int e=arr.size()-1;
        while(s<=e){
            if(arr[s]==arr[e]){
                s++;
                e--;
            }else{
                return false;
            }
        }
        return true;
    }
 }

