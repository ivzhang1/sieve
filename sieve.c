#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "sieve.h"

int sieve(int targ){

  int size = targ * log((double)targ) * 1.15;
    
  int pointer[size+1];

  targ -= 1;
  
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
      for(int j = i; j < size+1; j++){
    	if(pointer[j] && j % i == 0){
    	  pointer[j] = 0;
    	}
      }
      num_prime += 1;
    }
    if(num_prime == targ){
      return i;
    }
  }
  
  return 0;
}
