//
//  main.cpp
//  804UniqueMorseCodeWords
//
//  Created by 许滨楠 on 2018/7/31.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int uniqueMorseRepresentations(vector<string>& words) {
    string morse[26] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
    int res = 0;
    vector<string> count;
    vector<string>::iterator i, j;
    for (i = words.begin(); i != words.end(); i++) {
        string m;
        int index = 0;
        while ((*i)[index]) {
            m += morse[(*i)[index]-'a'];
            index++;
        }
        bool isIn = false;
        if (!count.empty()) {
            for (j = count.begin(); j != count.end(); j++) {
                if (m == *j) isIn = true;
            }
        }
        if (!isIn) {
            res++;
            count.insert(count.end(), m);
        }
    }
    return res;
}

int main() {
    vector<string> words = { "gin", "zen", "gig", "msg" };
    cout << uniqueMorseRepresentations(words) << endl;
    return 0;
}
