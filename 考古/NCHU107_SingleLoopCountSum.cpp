#include <iostream>
using namespace std;

// NCHU107
// 單一迴圈計算5*5矩陣對角線的元素之和
// 中間多加一次

// [0][0], [1][1], [2][2], [3][3], [4][4]
// [4][0], [3][1], [2][2], [1][4], [0][4]

//for (i = 0; i < 5; i++)
//=> [i][i] 和 [4-i][i]

int main()
{
    int sum = 0;
    int table[5][5];
    for (int i = 0; i < 5; i++)
        sum = sum + table[i][i] + table[4 - i][i];
    cout << sum << endl;
}