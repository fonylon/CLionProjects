//
// Created by 风林 on 2017/9/30.
//

#include <iostream>

using namespace std;

//定义泛型
template<typename T>
void swap1(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
void print(T a, T b) {
    cout << a << endl;
    cout << b << endl;
}

int main0901() {
    int a = 10;
    int b = 20;
    swap1<int>(a, b);
    print<int>(a, b);
    char x = 'a';
    char y = 'b';
    swap1(x, y);
    print(x, y);
    return 0;
}