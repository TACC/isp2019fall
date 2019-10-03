/*
 * Solution 1:
 * storing bottomleft & width/height
 * note the Rectangle(Point,Point) constructor:
 * it does not store the second point but
 * uses it to compute the width/height.
 */

#include <iostream>
using std::cout;
using std::endl;

// Esc x repl<tab>st<tab><ret>
// for global replace string
// Esc que<tab>r<tab>
// query replace

class Point {
private:
  float x,y;
public:
  Point( float x,float y) 
    : x(x),y(y) {};
  float the_x() { return x; };
  float delta_x(Point other) {
    return other.x-x; };
  float delta_y(Point other) {
    return other.y-y; };
};

class Rectangle {
private:
  Point bottomleft;
  float width,height;
public:
  Rectangle( Point bl,float w,float h)
    : bottomleft(bl),width(w),height(h) {};
  Rectangle( Point bl,Point tr )
    : bottomleft(bl),
      width(bl.delta_x(tr)),
      height(bl.delta_y(tr)) {};
  float area() { return width*height; };
  float rightside() {
    return bottomleft.the_x()+width; };
};

class Square : public Rectangle {
public:
  Square(Point bl,float s)
    : Rectangle(bl,s,s) {};
};

int main() {
  Point oneone(1,1),threethree(3,3);
  Rectangle r(oneone,2,1);
  cout << "area: " << r.area() << endl;
  Rectangle empty(oneone,oneone);
  cout << "empty area: " << empty.area() << endl;
  //cout << "right at: " << r.rightside() << endl;
  Square twoatone(oneone,2);
  cout << "square area: " << twoatone.area() << endl;

  return 0;
}

    
