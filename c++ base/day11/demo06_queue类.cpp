//
// Created by 风林 on 2017/10/11.
//
#include <iostream>
#include <queue>

using namespace std;

int main1106() {

    queue<int> queue1;
    queue1.push(1);
    queue1.push(2);
    queue1.push(3);
    while (!queue1.empty()) {
        cout << queue1.front() << "";
        queue1.pop();
    }

//    priority_queue priority_queue1;
    return 0;
}
