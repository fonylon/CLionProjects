//
// Created by 风林 on 2017/8/23.
//
#include <iostream>

using namespace std;

void overload(int a, int b);

void overload(int a);

int mainOverload() {
    overload(3,8);
}

void overload(int a) {
    cout << "a = " << a << endl;
}

void overload(int a, int b = 2) {
    cout << "a = " << a << ",b = " << b << endl;
}