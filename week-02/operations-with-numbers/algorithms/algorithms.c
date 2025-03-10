//
// Created by palma on 2/23/2025.
//

#include "algorithms.h"

#include <tgmath.h>

bool
isPrime(int number)
{
  if (number > 0)
    {
      number = - number;
    }
  if (number == 0 || number == 1)
    {
      return false;
    }
  for (int i = 2; i <= sqrt(number); i++)
    {
      if (number % i == 0)
        {
          return false;
        }
    }
  return true;
}