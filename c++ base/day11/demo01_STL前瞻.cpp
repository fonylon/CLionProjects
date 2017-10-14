//
// Created by 风林 on 2017/10/10.
//

#include <iostream>
#include <vector>

using namespace std;

class Person {
private:
    int age;
    string name;
public:

    Person(int age, const string &name) : age(age), name(name) {}

    virtual ~Person() {

    }

    friend ostream &operator<<(ostream &os, const Person &person) {
        os << "age: " << person.age << " name: " << person.name;
        return os;
    }

public:
    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Person::age = age;
    }


};

void testVectorInt() {
    vector<int> vector1;
    vector1.push_back(1);
    vector1.push_back(2);
    vector1.push_back(3);
    vector1.push_back(4);

    for (vector<int, std::__1::allocator<int>>::iterator it = vector1.begin(); it != vector1.end(); it++) {
        cout << *it << endl;
    }
}

void testVectorObj() {
    vector<Person> vector1;
    Person p1(21, "a");
    vector1.push_back(p1);
    vector1.push_back(Person(22, "b"));
    vector1.push_back(Person(23, "c"));
    vector1.push_back(Person(24, "d"));
    for (vector<Person, std::__1::allocator<Person>>::iterator it = vector1.begin(); it != vector1.end(); it++) {
        cout << *it << endl;
    }
}


int main1101() {
    testVectorObj();
    return 0;
}