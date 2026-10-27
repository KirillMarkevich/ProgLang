#include <iostream>
#include <string>

int main() {
    std::string s;
    for (int i = 0; i < 1000000; i++)
        s += 'a';
    std::cout << s.size() << '\n';
}
