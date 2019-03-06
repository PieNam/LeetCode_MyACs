//
//  main.cpp
//  461HammingDistance
//
//  Created by 许滨楠 on 2018/7/31.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

string toBinary(int a) {
    string res;
    while (a) {
        if (a % 2) {
            res += '1';
        }
        else {
            res += '0';
        }
        a = a / 2;
    }
    return res;
}

int hammingDistance(int x, int y) {
    int res = 0;
    string a = toBinary(x);
    string b = toBinary(y);
    unsigned int length;
    bool flag = a.size() > b.size() ? true : false;
    if (flag) length = (unsigned int)b.size();
    else length = (unsigned int)a.size();
    for (int i = 0; i < length; i++) {
        if (a[i] != b[i]) res++;
    }
    if (flag) {
        for (int i = length; i < a.size(); i++) {
            if (a[i] == '1') res++;
        }
    }
    else {
        for (int i = length; i < b.size(); i++) {
            if (b[i] == '1') res++;
        }
    }
    return res;
}

int main() {
    cout << hammingDistance(1, 4) << endl;
    return 0;
}
