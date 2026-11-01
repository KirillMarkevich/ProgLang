#include <iostream>
using namespace std;

int main() {
    int to = 5;

    {
        int __i = 0, __n = to;

        for (const int &i = __i; i < __n; __i++) {
            cout << i << ' ';
            ++i;
        }
    }

    cout << '\n';
    return 0;
}
