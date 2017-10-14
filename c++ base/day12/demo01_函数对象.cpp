//
// Created by 风林 on 2017/10/12.
//
#include <iostream>

using namespace std;

template<typename T>
//重载函数调用符的类
class Print {
public:
    void operator()(T &t) {
        cout << t << endl;
    }
};

int main1201() {
    Print<int> p;
    int a = 10;
    p(a);
    return 0;
}
