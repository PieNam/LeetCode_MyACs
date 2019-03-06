//
//  main.cpp
//  171ExcelSheetColumnNumber
//
//  Created by 许滨楠 on 2018/9/14.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>

using namespace std;

int pow(int num, int p) {
    int res = 1;
    for (int i = 0; i < p; ++i) {
        res *= num;
    }
    return res;
}

int titleToNumber(string s) {
    int res = 0;
    int size = (int)s.size();
    for (int i = 0; i < size; ++i) {
        res += (s[i] - 'A' + 1) * pow(26, size - i - 1);
    }
    return res;
}

int main(int argc, const char * argv[]) {
    cout << titleToNumber("A") << endl;
    cout << titleToNumber("AB") << endl;
    cout << titleToNumber("ZY") << endl;
    return 0;
}
