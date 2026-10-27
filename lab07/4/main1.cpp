#include <iostream>

int main() {
    int x = 1, y = 10;
    (++x) = y;
    std::cout << "x = " << x << '\n';
}
