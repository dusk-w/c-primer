//
// Created by 10200 on 2022/6/1.
//

#include "iostream"
#include "climits"

/**
 * 这里的#define和#include一样，也是一个预处理器编译指令
 * 指在程序中查找INT_MAX，并将所有的INT_MAX都替换成指定数据
 */
//#define INT_MAX 32767

void limits() {
    using namespace std;

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;

    cout << "int is " << sizeof (int) << "bytes." << endl;
//    cout << "int is " << sizeof n_int << "bytes." << endl;    对类型名使用sizeof时将名称放在括号中，对变量名使用sizeof时括号可以省略
    cout << "short is " << sizeof (short) << "bytes," << endl;
    cout << "long is " << sizeof (long) << "bytes," << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
}