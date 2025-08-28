#include <cmath> // for sqrt() function
#include <iostream>

class Shape {
public:
    virtual void draw() { std::cout << "Shape draw\n"; }
};
class Circle : public Shape {
public:
    void draw()  { std::cout << "Circle draw\n"; }
};
void render(Shape* s) {
    s->draw();  // Calls the appropriate version at runtime
}
int main(){
    Shape s;
    render(&s);
}