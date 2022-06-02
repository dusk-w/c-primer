//
// Created by 10200 on 2022/6/2.
//

#include "iostream"

using namespace std;

void pointer() {
    int i = 6;
    int *p_i;
    p_i = & i;
    cout << "values: i=" << i << " p_i=" << p_i << endl;
    cout << "values: &i=" << &i << " p_i=" << p_i << endl;
    cout << "values: i=" << i << " *p_i=" << *p_i << endl;

    // p是int类型指针，q是int变量
    int *p, q;
    p = &i;
    q = i;
    cout << p << " " <<q;
}