//
// Created by 10200 on 2022/5/30.
//

#include "iostream"

using namespace std;

void carrot() {
    int carrots;

    carrots = 25;
    cout<<"I have";
    cout<<carrots;
    cout<<" carrots.";
    cout<<endl;
    carrots = carrots-1;
    cout<<"Crunch, crunch. Now I have" << carrots << " carrots." << endl;

    cout<<"How many carrots do you have?" << endl;
    cin>>carrots;
    cout<<"Here are two more. ";
    carrots += 2;
    cout<<"Now you have "<<carrots <<" carrots."<<endl;
}
