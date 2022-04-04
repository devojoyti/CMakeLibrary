#include <iostream>
#include <cmath>
#include "squareroot.h"

int main(int argc, char* argv[])
{
  // convert input to double
  const int inputValue = std::stoi(argv[1]); 

  mathematics::SquareRoot squareRoot;
  
  float output = squareRoot.squareRoot(inputValue);
    
  std::cout << "The square root of " << inputValue << " is " << output
            << std::endl;
  return 0;
}