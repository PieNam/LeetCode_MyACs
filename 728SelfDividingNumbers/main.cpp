//
//  main.cpp
//  728SelfDividingNumbers
//
//  Created by 许滨楠 on 2018/8/2.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> selfDividingNumbers(int left, int right) {
    vector<int> res;
    for (int i = left; i <= right; ++i) {
        bool flag = true;
        int c = i;
        while (c){
            if (c % 10 == 0 || i % (c % 10)) {
                flag = false;
                break;
            }
            c /= 10;
        }
        if (flag) res.push_back(i);
    }
    return res;
}

int main(){
    vector<int> res = selfDividingNumbers(1, 22);
    for (auto i = res.begin(); i != res.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}
