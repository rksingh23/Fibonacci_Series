#include "solution.h"
#include <iostream>

double Solution::FindAverage(std::vector<int> &inputs){
  if (inputs.size() == 0){
      return 0;
  }

  double sum=0;
  for (auto n : inputs) {
    sum+=n;
  }
  return (sum/(inputs.size()));
}

double Solution::FindAverageRecursive(std::vector<int> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }
  return FindAverageRecursiveAux(inputs, 0, inputs.size());
}

double Solution::FindAverageRecursiveAux(std::vector<int> &inputs, int start_index, int length) {
  if (start_index == (length - 1)) {
    return inputs[start_index];
  }

  if (start_index==0){
    return((inputs[0]+FindAverageRecursiveAux(inputs,start_index+1,length))/length);
  }

return (inputs[start_index]+FindAverageRecursiveAux(inputs,start_index+1,length));
}