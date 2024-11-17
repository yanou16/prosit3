#include <vector>

class Polygon : public Shape {
protected:
    std::vector<Point> vertices;

public:
    Polygon(int x = 0, int y = 0) : Shape(x, y) {}

    void addVertex(const Point& vertex) {
        vertices.push_back(vertex);
    }

    const std::vector<Point>& getVertices() const {
        return vertices;
    }

    virtual void draw() const override {
        // Implémentation de base pour dessiner un polygone
        std::cout << "Drawing polygon at (" << x << "," << y << ")" << std::endl;
    }
};
