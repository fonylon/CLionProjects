//
// Created by 风林 on 2017/9/19.
//

#include <iostream>

using namespace std;

class Demo {
private:
    int len;
    char *str;
public:
    int getLen() const {
        return len;
    }

    void setLen(int len) {
        Demo::len = len;
    }

    char *getStr() const {
        return str;
    }

    void setStr(char *str) {
        Demo::str = str;
    }

public:
    Demo(const char *str) {
        this->len = strlen(str);
        this->str = static_cast<char *>(malloc(len + 1));
        strcpy(this->str, str);
        cout << "初始化对象:" << this->str << endl;
    }

    ~Demo() {
        cout << "开始析构对象:" << &(this->str) << endl;
        this->len = 0;
        if (this->str != NULL) {
            free(this->str);
        }
        cout << "析构对象结束:" << this->str << endl;
    }

    Demo(const Demo &demo) {
        this->len = demo.len;
        this->str = static_cast<char *>(malloc(this->len + 1));
        strcpy(this->str, demo.str);
    }
};

class Test {
private:
    Demo demo;
    int a;
public:
    Test(const char *str):demo(str){

    }

    const Demo &getDemo() const {
        return demo;
    }

    void setDemo(const Demo &demo) {
        Test::demo = demo;
    }

    int getA() const {
        return a;
    }

    void setA(int a) {
        Test::a = a;
    }
};

int main0304() {
//    Demo demo("abc");
//    Demo demo1 = demo;
    Test test("abcd");
    cout << "析构对象结束:" << test.getDemo().getStr() << endl;
    return 0;
}