//
//  main.cpp
//  520DetectCapital
//
//  Created by 许滨楠 on 2018/9/12.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>

using namespace std;

bool detectCapitalUse(string word) {
    int size = (int)word.size();
    int count = 0;
    int flag = false; //is it exit non-capitals
    for (int i = 0; i < size; ++i) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            ++count;
        }
        else flag = true;
        if (count > 1 && flag) return false;
    }
    if (count == size || count == 0 ||
        (count == 1 && word[0] >= 'A' && word[0] <= 'Z') ) return true;
    return false;
}

int main(int argc, const char * argv[]) {
    cout << detectCapitalUse("USA") << detectCapitalUse("FlaG") << endl;
    cout << detectCapitalUse("g") << detectCapitalUse("ffffF") << endl;
    return 0;
}
