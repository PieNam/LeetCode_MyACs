//
//  main.cpp
//  788RotatedDigits
//
//  Created by 许滨楠 on 2018/9/13.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>

using namespace std;

bool isGood(int n) {
    bool flag = true;
    while (n) {
        int t = n % 10;
        if (t == 3 || t == 4 || t == 7) return false;
        else if (t != 1 && t != 0 && t != 8) flag = false;
        n /= 10;
    }
    if (flag) return false;
    return true;
}

int rotatedDigits(int N) {
    int res = 0;
    for (int i = 1; i <= N; ++i) {
        if (isGood(i)) ++res;
    }
    return res;
}

int main(int argc, const char * argv[]) {
    cout << rotatedDigits(10) << endl;
    cout << rotatedDigits(12) << endl;
    return 0;
}
