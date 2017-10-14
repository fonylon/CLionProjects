//
// Created by 风林 on 2017/9/29.
//

#include <iostream>

using namespace std;

typedef int (Add)(int a, int b);

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main0802() {
    Add *pAdd;
    pAdd = &add;
    cout << pAdd(3, 4) << endl;
    pAdd = add;
    cout << pAdd(5, 4) << endl;
    pAdd = multiply;
    cout << pAdd(5, 4) << endl;
    return 0;
}