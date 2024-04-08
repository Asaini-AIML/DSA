#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // cout<<&n<<endl;
//    
// int c;
// cin>>c;
//      vector<int>h(c);
//      for(int i=0;i<5;i++){
//         cin>>h[i];
//      }
//     cout<<h.size();
//     for(int i=0;i<c;i++){
//         cout<<h[i];
//     }
     vector<int>h;
     for(int i=0;i<5;i++){
        cin>>h[i];
     }
    cout<<h.size();
    for(int i=0;i<5;i++){
        cout<<h[i];
    }
}