#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>



TEST(FindPrimeTest, HandlesPositiveNumberSeive) {
  Solution solution;

  int num=5;
  std::vector<int> vect1{2,3,5};
  std::vector<int> cmp;
  for (auto n:solution.Prime_SieveOfEratosthenes(num)){
    cmp.push_back (n);
  }
  ASSERT_EQ(cmp.size(), vect1.size()) << "Vectors x and y are of unequal length";
  for (unsigned int i = 0; i < vect1.size(); ++i){
    EXPECT_EQ(cmp[i],vect1[i]);
  } 
}

TEST(FindPrimeTest, HandlesPositiveNumberRecursive) {
  Solution solution;

  int num=5;
  std::vector<int> vect1{2,3,5};
  std::vector<int> cmp;
  for (auto n:solution.FindPrimeRecursive(num)){
    cmp.push_back (n);
  }
  ASSERT_EQ(cmp.size(), vect1.size()) << "Vectors x and y are of unequal length";
  for (unsigned int i = 0; i < vect1.size(); ++i){
    EXPECT_EQ(cmp[i],vect1[i]);
  } 
}


TEST(FindPrimeTest, HandlesNegativeNumberSeive) {
  Solution solution;

  int num=-1;
  std::vector<int> vect1{-1};
  std::vector<int> cmp;
  for (auto n:solution.Prime_SieveOfEratosthenes(num)){
    cmp.push_back (n);
  }
  ASSERT_EQ(cmp.size(), vect1.size()) << "Vectors x and y are of unequal length";
  for (unsigned int i = 0; i < vect1.size(); ++i){
    EXPECT_EQ(cmp[i],vect1[i]);
  } 
}

TEST(FindPrimeTest, HandlesNegativeNumberRecursive) {
  Solution solution;

  int num=-1;
  std::vector<int> vect1{-1};
  std::vector<int> cmp;
  for (auto n:solution.FindPrimeRecursive(num)){
    cmp.push_back (n);
  }
  ASSERT_EQ(cmp.size(), vect1.size()) << "Vectors x and y are of unequal length";
  for (unsigned int i = 0; i < vect1.size(); ++i){
    EXPECT_EQ(cmp[i],vect1[i]);
  } 
}


TEST(FindPrimeTest, HandlesZeroSeive) {
  Solution solution;

  int num=0;
  std::vector<int> vect1{-1};
  std::vector<int> cmp;
  for (auto n:solution.Prime_SieveOfEratosthenes(num)){
    cmp.push_back (n);
  }
  ASSERT_EQ(cmp.size(), vect1.size()) << "Vectors x and y are of unequal length";
  for (unsigned int i = 0; i < vect1.size(); ++i){
    EXPECT_EQ(cmp[i],vect1[i]);
  } 
}

TEST(FindPrimeTest, HandlesZerorRecursive) {
  Solution solution;

  int num=0;
  std::vector<int> vect1{-1};
  std::vector<int> cmp;
  for (auto n:solution.FindPrimeRecursive(num)){
    cmp.push_back (n);
  }
  ASSERT_EQ(cmp.size(), vect1.size()) << "Vectors x and y are of unequal length";
  for (unsigned int i = 0; i < vect1.size(); ++i){
    EXPECT_EQ(cmp[i],vect1[i]);
  } 
}