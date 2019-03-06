//
//  main.cpp
//  860LemonadeChange
//
//  Created by 许滨楠 on 2018/9/16.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

bool lemonadeChange(vector<int>& bills) {
    int count5 = 0;
    int count10 = 0;
    for (auto i = bills.begin(); i != bills.end(); ++i) {
        if (*i == 5) ++count5;
        else if (*i == 10) {
            --count5;
            ++count10;
        }
        else {
            if (count10 > 0) --count10;
            else count5 -= 2;
            --count5;
        }
        if (count5 < 0) return false;
    }
    return true;
}

int main(int argc, const char * argv[]) {
    vector<int> test[4] = {{5,5,5,10,20}, {5,5,10}, {10,10}, {5,5,10,10,20}};
    for (int i = 0; i < 4; ++i) {
        cout << lemonadeChange(test[i]);
    }
    cout << endl;
    return 0;
}
