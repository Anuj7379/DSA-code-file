#include<iostream>
using namespace std;
int insertion_sort(int arr[], int size){
    for (int i = 1; i < size; i++)
    {
        int j = i-1;
        int temp =arr[i];
        for ( ;j >=0; j--)
        {
           
            if (arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            
        }
        arr[j+1]=temp;
        
    }

    for (int i = 0; i <size; i++)
    {
        cout<<arr[i];
    }
    
    
}
int main(){
    int arr[6] ={1,3,2,6,4,5};
    insertion_sort(arr,6);
    return 0;

}
/*

time complexcity -- O(n^2)
space compexcity --- O(1)

*/