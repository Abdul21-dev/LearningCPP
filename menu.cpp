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
 bool isAnagram(string s, string t) {
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
        int Hashtable[256]={0};

        for(int i=0; i<s.length(); i++){
            Hashtable[s[i]]++;
        }
         for(int i=0; i<t.length(); i++){
            Hashtable[t[i]]--;
        }
        for(int i=0; i<256; i++){
            if(Hashtable[i]!=0){
                return false;
            }
        }
        return true;
    }

}

