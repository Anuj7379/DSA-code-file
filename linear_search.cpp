#include<iostream>
using namespace std;
bool search(int arr[], int size,  int n){

    for (int i = 0; i < size; i++)
    {
        if (arr[i]==n)
        {
            return 1;
        }
        
    }
    return 0;

    

}
int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9,12};
    int size =10;
    int n;
    cin >>n;
    bool found = search(arr ,size ,n);
    if (found)
    {
        cout<<"no. is match"<<endl;
    }
    else{
        cout<<"no.. is not  match";
    }
    
    return 0;
}