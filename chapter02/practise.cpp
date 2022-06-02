//
// Created by 10200 on 2022/5/30.
//

#include "iostream"

using namespace std;

void practise1() {
    cout << "Your name is 10200" << endl;
    cout << "Your address is xxx" << endl;
}

void practise2(int n) {
    cout << n << " = " << n*220 << endl;
}

void practise3_1() {
    cout << "Three blind mice" << endl;
}
void practise3_2() {
    cout << "See how they run" << endl;
}

void practise3() {
    practise3_1();
    practise3_1();
    practise3_2();
    practise3_2();
}

double practise4_1(double n) {
    return 1.8*n+32.0;
}

void practise4() {
    cout << "Please enter a Celsius value: ";
    double count;
    cin >> count;
    cout << count << " degrees Celsius is " << practise4_1(count) << " degrees Fahrenheit." << endl;
}

double practise5_1(double n) {
    return n*63240;
}

void practise5() {
    cout << "Enter the number of light years: ";
    double count;
    cin >> count;
    cout << count << " light years = " << practise5_1(count) << " astronomical units." << endl;
}

void practise6_1(int hours, int minutes) {
    cout << "Time: " << hours << ":" << minutes;
}

void practise6() {
    cout << "Enter the number of hours: ";
    int hours;
    cin >> hours;
    cout << "Enter the number of minutes: ";
    int minutes;
    cin >> minutes;
    practise6_1(hours, minutes);
}

void practise() {
    practise1();
    cout << "------------------------------" << endl;
    practise2(3);
    cout << "------------------------------" << endl;
    practise3();
    cout << "------------------------------" << endl;
    practise4();
    cout << "------------------------------" << endl;
    practise5();
    cout << "------------------------------" << endl;
    practise6();
}