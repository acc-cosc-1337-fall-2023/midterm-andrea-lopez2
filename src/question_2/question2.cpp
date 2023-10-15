#include "question2.h"
#include<iostream>

using std::cout; using std::cin;

//bool test_config()
bool is_prime(int num)
{
    bool prime = true;

    if(num == 1 || num == 0) 
    prime = false;

    for (int i = 2; i <= num/2; ++i) 
    {
        if (num % i == 0) 
        {
            prime = false;
            break;
        }
    }
    return prime; 
}

std::vector<int> get_primes(int num)
{
    std:vector<int> primes{};

   // Check for every number from 1 to N
      for(int i = 2; i <= num; i++)
      {
          if(is_prime(i)) 
          {
            primes.push_back(i);
          
          }
      }

    return primes;

}