#include <cmath>

class Circle : public Shape {
protected:
    int radius;

public:
    Circle(int x, int y, int r) : Shape(x, y), radius(r) {}

    double calculateArea() const override {
        return M_PI * radius * radius;
    }

    double calculatePerimeter() const override {
        return 2 * M_PI * radius;
    }

    void draw() const override {
        std::cout << "Drawing circle" << std::endl;
    }
};