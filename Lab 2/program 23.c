#include <stdio.h>
int main()
{

    int exponent;
    long long int base, result = 1;
    printf("Enter you base first and then exponent:\n>>>");
    scanf("%lld %d", &base, &exponent);
    for (int i = 1; i <= exponent; i++)
  {
    result *= base;
  }
    printf("%lld", result);
    
    return 0;
}