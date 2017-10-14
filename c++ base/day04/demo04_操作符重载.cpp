//
// Created by 风林 on 2017/9/21.
//

#include <iostream>

using namespace std;

class Complex {
private:
    int a;
    int b;
public:
    Complex(int a, int b) {
        this->a = a;
        this->b = b;
    }

    //前置++
    Complex operator++() {
        this->a++;
        this->b++;
        return *this;
    }

    //后置++
    Complex operator++(int) {
        Complex temp = *this;
        this->a++;
        this->b++;
        return temp;
    }

    //二元操作符
    Complex operator+(Complex &complex) {
        Complex temp(this->a + complex.a, this->b + complex.b);
        return temp;
    }

    //()操作符重载
    int operator()(int a,int b){
        return a+b;
    }

    void print() {
        cout << (this->a) << " ; " << (this->b) << endl;
    }
};

int main0404() {
    Complex complex(1, 1);
    Complex complex1(1, 1);
    complex = (complex1++);
    complex.print();
    complex1.print();
    cout << complex(3,4) << endl;
    return 0;
}