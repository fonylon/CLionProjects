//
// Created by 风林 on 2017/10/1.
//

#include <iostream>

using namespace std;

template<typename T>
class Template {
public:
    static int count;
private:
    T t;
public:
    T getT() const {
        return t;
    }

    bool operator<(const Template &rhs) const;

    bool operator>(const Template &rhs) const;

    bool operator<=(const Template &rhs) const;

    bool operator>=(const Template &rhs) const;

    void setT(T t) {
        Template::t = t;
    }

    bool operator==(const Template &rhs) const;

    bool operator!=(const Template &rhs) const;
};

template<typename T>
int Template<T>::count = 0;

template<typename T>
bool Template<T>::operator<(const Template &rhs) const {
    return t < rhs.t;
}

template<typename T>
bool Template<T>::operator==(const Template &rhs) const {
    return t == rhs.t;
}

template<typename T>
bool Template<T>::operator!=(const Template &rhs) const {
    return !(rhs == *this);
}

template<typename T>
bool Template<T>::operator>(const Template &rhs) const {
    return rhs < *this;
}

template<typename T>
bool Template<T>::operator<=(const Template &rhs) const {
    return !(rhs < *this);
}

template<typename T>
bool Template<T>::operator>=(const Template &rhs) const {
    return !(*this < rhs);
}

int main0903() {
    Template<int> t1, t2;
    Template<char> t3, t4;
    t1.count++;
    cout << t1.count << endl;
    t2.count++;
    cout << t2.count << endl;
    t3.count++;
    cout << t3.count << endl;
    t4.count++;
    cout << t4.count << endl;
    return 0;
}