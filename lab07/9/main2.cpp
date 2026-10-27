#include <iostream>
#include <vector>

int main() {
    int i = 0;
    std::vector<int> x(10);
    std::cin >> i;
    if (i < 0 || i >= static_cast<int>(x.size())) {
        std::cerr << "Индекс должен быть от 0 до 9.\n";
        return 1;
    }
    std::cin >> x[i];
    std::cout << x[i] << '\n';
}
