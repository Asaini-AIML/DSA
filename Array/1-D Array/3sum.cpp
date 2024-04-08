#include<iostream>
using namespace std;
bool finnd(int arr[],int t){
    for(int i=0;i<8;i++){
     int ele=arr[i];
     for(int j=i+1;j<8;j++){
        int  ele2=arr[j];
        for(int k=j+1;k<8;k++){
            if((ele+ele2+arr[k])==t){
                return true;
            }
        }
     }
    }
    return false;
}
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    int t=1000;
    bool c=finnd(arr,t);
    cout<<c;
 return 0;
}