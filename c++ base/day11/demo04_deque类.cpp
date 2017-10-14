//
// Created by 风林 on 2017/10/11.
//
#include <iostream>
#include <deque>

using namespace std;

int main1104() {
    deque<string> deque1;
    deque1.push_back("你");
    deque1.push_back("好");
    deque1.push_front("白");
    deque1.push_front("白");
    for (auto dequeIterator = deque1.begin(); dequeIterator != deque1.end(); ++dequeIterator) {
        cout << *dequeIterator;
    }
    cout << endl;
    deque1.pop_back();
    deque1.pop_front();
    for (auto dequeIterator = deque1.begin(); dequeIterator != deque1.end(); ++dequeIterator) {
        cout << *dequeIterator;
    }
    return 0;
}
