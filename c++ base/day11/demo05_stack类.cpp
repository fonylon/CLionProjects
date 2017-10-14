//
// Created by 风林 on 2017/10/11.
//

#include <iostream>
#include <stack>

using namespace std;

int main1105() {
    stack<int> stack1;
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    while (!stack1.empty()) {
        cout << stack1.top();
        stack1.pop();
    }
    cout << endl;
    cout << stack1.size();
    return 0;
}