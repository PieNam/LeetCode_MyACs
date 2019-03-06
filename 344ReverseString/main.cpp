//
//  main.cpp
//  344ReverseString
//
//  Created by 许滨楠 on 2018/8/25.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

/*string reverseString(string s) {
    string res;
    for (int i = (int)s.size() - 1; i >= 0; --i) {
        res += s[i];
    }
    return res;
}*/

//beats 100%
string reverseString(string s) {
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    cout << reverseString("hello") << endl;
    cout << reverseString("A man, a plan, a canal: Panama") << endl;
    return 0;
}
