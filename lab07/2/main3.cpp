#include <iostream>

int main() {
    int x = 1, y = 2, z = 3;
    (x += 1, z += 2 * x + 3 * y, y += 1);
    std::cout << "x = " << x << ", y = " << y << ", z = " << z << '\n';
}
