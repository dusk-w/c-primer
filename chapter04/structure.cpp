//
// Created by 10200 on 2022/6/2.
//

#include "iostream"

using namespace std;

struct inflatable {
    string name;
    float volume;
    double price;
    union {
        int int_val;
        long long_val;
    };
};

union one4all {
    int int_val;
    long long_val;
    double double_val;
};

enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};

enum {zero = 1, one = 2, two = 3, three = 4};

void structure() {
    inflatable hat = {"world", 1.88, 29.9};
    cout << hat.name << hat.price << hat.volume << endl;

    one4all pail;
    pail.int_val = 15;
    cout << pail.int_val << endl;
    cout << pail.double_val << endl;
    pail.double_val = 15.0;
    cout << pail.double_val << endl;
    cout << pail.int_val << endl;

    hat.int_val = 3;
    cout << hat.int_val << endl;
    cout << hat.long_val << endl;

    spectrum s = spectrum(5);
    cout << s << endl;

    cout << zero << endl;
}