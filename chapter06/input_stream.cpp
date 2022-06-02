//
// Created by 10200 on 2022/6/2.
//

#include "iostream"
#include "fstream"

using namespace std;

void input_stream() {
    ifstream inFile;
    inFile.open("test.txt");

    string temp;
//    if(inFile.is_open()) {
//        while (inFile.good()) {
//            inFile >> temp;
//            cout << temp << " ";
//        }
//    }

    while (inFile >> temp)
        cout << temp << " ";
    inFile.close();
}