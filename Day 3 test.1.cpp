#include <stdio.h>

int isPrime(int n, int i) {
   if (i == 1) {
      return 1;
   } else {
      if (n % i == 0) {
         return 0;
      } else {
         return isPrime(n, i-1);
      }
   }
}

int sumDigits(int n) {
   if (n == 0) {
      return 0;
   } else {
      return (n % 10) + sumDigits(n/10);
   }
}

int main() {
   int n, result;
   printf("Enter a positive integer: ");
   scanf("%d", &n);

   if (n == 1) {
      printf("%d is not a prime number.\n", n);
   } else {
      result = isPrime(n, n-1);
      if (result == 1) {
         printf("%d is a prime number.\n", n);
      } else {
         printf("%d is not a prime number.\n", n);
      }
   }

   printf("The sum of the digits of %d is %d.\n", n, sumDigits(n));
   
}

