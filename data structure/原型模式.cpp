//
// Created by 风林 on 2017/11/1.
//
#include <iostream>

using namespace std;

template<typename T>
class Cloneable {
    virtual T *clone() = 0;
};

class Prototype : public Cloneable<Prototype> {
public:
    Prototype() {
        this->name = "";
        this->age = 0;
    }

    Prototype(const string &name, int age) : name(name), age(age) {}

    virtual Prototype *clone() {
        Prototype *prototype = new Prototype;
        *prototype = *this;
        return prototype;
    }

    void print() {
        cout << "name = " << this->name << " ,age = " << this->age << endl;
    }

private:
    string name;
    int age;
};

int main原型() {
    Prototype *p = new Prototype("aaa", 18);
    Prototype *temp = p->clone();
    temp->print();

    return 0;
}
