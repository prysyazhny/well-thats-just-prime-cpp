#include <iostream>

#include "src/prime.hpp"
#include "src/factorizer.hpp"

int main() {
  // Your driver program goes here

  std::cout << "Enter a number to check if it's prime factors "; 
  int number;
  std::cin >> number;
  std::vector<int> factors = prime_factors(number);
  std::cout << "Prime factors of " << number << " are: ";
  for (int factor : factors) {
      std::cout << factor << " ";
  }
  std::cout << std::endl;
  return 0;

}
