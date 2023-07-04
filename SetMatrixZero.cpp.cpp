#include <bits/stdc++.h>
using namespace std;
 // set matrix zero
 vector<vector<int>>solve(vector<vector<int>>&arr,int n,int m){
     bool firstRowZero = false;
    bool firstColZero = false;

   for (int i = 0; i < n; i++) {
        if (arr[i][0] == 0) {
            firstRowZero  = true;
            break;
        }
    }
    
    for (int j = 0; j < m; j++) {
        if (arr[0][j] == 0) {
            firstColZero= true;
            break;
        }
    }

  for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (arr[i][j] == 0) {
                arr[i][0] = 0;
                arr[0][j] = 0;
            }
        }
    }
      for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (arr[i][j] != 0) {
                if (arr[i][0] == 0 || arr[0][j] == 0) {
                    arr[i][j] = 0;
                }
            }
        }
    }
        if (firstRowZero) {
        for (int j = 0; j < m; j++) {
            arr[0][j] = 0;
        }
    }

    if (firstColZero) {
        for (int i = 0; i < n; i++) {
            arr[i][0] = 0;
        }
    }
        return arr;
    }
    
int main() {
vector<vector<int>> arr = {{0, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = arr.size();
    int m = arr[0].size();
    vector<vector<int>> ans = solve(arr, n, m);
     for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << endl;
    }
	return 0;
}
