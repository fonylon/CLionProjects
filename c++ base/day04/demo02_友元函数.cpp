//
// Created by 风林 on 2017/9/20.
//
#include <iostream>

using namespace std;

class TestFriend {
private:
    int a;
public:
    TestFriend(int a) : a(a) {
        this->a = a;
    }

    friend void changeA(TestFriend &testFriend, int a);

    void print() {
        cout << this->a << endl;
    }
};

void changeA(TestFriend &testFriend, int a) {
    testFriend.a = a;
}

int main0402() {
    TestFriend testFriend(4);
    testFriend.print();
    changeA(testFriend, 5);
    testFriend.print();
    return 0;
}
