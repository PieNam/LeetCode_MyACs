//
//  main.cpp
//  821ShortestDistanceToACharater
//
//  Created by 许滨楠 on 2018/9/1.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> shortestToChar(string S, char C) {
    vector<int> res;
    for (int i = 0; i < S.size(); ++i){
        int left = 0;
        int right = 0;
        if (S[i] == C) {
            res.push_back(0);
            continue;
        }
        else {
            while (i - left >= 0) {
                if (S[i - left] == C) break;
                else if (i - left == 0) left = 10000;
                else ++left;
            }
            while (i + right < S.size()) {
                if (S[i + right] == C) break;
                else if (i + right == S.size() - 1) right = 10000;
                else ++right;
            }
            res.push_back(left < right ? left : right);
        }
    }
    return res;
}

int main() {
    vector<int> test = shortestToChar("infactilovelijiestill", 'i');
    for (auto i = test.begin(); i != test.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}
