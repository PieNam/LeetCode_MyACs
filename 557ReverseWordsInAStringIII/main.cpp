//
//  main.cpp
//  557ReverseWordsInAStringIII
//
//  Created by 许滨楠 on 2018/8/15.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>

using namespace std;

string reverseWords(string s) {
    string res;
    int left = 0;
    int right = (int)s.find(' ');
    while (s.find(' ') != string::npos) {
        for (int i = right - 1; i >= left; --i) {
            res += s[i];
        }
        res += ' ';
        s = s.substr(right + 1);
        right = (int)s.find(' ');
    }
    for (int i = (int)s.size() - 1; i >= 0; --i) {
        res += s[i];
    }
    return res;
}

int main() {
    cout << reverseWords("Let's take LeetCode contest") << endl;
    return 0;
}
