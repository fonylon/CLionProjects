//
// Created by 风林 on 2017/9/20.
//

#include <iostream>

class Target {
private:
    int a;

    friend class Source;
};

class Source {
private:
    Target target;
public:
    void setTarget(int a) {
        target.a = a;
    }
};

using namespace std;

int main0403() {

    return 0;
}