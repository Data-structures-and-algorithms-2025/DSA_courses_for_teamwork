//
// Created by palma on 2/23/2025.
//

#include "algorithms.h"

bool isPrime(int number){
  if(number <= 1){
    return false;
  }
  if(number == 2){
    return true;
  }
  if(number%2==0) {
    return false;
  }
  for (int i=3;i*i<=number;i+=2){
    if(number % i == 0){
      return false;
    }
  }
  return true;
}