class Square : public Polygon {
protected:
    int side;

public:
    Square(int x, int y, int side) : Polygon(x, y), side(side) {
        // Calcul des sommets du carré
        vertices = {
            Point(x - side / 2, y - side / 2),
            Point(x + side / 2, y - side / 2),
            Point(x + side / 2, y + side / 2),
            Point(x - side / 2, y + side / 2)
        };
    }

    double calculateArea() const override {
        return side * side;
    }

    double calculatePerimeter() const override {
        return 4 * side;
    }

    void draw() const override {
        std::cout << "Drawing square" << std::endl;
    }
};
