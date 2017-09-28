//
// Created by 风林 on 2017/9/17.
//
#include <iostream>
#include "Person.h"

using namespace std;

void printPerson1(Person person) {
    cout << "age1 = " << person.getAge() << endl;
    cout << "name1 = " << person.getName() << endl;
}
void printPerson2(Person *person) {
    cout << "age2 = " << person->getAge() << endl;
    cout << "name2 = " << person->getName() << endl;
}
void printPerson3(Person &person) {
    cout << "age3 = " << person.getAge() << endl;
    cout << "name3 = " << person.getName() << endl;
}

int main0202() {
    Person person;
    person.setAge(50);
    char name[] = "abc";
    person.setName(name);
    printPerson1(person);
    printPerson2(&person);
    printPerson3(person);
    return 0;
}
