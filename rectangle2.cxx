/*
 * Solution 2:
 * storing bottomleft/topright
 * note the Rectangle(Point,float,float) constructor:
 * it does not store the width/height, but
 * uses them to compute the second point
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
  float the_y() { return y; };
  float delta_x(Point other) {
    return other.x-x; };
  float delta_y(Point other) {
    return other.y-y; };
  Point shiftby(float shiftx,float shifty) {
    // you could do it this way:
    // Point shifted(x+shiftx,y+shifty);
    // return shifted;
    // but this is shorter:
    return Point(x+shiftx,y+shifty);
  };
};

class Rectangle2 {
private:
  Point bottomleft,topright;
public:
  Rectangle2( Point bl,float w,float h)
    : bottomleft(bl),
      topright(Point(bl.shiftby(w,h))) {};
  Rectangle2( Point bl,Point tr )
    : bottomleft(bl),topright(tr) {};
  float area() {
    float
      width = bottomleft.delta_x(topright),
      height = bottomleft.delta_y(topright);
    return width*height; };
  // float rightside() {
  //   return bottomleft.the_x()+width; };
};

int main() {
  Point oneone(1,1),threethree(3,3);
  Point shifted = oneone.shiftby(0,1);
  cout << shifted.the_x() << "," << shifted.the_y() << endl;
  Rectangle2 r(oneone,2,1);
  cout << "area: " << r.area() << endl;
  // cout << "right at: " << r.rightside() << endl;

  return 0;
}

    
