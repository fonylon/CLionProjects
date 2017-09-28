//
// Created by 风林 on 2017/9/17.
//

#ifndef C_BASE_PERSION_H
#define C_BASE_PERSION_H


class Person {
private:
    int age;
    char *name;
public:
    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Person::age = age;
    }

    char *getName() const {
        return name;
    }

    void setName(char *name) {
        Person::name = name;
    }
};


#endif //C_BASE_PERSION_H
