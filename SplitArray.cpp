// Given an integer array A of size N, check if the input array can be splitted in two parts such that -
// - Sum of both parts is equal
// - All elements in the input, which are divisible by 5 should be in same group.
// - All elements in the input, which are divisible by 3 (but not divisible by 5) should be in other group.
// - Elements which are neither divisible by 5 nor by 3, can be put in any group.
// Groups can be made with any set of elements, i.e. elements need not to be continuous. And you need to consider each and every element of input array in some group.
// Return true, if array can be split according to the above rules, else return false.



#include <bits/stdc++.h> 
bool helper(int arr[], int n, int lsum, int rsum) 
{ 
  
    
    if (n==0) 
        return lsum == rsum; 
  
    
    if (arr[0] % 5 == 0) 
        lsum += arr[0]; 
  
    
    else if (arr[0] % 3 == 0) 
        rsum += arr[0]; 
  
    
    else
         return helper(arr+1, n-1, lsum + arr[0], rsum) || helper(arr+1, n-1, lsum, rsum + arr[0]); 
  
    
    return helper(arr+1, n-1, lsum, rsum); 
} 
  

bool splitArray(int* arr, int n) 
{ 
     return helper(arr, n, 0, 0); 
} 