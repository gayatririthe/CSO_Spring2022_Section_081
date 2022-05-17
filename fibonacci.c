/*
 * <Gayatri Rithe>
 * gr2287
*/

#include <stdio.h>

int Fibonacci(int n)
{
  if (n<=1)
    return 1;

  else
    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main()
{
  int ran;
  printf("Enter number of sequence elements:\n");
  scanf("%d", &ran);
  printf("Fibonacci series:\n");
  for(int i = 0; i < ran; i++)
    {
      printf("%d\n", Fibonacci(i));
    }
  return 0;
}
