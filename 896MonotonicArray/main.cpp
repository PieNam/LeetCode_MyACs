//
//  main.cpp
//  896MonotonicArray
//
//  Created by 许滨楠 on 2018/9/3.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

bool isMonotonic(vector<int>& A) {
    if (A.size() == 1) return true;
    int c = 0;
    if (A[0] == A[1]){
        while (A[c] == A[c + 1]){
            ++c;
            if (c == A.size() - 1) return true;
        }
        
    }
    if (A[c] > A[c + 1]) {
        for (int i = 0; i < A.size() - 1; ++i) {
            if (A[i] < A[i + 1]) return false;
        }
    }
    else if (A[c] < A[c + 1]) {
        for (int i = 0; i < A.size() - 1; ++i) {
            if (A[i] > A[i + 1]) return false;
        }
    }
    return true;
}

int main() {
    vector<int> a[8] = {{1,2,2,3},{6,5,4,4},{1,3,2},{1,2,4,5},{1,1,1},{1,1,1,2,3,4},{1,1,1,0,-1},{1,1,1,3,2}};
    for (int i = 0; i < 8; ++i){
        cout << isMonotonic(a[i]) << " ";
    }
    cout << endl;
    return 0;
}
