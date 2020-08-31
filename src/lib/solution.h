#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:
  double FindAverage(std::vector<int> &inputs);
  double FindAverageRecursive(std::vector<int> &inputs);

private:
  double FindAverageRecursiveAux(std::vector<int> &inputs, int start_index, int length);
};

#endif