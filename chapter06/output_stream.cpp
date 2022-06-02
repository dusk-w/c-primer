//
// Created by 10200 on 2022/6/2.
//

#include "iostream"
#include "fstream"

using namespace std;

void output_stream() {
    ofstream outFile;
    outFile.open("test.txt");
    char txt[50];
    cin.getline(txt, 50);

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << txt << endl;

    outFile << fixed;
    outFile.precision(2);
    outFile << "Make and model: " << txt << endl;
    outFile.close();
}

