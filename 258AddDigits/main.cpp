//
//  main.cpp
//  258AddDigits
//
//  Created by 许滨楠 on 2018/9/10.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>

using namespace std;

int addDigits(int num) {
    while (num / 10) {
        int t = 0;
        while (num) {
            t += num % 10;
            num /= 10;
        }
        num = t;
    }
    return num;
}

int main(int argc, const char * argv[]) {
    cout << addDigits(38) << endl;
    cout << addDigits(119) << endl;
    return 0;
}
