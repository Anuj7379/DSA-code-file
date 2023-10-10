#include<iostream>
using namespace std;
int bubble_sort(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j <size-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
             
              swap(arr[j],arr[j+1]);

            }
            
        }
        
    }
    
    for (int i = 0; i <size; i++)
    {
        cout<<arr[i];
    }
    
}
int main(){
    int arr[6] ={1,3,2,6,4,5};
    bubble_sort(arr,6);
    return 0;
}
/*
time complexcity ---O(n^2)
space complexcity --- O(1)
*/