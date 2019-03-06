//
//  main.cpp
//  693BinaryNumberWithAlternatingBits
//
//  Created by 许滨楠 on 2018/9/7.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>

using namespace std;

bool hasAlternatingBits(int n) {
    if (!n) return true;
    int f = n % 2;
    n /= 2;
    if (!n) return true;
    while (n) {
        int c = n % 2;
        if (c == f) return false;
        f = c;
        n /= 2;
    }
    return true;
}

int main(int argc, const char * argv[]) {
    cout << hasAlternatingBits(5) << hasAlternatingBits(7)
    << hasAlternatingBits(11) << hasAlternatingBits(10) << endl;
    cout << hasAlternatingBits(0) << hasAlternatingBits(1)
    << hasAlternatingBits(2) << hasAlternatingBits(3) << endl;
    return 0;
}
