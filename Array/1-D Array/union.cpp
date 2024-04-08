#include<iostream>
#include<vector>
#include<set>
#include<limits> // For INT8_MIN
using namespace std;

int main()
{
    // int c;
    // cin >> c;
    // vector<int> a(c);
    // vector<int> b(c);
    // for(int i = 0; i < c; i++){
    //     cin >> a[i];
    // }
    // for(int j = 0; j < c; j++){
    //     cin >> b[j];
    // }
    // vector<int> unani(2*c);
    // for(int i = 0; i < c; i++){
    //     unani[i] = a[i];
    // }
    // for(int i = 0; i < c; i++){
    //     int e = unani[i];
    //     for(int j = 0; j < c; j++){
    //         if(e == b[j]){
    //             b[j] = INT8_MIN;
    //         }
    //     }  
    // }
    // for(int i = 0; i < c; i++){
    //     unani[i+c] = b[i];
    // }

    // // Output the elements of unani
    // for(int i = 0; i < 2*c; i++){
    //     cout << unani[i] << " ";
    // }
    // cout << endl;

    // return 0;
    int c;
    cin >> c;
    vector<int> a(c);
    vector<int> b(c);
    for(int i = 0; i < c; i++){
        cin >> a[i];
    }
    for(int j = 0; j < c; j++){
        cin >> b[j];
    }
    set<int>s;
    for(auto it:a){
        s.insert(it);
    }
    for(auto it:b){
        s.insert(it);
    }
    for(auto it:s){
        cout<<it;
    }
}
