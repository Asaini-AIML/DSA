#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>transpose(vector<vector<int>>arr){
    vector<vector<int>>result(arr[0].size(),vector<int>(arr.size()));
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            result[j][i]=arr[i][j];
        }
    }
    return result;
}
int main()
{
   vector<vector<int>>transposed;
   vector<vector<int>>arr{{1,2,3},{4,5,6},{7,8,9}};
   transposed=transpose(arr);
   for(int i=0;i<arr.size();i++){
       cout<<'[';
        for(int j=0;j<arr[0].size();j++){
           cout<<transposed[i][j];
        }

        cout<<']'<<endl;
    }
 return 0;
}