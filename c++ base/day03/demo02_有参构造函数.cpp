//
// Created by 风林 on 2017/9/18.
//

#include <iostream>

using namespace std;

class Person {
private:
    int a;
    int b;
public:
    Person() {
        this->a = 10;
        this->b = 20;
        cout << "无参数构造函数" << endl;
    }

    Person(int a, int b) {
        this->a = a;
        this->b = b;
        cout << "有两个参数构造函数" << endl;
    }

    Person(int a) {
        this->a = a;
        this->b = 0;
        cout << "有一个参数构造函数" << endl;
    }

    Person(const Person &person) {
        cout << "赋值构造函数" << endl;
    }

    void print() {
        cout << this->a << endl;
        cout << this->b << endl;
    }

protected:
};

int main0302() {
    Person person;
    person.print();
    Person person1(1, 2);
    person1.print();
    Person person2(5);
    person2.print();
    Person person3 = 6;
    person3.print();
    Person person4 = (6, 8);
    person4.print();
    Person person5 = Person(9);
    person5.print();
    Person person6 = Person(10, 20);
    person6.print();
    return 0;
}