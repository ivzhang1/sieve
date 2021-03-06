#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "sieve.h"

int sieve(int targetPrime){

  int size = targetPrime * log((double)targetPrime) * 1.15;
    
  int pointer[size+1];
  
  for(int k = 0; k < size+1; k++){
    pointer[k] = 1;
    //printf("%d\n", pointer[k]);
  }
  int num_prime = 0;
  int value;

  for(int i = 2; i < size+1; i++){
    //printf("%d\n\n", pointer[2]);
    value = pointer[i];
    if(value){
      for(int j = i; j < size+1; j+=i){
    	if(pointer[j] && j % i == 0){
    	  pointer[j] = 0;
    	}
      }
      num_prime += 1;
    }
    if(num_prime == targetPrime){
      return i;
    }
  }
  
  return 0;
}
