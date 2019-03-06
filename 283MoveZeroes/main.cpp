//
//  main.cpp
//  283MoveZeroes
//
//  Created by 许滨楠 on 2018/9/11.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int c = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != 0) {
            nums[c] = nums[i];
            ++c;
        }
    }
    for (; c < nums.size(); ++c) nums[c] = 0;
}

int main(int argc, const char * argv[]) {
    vector<int> test = {0,1,0,3,12};
    for (auto i = test.begin(); i != test.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
    moveZeroes(test);
    for (auto i = test.begin(); i != test.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}
