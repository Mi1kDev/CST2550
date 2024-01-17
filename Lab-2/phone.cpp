#include <iostream>

int main(){
  std::string phoneNum;
  std::cout << "Enter the phone number: ";
  std::cin >> phoneNum;
  std::cout << "The formatted number is (" << phoneNum.substr(0, 3) << ") " << phoneNum.substr(3, 4) << " " << phoneNum.substr(7, 4);
  return 0;
}
