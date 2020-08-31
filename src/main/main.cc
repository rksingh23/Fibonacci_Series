#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;
  std::vector<int> inputs = {1, 2, 3, 4};
  std::cout << "inputs: {1, 2, 3, 4}, output: " << solution.FindAverageRecursive(inputs)
            << std::endl;

  inputs = {};
  std::cout << "inputs: {}, output: " << solution.FindAverageRecursive(inputs) << std::endl;

  return 0;
}