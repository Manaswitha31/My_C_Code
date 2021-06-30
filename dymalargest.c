#include <stdio.h>
#include <stdlib.h>

int main() {
  int i,n;
  double *data;
  printf("Enter the total number of elements: ");
  scanf("%d", &n);

  // Allocating memory for n elements
  data = (double *)calloc(n, sizeof(double));
  if (data == NULL) {
  printf("Error!!! memory not allocated.");
  exit(0);
  }

  // Storing numbers entered by the user.
  for (i = 0; i < n; ++i) {
  printf("Enter number%d: ", i + 1);
  scanf("%lf",data+i);
  }
  for (i = 0; i < n; ++i) {
  printf("Stored numbers are = %lf\n",data+i);
  }
  return 0;
}
  
