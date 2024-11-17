class Rectangle : public Polygon {
protected:
    int width;
    int height;

public:
    Rectangle(int x, int y, int w, int h) : Polygon(x, y), width(w), height(h) {
        // Calcul des sommets du rectangle
        vertices = {
            Point(x - w / 2, y - h / 2),
            Point(x + w / 2, y - h / 2),
            Point(x + w / 2, y + h / 2),
            Point(x - w / 2, y + h / 2)
        };
    }

    double calculateArea() const override {
        return width * height;
    }

    double calculatePerimeter() const override {
        return 2 * (width + height);
    }

    void draw() const override {
        std::cout << "Drawing rectangle" << std::endl;
    }
};
