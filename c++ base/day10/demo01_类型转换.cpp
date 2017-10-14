//
// Created by 风林 on 2017/10/9.
//

#include <iostream>

using namespace std;

void printBuf(const char *buf) {
    char *temp = const_cast<char *>(buf);
    temp[0] = 's';
    cout << buf << endl;
}

void printBuf1(char *buf) {
    buf[0] = 's';
    cout << buf << endl;
}

int main1001() {
    char buf[] = "hello";
    printBuf1(buf);
    char *buf1 = "hello";
    printBuf1(buf1);
    return 0;
}