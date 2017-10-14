//
// Created by 风林 on 2017/10/9.
//

#include <iostream>

using namespace std;

void my_strcpy(const char *from, char *to) {
    if (from == NULL) {
        throw 1;
    }
    if (to == NULL) {
        throw 2;
    }
    if (*from == 'e') {
        throw 3;
    }
    while (*from != '\0') {
        *to++ = *from++;
    }
    *to = '\0';
//    int i;
//    for (i = 0; from[i] != '\0'; i++) {
//        to[i] = from[i];
//    }
//    to[i] = '\0';
}

void my_strcpy1(const char *from, char *to) {
    if (from == NULL) {
        throw "源不能为空";
    }
    if (to == NULL) {
        throw "目的不能为空";
    }
    if (*from == '.') {
        throw "源不能以特殊字符开头";
    }
    while (*from != '\0') {
        *to++ = *from++;
    }
    *to = '\0';
//    int i;
//    for (i = 0; from[i] != '\0'; i++) {
//        to[i] = from[i];
//    }
//    to[i] = '\0';
}


int main1003() {
    char *from = ".hello.";
    char to[1024];
    try {
//        my_strcpy(from, to);
        my_strcpy1(from, to);
    } catch (int e) {

    } catch (const char* e) {
        cout << e << endl;
    }

    cout << to << endl;
    return 0;
}