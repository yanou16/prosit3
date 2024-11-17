#ifndef SHAPE_H
#define SHAPE_H

class Shape {
protected:
    int x, y;  // Coordonnées du centre

public:
    Shape(int x = 0, int y = 0) : x(x), y(y) {}
    virtual ~Shape() = default;

    // Méthodes virtuelles pures
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
    virtual void draw() const = 0;

    // Getters et setters
    int getX() const { return x; }
    int getY() const { return y; }
    void setPosition(int newX, int newY) {
        x = newX;
        y = newY;
    }
};
