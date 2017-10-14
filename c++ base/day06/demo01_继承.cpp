//
// Created by 风林 on 2017/9/23.
//
#include <iostream>

using namespace std;

class Parent {
public:
    int a;
protected:
    int b;
private:
    int c;
};

//private继承，继承后的访问权限变成private
/*class Child : private Parent {
private:
    int a;
    int b;
    int c;
};*/

//public继承，继承后的访问权限不变
class Child : public Parent {
public:
    int a;
protected:
    int b;
private:
    int c;
};

//protected继承，继承到的public访问权限的属性变成protected，其余不变
/*class Child : protected Parent {
protected:
    int a;
    int b;
private:
    int c;
};*/

int main0601() {
    Child c1;
    Parent *p = &c1;
    Parent &parent = c1;
    return 0;
}
