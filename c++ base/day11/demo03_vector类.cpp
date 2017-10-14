//
// Created by 风林 on 2017/10/11.
//

#include <iostream>
#include <vector>

using namespace std;

int main1103() {

    vector<int> vector1;
    vector1.push_back(1);
    vector1.push_back(2);
    vector1.push_back(3);
    for (auto wrap_iter = vector1.begin(); wrap_iter != vector1.end();) {
        if (*wrap_iter == 2) {
            wrap_iter = vector1.erase(wrap_iter);
        } else {
            ++wrap_iter;
        }
    }

    for (int i = 0; i < vector1.size(); i++) {
        cout << vector1[i];
    };
    return 0;
}