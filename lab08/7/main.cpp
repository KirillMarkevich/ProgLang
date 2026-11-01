#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int &x : numbers) {
        cin >> x;
    }

    bool found = false;
    for (int x : numbers) {
        if (x < 0) {
            cout << "Найдено отрицательное число: " << x << '\n';
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Все числа неотрицательные\n";
    }

    return 0;
}
