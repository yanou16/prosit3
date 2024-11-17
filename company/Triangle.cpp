class Triangle : public Polygon {
public:
    Triangle(const Point& p1, const Point& p2, const Point& p3) : Polygon() {
        vertices = { p1, p2, p3 };
    }

    double calculateArea() const override {
        // Calcul de l'aire avec la formule de Héron
        double a = distance(vertices[0], vertices[1]);
        double b = distance(vertices[1], vertices[2]);
        double c = distance(vertices[2], vertices[0]);
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double calculatePerimeter() const override {
        return distance(vertices[0], vertices[1]) +
            distance(vertices[1], vertices[2]) +
            distance(vertices[2], vertices[0]);
    }

    void draw() const override {
        std::cout << "Drawing triangle" << std::endl;
    }

private:
    double distance(const Point& p1, const Point& p2) const {
        int dx = p2.x - p1.x;
        int dy = p2.y - p1.y;
        return sqrt(dx * dx + dy * dy);
    }
};
