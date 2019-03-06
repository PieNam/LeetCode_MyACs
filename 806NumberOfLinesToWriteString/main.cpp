//
//  main.cpp
//  806NumberOfLinesToWriteString
//
//  Created by 许滨楠 on 2018/8/15.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> numberOfLines(vector<int>& widths, string S) {
    vector<int> res;
    int c = 0;
    int wid = 0;
    int line = 1;
    while (S[c]){
        if (wid + widths[S[c] - 'a'] > 100) {
            ++line;
            wid = widths[S[c] - 'a'];
        }
        else {
            wid += widths[S[c] - 'a'];
        }
        ++c;
    }
    res.push_back(line);
    res.push_back(wid);
    return res;
}

int main() {
    vector<int> w = { 10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10 };
    vector<int> ww = { 4,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10 };
    string s = "abcdefghijklmnopqrstuvwxyz";
    string ss = "bbbcccdddaaa";
    vector<int> r = numberOfLines(w, s);
    vector<int> rr = numberOfLines(ww, ss);
    cout << r[0] << " " << r[1] << endl;
    cout << rr[0] << " " << rr[1] << endl;
    return 0;
}
