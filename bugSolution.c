#include <stdio.h>

int main() {
  int x = 10;
  int y;

  printf("Enter the divisor (y): ");
  scanf("%d", &y);

  if (y == 0) {
    printf("Error: Division by zero is not allowed.\n");
    return 1; // Indicate an error
  } else {
    int z = x / y;
    printf("Result of x / y: %d\n", z);
  }

  return 0;
}