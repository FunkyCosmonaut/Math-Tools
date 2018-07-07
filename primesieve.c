#include <stdio.h>

int number;
int main(void){

  int i;
  scanf("%i", &number);
  void setZeros(int array[number]);
  void eratosthones(int array[number]);
  int P[number];


  setZeros(P);
  eratosthones(P);

  return 0;
}

void setZeros(int array[number])
{
  int i;

  for(i = 0; i < number; i++)
    array[i] = 0;
}

void eratosthones(int array[number]){

  int i;
  int j;

  for(i = 2; i < number; ){
    if (array[i] == 0)
      printf("%i ", i);
      array[i] = 0;
      for(j = 2; i*j <= number; j++)
      array[i*j] = 1;
      ++i;

  }
}
