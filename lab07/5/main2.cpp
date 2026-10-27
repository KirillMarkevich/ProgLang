#include <iostream>

int main() {
    int a = 1, b = 2;
    int temp = a;
    a = b;
    b = temp;
    std::cout << "a = " << a << ", b = " << b << '\n';
}
