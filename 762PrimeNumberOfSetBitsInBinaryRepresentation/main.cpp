//
//  main.cpp
//  762PrimeNumberOfSetBitsInBinaryRepresentation
//
//  Created by 许滨楠 on 2018/9/8.
//  Copyright © 2018年 Pie. All rights reserved.
//

//1 4 6 8 9 10 12 14 15 16 18 20
//2 3 5 7 11 13 17 19

#include <iostream>

using namespace std;

int countPrimeSetBits(int L, int R) {
    int res = 0;
    for (int i = L; i <= R; ++i) {
        int n = i;
        int num = 0;
        while (n) {
            if (n % 2) ++num;
            n /= 2;
        }
        if (num == 2 || num == 3 || (num > 1 &&num % 2 && num % 3)) {
            ++res;
        }
    }
    return res;
}

int main() {
    cout << countPrimeSetBits(6, 10) << " " << countPrimeSetBits(10, 15) << endl;
    return 0;
}
