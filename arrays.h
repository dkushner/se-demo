#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

void fill_array(int* array, int size) {
  for(int i = 0; i < size; i++) {
    array[i] = rand() % 10;
  }
}

void print_array(int* array, int size) {
  for(int i = 0; i < size; i++) {
    cout << array[i] << ' '; 
  }
}

void print_primes(int* array, int size) {
  for(int i = 0; i < size; i++) {
    int prime = 1;
    for(int a = 2; a < array[i] * array[i]; a++) {
      double x = fmod((double)array[i], (double)a);
      if(x == 0)
      {
        prime = 0;
        continue;
      }
    }
    if(prime) {
      cout << array[i] << " ";
    }
  }
}

void squares(int* array, int size) {}
int sum(int* array, int size) {}
