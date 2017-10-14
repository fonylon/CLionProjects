//
// Created by 风林 on 2017/10/1.
//

#include <iostream>

using namespace std;

int main0904() {

    int *array = new int[10];
    for (int i = 0; i < 10; i++) {
        array[i] = i + 1;
    }
    for (int j = 0; j < 10; ++j) {
        cout << *(array+j) << " ";
    }
    cout << endl;

    int array1[] = {0};
    return 0;
}