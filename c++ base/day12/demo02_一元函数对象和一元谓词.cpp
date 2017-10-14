//
// Created by 风林 on 2017/10/12.
//

#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class TestDivide {
public:
    TestDivide(T div) : div(div) {}

    bool operator()(T &t) {
        return t % div == 0;
    }

private:
    T div;
};

vector<int> initVector() {
    vector<int> temp;
    for (int i = 1; i < 10; i++) {
        temp.push_back(i);
    }
    return temp;
}

int main1202() {
    int i = 5;
    TestDivide<int> td(i);
    vector<int> temp = initVector();
    vector<int, std::__1::allocator<int>>::iterator it = find_if(temp.begin(), temp.end(), td);
    if (it != temp.end()) {
        cout << *it << endl;
    }
    return 0;
}