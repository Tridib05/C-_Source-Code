  #include <stdio.h>
int main()
{
  int number, limit;
  printf("Enter a number: ");
  scanf("%d", &number);
  printf("Enter the limit: ");
  scanf("%d", &limit);
  for (int i = 2; i <= limit; i+=2) 
  {
    printf("%d * %d = %d\n", number, i, number * i);
  }
  return 0;
}
