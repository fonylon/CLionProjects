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

    int getA() const {
        return a;
    }

    void setA(int a) {
        Person::a = a;
    }

    int getB() const {
        return b;
    }

    void setB(int b) {
        Person::b = b;
    }

protected:
};

void print(Person person) {
    cout << person.getA() << endl;
    cout << person.getB() << endl;
}

Person getPerson() {
    Person person(6, 5);
    return person;
}

void test() {
    Person person = getPerson();
    person.print();
}

int main0303() {
//    Person person1(6, 5);
//    person1.print();
//    Person person2 = person1;
//    person2.print();
//    Person person3(person1);
//    person3.print();
//    person3 = person1;
//    person3.print();
//    print(person3);
    test();
    return 0;
}