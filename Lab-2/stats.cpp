#include <iostream>

double sum(double a, double b){
  return a + b;
}
double diff(double a, double b){
  return a - b;
}
double product(double a, double b){
  return a * b;
}
double distance(double a, double b){
  return abs(a - b);
}
double average(double a, double b){
  return (a + b) / 2;
}

int  main(){
  std::cout << "Enter two numbers: ";
  double x, y;
  std::cin >> x >> y;
  std::cout << "Sum: " << sum(x, y) << std::endl;
  std::cout << "Difference: " << diff(x, y) << std::endl;
  std::cout << "Product: " << product(x, y) << std::endl;
  std::cout << "Distance: " <<distance(x, y) << std::endl;
  std::cout << "Average: " << average(x, y) << std::endl;
  return 0;
}
