#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>



TEST(Fibonacci,Returns_Sequence_MEMOIZATION)
{
  Solution Solution;
  int num=5;
  std::vector<int> cmp;
  std::vector<int> input{1,1,2,3,5};  
  for (int i=1;i<=num;i++)
  {
    cmp.push_back(Solution.Fibonacci_MEMOIZATION(i));
  }
  ASSERT_EQ(cmp.size(), input.size()) << "Vectors x and y are of unequal length";
  for (unsigned int i = 0; i < input.size(); ++i){
    EXPECT_EQ(cmp[i],input[i]);
  }
} 

TEST(Fibonacci,Handles_Zero_MEMOIZATION)
{
  Solution Solution;
  int num=0;
  EXPECT_EQ(Solution.Fibonacci_MEMOIZATION(num),0); 
}

TEST(Fibonacci,Handles_Negative_MEMOIZATION)
{
  Solution Solution;
  int num=-2; 
  EXPECT_EQ(Solution.Fibonacci_MEMOIZATION(num),-1); 
}

TEST(Fibonacci,Returns_Sequence_Without_Recursion)
{
  Solution Solution;
  int num=5;
  std::vector<int> cmp;
  std::vector<int> input{1,1,2,3,5};  
  for (auto n:(Solution.Fibonacci_Non_Recursive(num)))
  {
    cmp.push_back(n);
  }
  ASSERT_EQ(cmp.size(), input.size()) << "Vectors x and y are of unequal length";
  for (unsigned int i = 0; i < input.size(); ++i){
    EXPECT_EQ(cmp[i],input[i]);
  } 
}

TEST(Fibonacci,HandlesZero_Without_Recurssion)
{
  Solution Solution;
  int num=0;
  std::vector<int> cmp;
  std::vector<int> input{-1};  
  for (auto n:(Solution.Fibonacci_Non_Recursive(num)))
  {
    cmp.push_back(n);
  }
  ASSERT_EQ(cmp.size(), input.size()) << "Vectors x and y are of unequal length";
  for (unsigned int i = 0; i < input.size(); ++i){
    EXPECT_EQ(cmp[i],input[i]);
  } 
}



TEST(Fibonacci,Returns_Sequence_Trail_Recursion)
{
  Solution Solution;
  int num=5;
  int a=0;
  int b=1;
  std::vector<int> cmp;
  std::vector<int> input{1,1,2,3,5};  
  for (int i=1;i<=num;i++)
  {
    cmp.push_back(Solution.Fibonacci_Tail_Recursion(i,a,b));
  }
  ASSERT_EQ(cmp.size(), input.size()) << "Vectors x and y are of unequal length";
  for (unsigned int i = 0; i < input.size(); ++i){
    EXPECT_EQ(cmp[i],input[i]);
  } 
}

TEST(Fibonacci,HandlesZero_Trail_Recurssion)
{
  Solution Solution;
  int num=0;
  int a=0;
  int b=1;
  EXPECT_EQ((Solution.Fibonacci_Tail_Recursion(num,a,b)),-1);
}

TEST(Fibonacci,HandlesNegative_Trail_Recurssion)
{
  Solution Solution;
  int num=-2;
  int a=0;
  int b=1;
  EXPECT_EQ((Solution.Fibonacci_Tail_Recursion(num,a,b)),-1);
}
