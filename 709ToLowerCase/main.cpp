//
//  main.cpp
//  709ToLowerCase
//
//  Created by 许滨楠 on 2018/7/31.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

string toLowerCase(string str) {
    string res;
    int i = 0;
    while (str[i]) {
        if ((str[i] >= 'A') && (str[i] <= 'Z')) {
            res += str[i] + 'a' - 'A';
        }
        else {
            res += str[i];
        }
        i++;
    }
    return res;
}

int main() {
    cout << toLowerCase("Hello") << endl;
    cout << toLowerCase("here") << endl;
    cout << toLowerCase("LOVELY") << endl;
    return 0;
}
