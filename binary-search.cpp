#include<iostream>
using namespace std;
int binarySearch(int arr[] , int size ,int key){
    int start =0;
    int end =size-1;
    int mid =start +(end-start)/2;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        if (arr[mid]>key)
        {
            end =mid-1;
        }
        else{
            start=mid+1;
        }
        mid =start +(end-start)/2;
        
    }
    return -1;
    
}
int main(){
int arr[5]={1,3,5,6,7};
int index = binarySearch(arr,5,7);
cout<<"index is "<<index;
return 0;

}
// time complexcity in binary seach -- O(logn)//
//in binary search array should be sorted ///
/*
  n/2^N =1
  n=2^N 
  N=log(n)
*/