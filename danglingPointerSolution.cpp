#include <iostream>
#include <memory>

int main() {
  //Use smart pointers to manage memory automatically
  auto ptr = std::make_unique<int>(5);
  int y = *ptr;
  *ptr = 10; 
  int z = *ptr;
  std::cout << y << " " << z << std::endl; //This will print 5 10
  return 0; 
}