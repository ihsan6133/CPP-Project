#include <iostream>
#include <vector>
#include <string>

class Vector{
public:
  double x;
  double y;
  double z;
  Vector(double _x, double _y, double _z): x(_x),y(_y),z(_z){}
  void PrintVector(){
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;
  }
};

int main(){
  Vector myvector = {3, 5, 2};
  myvector.PrintVector();
}
