//
// Created by 风林 on 2017/9/17.
//

#include "User.h"

int User::getAge() const {
    return age;
}

void User::setAge(int age) {
    User::age = age;
}

char *User::getName() const {
    return name;
}

void User::setName(char *name) {
    User::name = name;
}
