#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    vector<char> num;
    for (char c: N) {
        num.push_back(c);
    }
    for (int i = num.size() - 1; i >= 0 ; i--) {
        cout << num[i];
    }
}