//
// Created by 风林 on 2017/10/9.
//
#include <iostream>

using namespace std;

int divide(int i, int j) {
    if (j == 0) {
        throw i;
    }
    return i / j;
}

int main1002() {
    try {
        int i = divide(4, 0);
        cout << i << endl;
    } catch (int e) {
        cout << e << endl;
    } catch (...) {
        cout << "ERROR" << endl;
    }
    return 0;
}
