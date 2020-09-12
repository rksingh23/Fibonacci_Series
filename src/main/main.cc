#include "src/lib/solution.h"
#include <iostream>
#include<vector>

int main() {
  Solution solution;
  int num=5;

  std::cout << "Recursive Prime result for "<<num<< std::endl;
  for (auto n:solution.FindPrimeRecursive(num)){
    std::cout<<n<<std::endl;
  }

  std::cout << "Seive Prime result for "<<num<< std::endl;
  for (auto n:solution.Prime_SieveOfEratosthenes(num)){
    std::cout<<n<<std::endl;
  }

  num=-1;

  std::cout << "Recursive Prime result for "<<num<< std::endl;
  for (auto n:solution.FindPrimeRecursive(num)){
    std::cout<<n<<std::endl;
  }

  std::cout << "Seive Prime result for "<<num<< std::endl;
  for (auto n:solution.Prime_SieveOfEratosthenes(num)){
    std::cout<<n<<std::endl;
  }

  return 0;
}