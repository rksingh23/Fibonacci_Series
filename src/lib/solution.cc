#include "solution.h"
#include <iostream>
#include <bits/stdc++.h>


std::vector<int> Solution::Prime_SieveOfEratosthenes(int &num) 
{ 
  std::vector<int> result;
  std::vector<bool> visited(num+1,false); //Creates a boolean array visited, having size (o to n), all initialized as false.

  if (num<=0)
  {
      return {-1};
  }
  else
  {
  for(int i=2;i<=num;i++)
  {
    if(!visited[i]) // if any number is not visited, it is a prime number
    {
      result.push_back(i); //add them to the result vector
      for(int j=i+i; j<=num; j+=i)
      {
        visited[j]=true; //all the multiples of that number are non prime, hence invalidate them.
      }
    }
  }
  return result;
  }
}




std::vector<int> Solution::FindPrimeRecursive(int &num)
{
  std::vector<int> result;
  if (num<=0)
  {
      return {-1};
  }
  else
  {
      for(int i=2;i<=num;i++)
      {
        Solution::globalChk = i/2;
        if(isPrime(i))
            result.push_back(i);
      }
  }
  return result;
}


bool Solution::isPrime(int &num){
  if(globalChk==1){
    return 1;
  }else{
    if(num%globalChk==0) {
      return 0;
    } else {
      globalChk = globalChk-1;
      isPrime(num);
    }
  }
}
