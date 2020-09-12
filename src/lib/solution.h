#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:
  
  std::vector<int> FindPrimeRecursive(int &num);
  std::vector<int> Prime_SieveOfEratosthenes(int &num); 
  int globalChk;  
  bool isPrime(int &num); 

//private:
};

#endif