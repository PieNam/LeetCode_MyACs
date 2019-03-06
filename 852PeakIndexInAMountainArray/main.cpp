//
//  main.cpp
//  852PeakIndexInAMountainArray
//
//  Created by 许滨楠 on 2018/8/2.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

/*int peakIndexInMountainArray(vector<int>& A) {
    int index = 0;
    for (auto i = A.begin(); i != A.end(); i++) {
        if (i == A.begin() && *i > *(i+1)) return index;
        else if (*i > *(i-1) && *i > *(i+1)) return index;
        index++;
    }
    return index;
}*/

int peakIndexInMountainArray(vector<int>& A) {
    int i = 1;
    for (; i < A.size(); ++i) {
        if (A[i+1] < A[i]) return i;
    }
    return i;
}

int main(){
    vector<int> a = {0, 1, 0};
    vector<int> b = {0, 2, 1, 0};
    cout << peakIndexInMountainArray(a) << endl;
    cout << peakIndexInMountainArray(b) << endl;
    return 0;
}
