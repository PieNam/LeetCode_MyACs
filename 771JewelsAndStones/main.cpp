//
//  main.cpp
//  771JewelsAndStones
//
//  Created by 许滨楠 on 2018/7/30.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int numJewelsInStones(string J, string S) {
    int res = 0;
    int i = 0;
    while (J[i]){
        for (int j = 0; j < S.size(); j++) {
            if (S[j] == J[i]) res++;
        }
        i++;
    }
    return res;
}

int main() {
    cout << numJewelsInStones("aA", "aAAbbbb") << endl;
    cout << numJewelsInStones("z", "ZZ") << endl;
    return 0;
}
