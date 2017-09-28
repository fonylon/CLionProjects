//
// Created by 风林 on 2017/9/18.
//

#include <iostream>

using namespace std;

class User {
private:
public:
    User() {
        cout << "user init" << endl;
    }

    ~User() {
        cout << "user destroy" << endl;
    }
};

int main0301() {
    User user;
    cout << "user running" << endl;
    return 0;
}