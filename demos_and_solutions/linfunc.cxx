#include <cmath>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Point {
private:
  double x,y;
public:
  Point( double myx,double myy)
    : x(myx),y(myy) {};
  // Point( double x,double y)
  //   : x(x),y(y) {};

  double delta_x( Point other ) {
    return other.x - x; };
  double delta_y( Point other ) {
    return other.y - y; };

  // accessor function
  double the_x() { return x; };
  double the_y() { return y; };

  double angle() {
    return atan(y/x);
  };
  void print() {
    cout << "Point " << x << "," << y
	 << " has angle " << angle() << endl;
  };
  double distance(Point otherpoint) {
    double dx = x-otherpoint.x,
      dy = y-otherpoint.y;
    return sqrt( dx*dx + dy* dy );
  };
};

class LinearFunction {
private:
  // // this is one way
  // Point p,q;
  // Better:
  double slope,intercept;
public:
  // // not bad
  // LinearFunction( Point p,Point q ) 
  //   : p(p),q(q) {};
  LinearFunction( Point p,Point q ) {
    // wrong: because x/y is private inside Point
    // slope = (q.y-p.y) / (q.x-p.x);
    // instead:
    // slope = (q.the_y()-p.the_y());
    // prefer:
    slope = q.delta_y(p) / q.delta_x(p);
    intercept = 3.;
  };
  double evaluate_at(double x) {
    return y = slope * x + intercept;
  };
};

// emacs command for the day: Ctrl-l (ell)
// "redraw" but also line to middle/top/bottom

int main() {
  Point p(2,1),q(3,4);

  return 0;
}
