#include<iostream>
using namespace std;
int sortings(int arr[]){
     int start=0;
    int end=9;
    int i=0;
    while(i!=end){
        if(arr[i]==0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        else{
            swap(arr[end],arr[i]);
            end--;
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{

    int arr[10]={1,0,1,0,0,1,1,0,0,1};
    sortings(arr);
 return 0;
}