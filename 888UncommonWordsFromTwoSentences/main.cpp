//
//  main.cpp
//  888UncommonWordsFromTwoSentences
//
//  Created by 许滨楠 on 2018/8/13.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<string> uncommonFromSentences(string A, string B) {
    vector<string> res;
    map<string, int> t;
    int c = 0;
    string s = A + " " + B;
    while (c < s.size()) {
        string cs;
        while (s[c] != ' ' && s[c] != '\0') {
            cs += s[c];
            ++c;
        }
        if (t[cs] >= 1) {
            ++t[cs];
        }
        else {
            t[cs] = 1;
        }
        ++c;
    }
    for (auto i = t.begin(); i != t.end(); ++i) {
        if (i->second == 1) res.push_back(i->first);
    }
    return res;
}

int main() {
    vector<string> res = uncommonFromSentences("this apple is sweet", "this apple is sour");
    for (auto i = res.begin(); i != res.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
    res = uncommonFromSentences("apple apple", "banana");
    for (auto i = res.begin(); i != res.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
    res = uncommonFromSentences("d b zu d t", "udb zu ap");
    for (auto i = res.begin(); i != res.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}
