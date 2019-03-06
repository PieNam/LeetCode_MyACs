//
//  main.cpp
//  485MaxConsecutiveOnes
//
//  Created by 许滨楠 on 2018/9/9.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0;
    int res = 0;
    for (auto i = nums.begin(); i != nums.end(); ++i) {
        if (*i) {
            ++count;
        }
        else {
            if (count) {
                if (count > res) res = count;
                count = 0;
            }
        }
        if (i == nums.end() - 1 && count > res) res = count;
    }
    return res;
}

int main() {
    vector<int> test = {1,1,0,1,1,1};
    cout << findMaxConsecutiveOnes(test) << endl;
    return 0;
}
