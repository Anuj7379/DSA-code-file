#include<iostream>
using namespace std;
int selection_sort(int arr[], int size){
    for (int i = 0; i < size-1; i++)
    {
        int minIndex =i;
        for (int j = i+1; j <size; j++)
        {
            if (arr[j]<arr[minIndex])
            {
                minIndex =j;
            }
            
        }
        swap(arr[minIndex] ,arr[i]);

        
    }

    for (int i = 0; i <size; i++)
    {
        cout<<arr[i];
    }
    
    
}
int main(){
    int arr[6] ={1,3,2,6,4,5};
    selection_sort(arr,6);
    return 0;

}


/*

time complexcity -- O(n^2)
space compexcity --- O(1)

*/