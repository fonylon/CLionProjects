//
// Created by 风林 on 2017/10/28.
//

#include <iostream>

using namespace std;

class Singleton {
public:
    static Singleton *getInstance() {
        return instance;
    }

    static void freeInstance() {
        if (instance != NULL) {
            delete instance;
            instance = NULL;
        }
        cout << "destroy Singleton" << endl;
    }

private:
    //构造函数私有
    Singleton() {
        cout << "init Singleton" << endl;
    }

    //私有实例对象
    static Singleton *instance;
};

//初始化静态变量
Singleton *Singleton::instance = new Singleton;

int main单利() {

    Singleton *s1 = Singleton::getInstance();
    Singleton *s2 = Singleton::getInstance();
    cout << (s1 == s2) << endl;
    Singleton::freeInstance();
    return 0;
}