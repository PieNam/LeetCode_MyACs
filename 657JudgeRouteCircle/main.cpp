//
//  main.cpp
//  657JudgeRouteCircle
//
//  Created by 许滨楠 on 2018/8/1.
//  Copyright © 2018年 Pie. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

//First AC:

/*bool judgeCircle(string moves) {
    int i = 0;
    int Rcount = 0;
    int Lcount = 0;
    int Ucount = 0;
    int Dcount = 0;
    while (moves[i]) {
        switch(moves[i]) {
            case 'R': Rcount++;
                break;
            case 'L': Lcount++;
                break;
            case 'U': Ucount++;
                break;
            case 'D': Dcount++;
                break;
            default:
                break;
        }
        i++;
    }
    if (Rcount == Lcount && Ucount == Dcount) return true;
    else return false;
}*/

//Better (in fact the same):
//(At least we learn auto)

bool judgeCircle(string moves) {
    int s = 0;
    for (auto m : moves) {
        switch(m) {
            case 'R': s++;
                break;
            case 'L': s--;
                break;
            case 'U': s++;
                break;
            case 'D': s--;
                break;
            default:
                break;
        }
    }
    return s == 0;
}

int main() {
    cout << judgeCircle("UD") << endl;
    cout << judgeCircle("LL") << endl;
    return 0;
}
