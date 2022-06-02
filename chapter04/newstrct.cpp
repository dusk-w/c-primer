//
// Created by 10200 on 2022/6/2.
//

#include "iostream"

using namespace std;

struct temp {
    string name;
    float volume;
    double price;
};

void new_struct() {
    temp *p = new temp;
    p->name = "123";
    (*p).volume = 2.5;
    p->price = 388.88;

    cout << "name: " << p->name << " volume: " << (*p).volume << " price: " << (*p).price << endl;
}