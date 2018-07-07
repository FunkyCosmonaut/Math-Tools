#include <stdio.h>
#include <math.h>

long factorial(int n){

  long final = 1;
  int i;

  for(i = n; i > 0; i--)
    final = i * final;

  return final;
}

long nchoosek(int n, int k){

  long combination;
  combination = factorial(n)/(factorial(k)*factorial(n-k));

  return combination;
}

int main(void){

  int input;
  int input2;
  printf("enter an n and a k with a space inbetween\n")
  scanf("%i%i", &input,&input2);
  printf("%i", nchoosek(input,input2));

  return 0;
}
