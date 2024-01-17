#include <iostream>

int main(){
  std::cout << "Please enter two numbers: ";
  double x, y;
  std::cin >> x >> y;
  std::cout << "Sum: " << x+y << std::endl;
  std::cout << "Difference: " << x-y << std::endl;
  std::cout << "Product: " << x*y << std::endl;
  std::cout << "Distance: " << abs(x-y) << std::endl;
  std::cout << "Average: " << (x+y)/2 << std::endl;
}
