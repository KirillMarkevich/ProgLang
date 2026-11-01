#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> v(n);
    for (auto &x : v) {
        cin >> x;
    }

    if (!v.empty()) {
        const long long last = v.back();
        for (auto &x : v) {
            x += last;
        }
    }

    int positive = 0;
    int negative = 0;

    for (const auto &x : v) {
        if (x > 0) {
            ++positive;
        } else if (x < 0) {
            ++negative;
        }
    }

    cout << "Положительных: " << positive << '\n';
    cout << "Отрицательных: " << negative << '\n';

    return 0;
}
