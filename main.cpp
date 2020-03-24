#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

int main() {
  Matrix matriz1, inversa;

  zeroes(matriz1, 3);

  matriz1.at(0).at(0) = 2; matriz1.at(0).at(1) = 2; matriz1.at(0).at(2) = 3;
  matriz1.at(1).at(0) = 4; matriz1.at(1).at(1) = 5; matriz1.at(1).at(2) = 6;
  matriz1.at(2).at(0) = 7; matriz1.at(2).at(1) = 8; matriz1.at(2).at(2) = 9;

  inverse(matriz1, inversa);
  
  showMatrix(inversa);

}