#include <iostream>
#include <vector>
#include <climits> // Include this for INT16_MIN and INT16_MAX
using namespace std;

void finds(vector<vector<int>>& arr, int& maxx, int& minn) {
    int s = arr.size();
    int t = arr[0].size();
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < t; j++) {
            if (maxx < arr[i][j]) {
                maxx = arr[i][j];
            }
            if (minn > arr[i][j]) {
                minn = arr[i][j];
            }
        }
    }
}

int main() {
    vector<vector<int>> arr{{1, 2, 3, 4}, {5, 6, 7, 8}};
    int maxx = INT16_MIN;
    int minn = INT16_MAX;
    finds(arr, maxx, minn);
    cout << "Min element: " << minn << endl;
    cout << "Max element: " << maxx << endl;
    return 0;
}
