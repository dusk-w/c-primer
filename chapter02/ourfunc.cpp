//
// Created by 10200 on 2022/5/30.
//

#include "iostream"

using namespace std;

void simon(int);

int main4() {
    simon(3);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
}

void simon(int n) {
    cout << "Simon says touch your toes " << n << " times." << endl;
}