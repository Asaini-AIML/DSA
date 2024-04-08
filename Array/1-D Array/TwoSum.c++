#include<iostream>
#include<vector>
#include<map>
using namespace std;
string read(vector<int> book, int target)
{
    // Write your code here.  
    // Write your code here.
     map<int,int>mp;
    // Write your code here.
    for(int i=0;i<book.size();i++){
        int m=book[i];
        int t=target-m;
        if (mp.find(t) != mp.end()) {
          return "Yes";
        }
        mp[m] = i;
    }
    return "No";
}

int main()
{  
    vector<int>book{1,3,4,5,6,7};
    int target =8;
   string c= read(book,target);
   cout<<c ;
 return 0;
}