//
// Created by 10200 on 2022/6/2.
//

#include "iostream"

using namespace std;

void use_new() {
    int *pn = new int;
    *pn = 10086;
    cout << "pn=" << pn <<endl;
    cout << "*pn=" << *pn <<endl;

    /**
     * delete使用原则
     * 1.不要使用delete来释放不是new分配的内存
     * 2.不要使用delete来释放同一个内存块两次
     * 3.如果使用new[]为数组分配内存，则应使用delete[]来释放
     * 4.如果使用new[]为一个实体分配内存，则应使用delete(没有方括号)来释放
     * 5.对空指针应用delete是安全的
     */
    delete pn;
    // warning delete将释放pn指向的内存，而pn本身并不会被删除
    cout << "pn=" << pn <<endl;
    cout << "*pn=" << *pn <<endl;

    int *ps = new int[10];
    delete [] ps;
}