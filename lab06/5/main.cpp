#include <iostream>

namespace Geometry {
    double rectangleArea(double width, double height) {
        return width * height;
    }
}

namespace Text {
    void printResult(double value) {
        std::cout << "Площадь прямоугольника: " << value << '\n';
    }
}

int main() {
    double area = Geometry::rectangleArea(5.0, 3.0);
    Text::printResult(area);
    return 0;
}
