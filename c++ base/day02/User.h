//
// Created by 风林 on 2017/9/17.
//

#ifndef C_BASE_USER_H
#define C_BASE_USER_H


class User {
private:
    int age;
    char *name;
public:
    int getAge() const;

    void setAge(int age);

    char *getName() const;

    void setName(char *name);
};


#endif //C_BASE_USER_H
