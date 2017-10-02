//
// Created by 风林 on 2017/9/30.
//

#include <iostream>

using namespace std;

template<typename T>
class Temp {
private:
public:
    Temp(T t) : t(t) {}

private:
    T t;
public:
    virtual void print() {
        cout << "t = " << t << endl;
    }

    T getT() const {
        return t;
    }

    void setT(T t) {
        Temp::t = t;
    }
};

template<typename T>
class ChildTemp : public Temp<T> {
public:
    ChildTemp(T t, T ct) : Temp<T>(t), ct(ct) {}

public:
    virtual void print() {
        cout << "t = " << Temp<T>::getT() << ", ct = " << ct << endl;
    }

private:
    T ct;
};

template<typename T>
void printTemp(Temp<T> &temp) {
    temp.print();
}

int main0902() {
    Temp<int> temp(5);
    printTemp<int>(temp);
    Temp<char> temp1('c');
    printTemp<char>(temp1);
    ChildTemp<double> temp2(5.5, 8);
    printTemp(temp2);
    return 0;
}