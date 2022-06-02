//
// Created by 10200 on 2022/6/2.
//

#include "iostream"

using namespace std;

void array_new() {
    double *p = new double [3];
    p[0] = 0.2;
    p[1] = 0.5;
    p[2] = 0.8;

    cout << "p[1] is " << p[1] << ".\n";
    p++;
    cout << "now p[0] is " << p[0] << ".\n";
    cout << "p[1] is " << p[1] << ".\n";
    p--;
    delete [] p;
}