#include "solution.h"
#include <iostream>
#include<vector>
#include <map>


//FIBONACCI BY MEMOIZATION

int Solution::Fibonacci_MEMOIZATION(int num)
{
  std::map<int, int> values;
  if (num<0)
  {
    return -1;
  }
  if ((num == 1)||(num==0))
  {
    return num;
  }
  
  std::map<int,int>::iterator iter;
  iter = values.find(num); // return the values, i.e the previously calculated factorial value, of the corresponding num from the map
                           // if failed the above map.find() return the end location of the map.

  if (iter == values.end())  //if the fibonacci is not calculated previously --> begin its calculation
  {
    values[num] = (Fibonacci_MEMOIZATION(num-1) + Fibonacci_MEMOIZATION(num-2));
    return (values[num]); // store the fibonacci value corresponding to the key value in the map
  }
  else // if the fibonacci value is previously calculated just return the calculted value.
  {
    return iter->second;
  }
}

//NOTE the above example is an alternate to the basic yet super expensive and more time taking fibonacci generator using recursion. 
// int fibonacci(int num)
// if(num==0) || (num==1)
//return num
//else
//return fibonacci(num-1)+fibonacci(n-2)
// We don't want to implement this because we are calculating fibonacci values repeteadly for some values. 

//Tail Recursion to overcome the multiple executiof same value executed by "return fibonacci(n-1)+fibbonacci(n-2)"

int Solution::Fibonacci_Tail_Recursion(int n, int a=0, int b =1)
{
  if (n<=0)
    return -1;
  if (n == 1)
    return b; //this is the closest value of the fibonacci series for n received in this function.
  return Fibonacci_Tail_Recursion(n - 1, b, a + b);
}

//Basic Method to implement Fibonacci

std::vector<int> Solution::Fibonacci_Non_Recursive(int &n)
{
  std::vector<int> series;
  if (n<=0)
  {
    return {-1};
  }
  else if(n<2)
  {
    return {n};
  }
  else
  {
    int a=0;
    int b=1;
    int sum=0;
    series.push_back(b);
    for(int i=2;i<=n;i++)
    {
      sum=a+b;
      a=b;
      b=sum;
      series.push_back(sum);
    }
  }
  return (series);
}




  
