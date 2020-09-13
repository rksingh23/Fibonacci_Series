#include "src/lib/solution.h"
#include <iostream>
#include<vector>


int main() 
{
  Solution solution;
  int num=5;

  std::cout << "Non Recursive result for "<<num<< std::endl;
  for (auto n:solution.Fibonacci_Non_Recursive(num)){
    std::cout<<n<<std::endl;
  }

  std::cout << "Tail_Recursion result for "<<num<< std::endl;
  int a=0;
  int b=1;
  std::vector<int> cmp;
  for (int i=1;i<=num;i++)
  {
    cmp.push_back(solution.Fibonacci_Tail_Recursion(i,a,b));
  }
  for (auto n:cmp){
    std::cout<<n<<std::endl;
  }


  std::vector<int> cmp1;
  std::cout << "Memoization result for "<<num<< std::endl;

  for (int i=1;i<=num;i++)
  {
    cmp1.push_back(solution.Fibonacci_MEMOIZATION(i));
  }
  for (auto n:cmp1){
    std::cout<<n<<std::endl;
  }

  return 0;

}