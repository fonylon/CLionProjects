//
// Created by 风林 on 2017/9/20.
//

#include <iostream>

using namespace std;

class Demo {
private:
    int a;
public:
    Demo(int a) {
        this->a = a;
    }

    Demo add(Demo &demo) {
        this->a = this->a + demo.a;
        return *this;
    }

    void print() {
        cout << "a = " << this->a << endl;
    }
};

int main0401() {
    Demo demo1(5);
    Demo demo2(6);
    demo1.add(demo2);
    demo1.print();
    return 0;
}
