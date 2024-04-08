#include<iostream>
#include<vector>
using namespace std;
int sum(vector<vector<int>>arr){
    for(int i=0;i<4;i++){
        int sum =0;
        for(int j=0;j<4;j++){
            sum=sum+arr[i][j];

        }
        cout<<sum<<endl;;
    }
}
int main()
{
       vector<vector<int>>arr{{1,2,3,4},{5,6,7,8}};
      sum(arr);
 return 0;
}