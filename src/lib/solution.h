#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:
  int Fibonacci_MEMOIZATION(int num);
  std::vector<int> Fibonacci_Non_Recursive(int &num);
  int Fibonacci_Tail_Recursion(int n,int prev, int curr); 

//private:
};

#endif