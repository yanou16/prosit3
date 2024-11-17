int main() {
    // Création des formes
    Circle circle(100, 100, 50);
    Triangle triangle(Point(0, 0), Point(50, 50), Point(0, 50));
    Rectangle rectangle(200, 200, 80, 40);
    Square square(300, 300, 60);

    // Test des calculs
    std::cout << "Circle area: " << circle.calculateArea() << std::endl;
    std::cout << "Triangle perimeter: " << triangle.calculatePerimeter() << std::endl;
    std::cout << "Rectangle area: " << rectangle.calculateArea() << std::endl;
    std::cout << "Square perimeter: " << square.calculatePerimeter() << std::endl;

    // Dessin des formes
    circle.draw();
    triangle.draw();
    rectangle.draw();
    square.draw();

    return 0;
}