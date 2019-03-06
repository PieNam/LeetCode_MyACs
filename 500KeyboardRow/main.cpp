//
//  main.cpp
//  500KeyboardRow
//
//  Created by 许滨楠 on 2018/8/30.
//  Copyright © 2018年 Pie. All rights reserved.
//
#include <iostream>
#include <vector>

using namespace std;

/* well that's stupid
 if (a == 'Q' || a =='q' || a == 'W' || a == 'w' || a == 'E' || a == 'e' || a == 'R' || a == 'r'
 || a == 'T' || a == 't' || a == 'Y' || a == 'y' || a == 'U' || a == 'u' || a == 'I' ||
 a == 'i' || a == 'O' || a == 'o' || a == 'P' || a == 'p') */
int getRow(char a) {
    if (a == 'A' || a == 'a' || a == 'S' || a == 's' || a == 'D' || a == 'd' || a == 'F' || a == 'f'
        || a == 'G' || a == 'g' || a == 'H' || a == 'h' || a == 'J' || a == 'j' || a == 'K' ||
        a == 'k' || a == 'L' || a == 'l' ) return 2;
    else if (a == 'Z' || a == 'z' || a == 'X' || a == 'x' || a == 'C' || a == 'c' || a == 'V' ||
             a == 'v' || a == 'B' || a == 'b' || a == 'N' || a == 'n' || a == 'M' || a == 'm' )
        return 3;
    else return 1;
}

vector<string> findWords(vector<string>& words) {
    vector<string> res;
    for (auto i = words.begin(); i != words.end(); ++i) {
        int flag = getRow((*i)[0]);
        for (int j = 1; j < (int)i->size(); ++j) {
            if (flag != getRow((*i)[j])) {
                flag = 0;
                break;
            }
        }
        if (flag) res.push_back(*i);
    }
    return res;
}

int main() {
    vector<string> test = {"Hello", "Alaska", "Dad", "Peace"};
    vector<string> res = findWords(test);
    for (auto i = res.begin(); i != res.end(); ++i) {
        cout << *i << endl;
    }
    return 0;
}
