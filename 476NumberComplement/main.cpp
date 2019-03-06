//
//  main.cpp
//  476NumberComplement
//
//  Created by 许滨楠 on 2018/8/15.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>

using namespace std;

/*int power(int num, int p) {
    if (p == 0) return 1;
    int res = num;
    for (int i = 1; i < p; ++i) {
        res *= num;
    }
    return res;
}
int findComplement(int num) {
    if (num == 0) return 1;
    int n = num;
    int count = 0;
    int res = 0;
    while (n) {
        if (n % 2 == 0) {
            res += power(2, count);
        }
        n /= 2;
        ++count;
    }
    return res;
}*/

/*int findComplement(int num) {
    int a = 1;
    while (num > a - 1) {
        a *= 2;
    }
    return a-1-num;
}*/

int findComplement(int num) {
    for (long i = 1; i <= num; i *= 2) {
        num ^= i;
    }
    return num;
}

int main() {
    cout << findComplement(2147483647) << endl;
    return 0;
}
