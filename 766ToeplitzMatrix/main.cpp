//
//  main.cpp
//  766ToeplitzMatrix
//
//  Created by 许滨楠 on 2018/9/2.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

/*bool isToeplitzMatrix(vector<vector<int>>& matrix) {
    int a[20][20];
    int i = 0;
    int j = 0;
    for (auto k = matrix.begin(); k != matrix.end(); ++k) {
        j = 0;
        for (auto l = k->begin(); l != k->end(); ++l) {
            a[i][j] = *l;
            ++j;
        }
        ++i;
    }
    for (int k = i - 1; k >= 0; --k) {
        int n = a[k][0];
        for (int c = 1; c < i - k && c < j; ++c) {
            if (a[k + c][c] != n) return false;
        }
    }
    for (int k = j - 1; k > 0; --k) {
        int n = a[0][k];
        for(int c = 1; c < j - k && c < i; ++c) {
            if (a[c][k + c] != n) return false;
        }
    }
    return true;
}*/

bool isToeplitzMatrix(vector<vector<int>>& matrix) {
    for (int i = 1; i < matrix.size(); ++i) {
        for (int j = 1; j < matrix[0].size(); ++j) {
            if (matrix[i - 1][j - 1] != matrix[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<vector<int>> test1 = {{1,2,3,4},{5,1,2,3},{9,5,1,2}};
    vector<vector<int>> test2 = {{1,2},{2,2}};
    vector<vector<int>> test3 = {{65,98,57}};
    cout << isToeplitzMatrix(test1) << " " << isToeplitzMatrix(test2) << endl;
    cout << isToeplitzMatrix(test3) << " " << endl;
    return 0;
}
