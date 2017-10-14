//
// Created by 风林 on 2017/10/10.
//
#include <iostream>

using namespace std;

void iteratorString(string s) {
    for (int i = 0; i < s.length(); i++) {
        cout << s[i];
    };
    cout << endl;
    for (int i = 0; i < s.length(); i++) {
        cout << s.at(i);
    };
    cout << endl;
    for (auto wrap_iter = s.begin(); wrap_iter != s.end(); ++wrap_iter) {
        cout << *wrap_iter;
    }
    cout << endl;
}

void getString(string s) {
    const char *temp = s.c_str();
    printf("%p\n", temp);
    cout << temp << endl;
}

void copyString(string s) {
    char temp[s.length()];
    s.copy(temp, s.length(), 0);
    cout << temp << endl;
}

int main1102() {

    string s = "hello";
    copyString(s);
    return 0;
}