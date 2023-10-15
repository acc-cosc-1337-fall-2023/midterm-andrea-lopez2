#include "question3.h"
#include<iostream>

int get_fib_sequence(int fib)
{
    int t1 = 0, t2 = 1, t3, i;
    if (fib == 0)
    {
       return t1;
    }
    for(i = 2; i <= fib; i++) 
    { 
       t3 = t1 + t2; 
       t1 = t2; 
       t2 = t3; 
    } 
    return t2; 

    
}