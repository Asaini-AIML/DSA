#include<iostream>
#include<vector>
using namespace std;

void sum(vector<vector<int>>& arr) {
    // Assuming all inner vectors have the same size
    int size = arr.size();

    // Calculate column-wise sum
    for (int i = 0; i < 4; i++) {
        int sum = 0;
        for (int j = 0; j < 2; j++) {
            sum += arr[j][i];
        }
        cout << sum << endl;
    }
}

int main() {
    vector<vector<int>> arr{{1, 2, 3, 4},{5, 6, 7, 8}};
    sum(arr);
    return 0;
}
