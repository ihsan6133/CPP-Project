#include <iostream>
#include <vector>
#include <string>

class Vector{
public:
  double x;
  double y;
  double z;
  Vector(double _x, double _y, double _z): x(_x),y(_y),z(_z){}

};

std::ostream& operator<< (std::ostream& output, Vector myVector){
  output << "x: " << myVector.x << std::endl;
  output << "y: " << myVector.y << std::endl;
  output << "x: " << myVector.z;
  return output;
}

int main(){
  Vector myvector = {3, 5, 2};
  std::cout << myvector;
}
