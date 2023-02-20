#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  srand(time(NULL));
  int num = rand() % 1000;
  char letter = rand() % 26 + 'A';
  std::cout << "3numeros y letra: " << num << letter << std::endl;
  return 0;
}