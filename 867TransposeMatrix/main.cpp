//
//  main.cpp
//  867TransposeMatrix
//
//  Created by 许滨楠 on 2018/8/9.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& A) {
    vector<vector<int>> res;
    for (int i = 0; i < A[0].size(); ++i) {
        vector<int> ress;
        for (int j = 0; j < A.size(); ++j) {
            ress.push_back(A[j][i]);
        }
        res.push_back(ress);
    }
    return res;
}

int main() {
    vector<vector<int>> test1 = {{1,2,3},{4,5,6},{7,8,9}}, test2 = {{1,2,3},{4,5,6}};
    vector<vector<int>> res1 = transpose(test1), res2 = transpose(test2);
    for (auto i = res1.begin(); i != res1.end(); ++i) {
        for (auto j = i->begin(); j != i->end(); ++j) {
            cout << *j << " ";
        }
        cout << endl;
    }
    for (auto i = res2.begin(); i != res2.end(); ++i) {
        for (auto j = i->begin(); j != i->end(); ++j) {
            cout << *j << " ";
        }
        cout << endl;
    }
    return 0;
}
