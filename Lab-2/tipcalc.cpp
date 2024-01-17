#include <iostream>

int main(){
  std::cout << "Enter the price: ";
  double  price, tipPerc;
  std::cin >> price;
  std::cout << "Enter the tip percentage: ";
  std::cin >> tipPerc;
  double tip = (tipPerc / 100) * price;
  std::cout << "The tip is "<< tip << std::endl;
  std::cout << "The total is "<< price + tip;
  return 0;
}
