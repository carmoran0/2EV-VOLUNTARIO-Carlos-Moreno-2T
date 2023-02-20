#include <iostream>

int main() {
  int number = 42;
  int* pointer = &number;

  std::cout << "The value of number is " << number << std::endl;
  std::cout << "The value of pointer is " << pointer << std::endl;
  std::cout << "The value stored at the memory address pointed to by pointer is " << *pointer << std::endl;

  *pointer = 24;

  std::cout << "The value of number is now " << number << std::endl;
  std::cout << "The value stored at the memory address pointed to by pointer is now " << *pointer << std::endl;

  return 0;
}