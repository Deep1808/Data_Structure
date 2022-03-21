#include <stdio.h>
int main() {
  int r, c, a[100][100], b[100][100], sum[100][100], i, j;
  printf("Enter the maximun degree of X: ");
  scanf("%d", &r);
  r++;
  printf("Enter the maximum degree of Y: ");
  scanf("%d", &c);
  c++;

  printf("\nEnter elements of 1st polynomial:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter value for X^%d and Y^%d:", i, j);
      scanf("%d", &a[i][j]);}
	printf("\n");
for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
	if(a[i][j]!=0)
      printf("%dX^%dY^%d ", a[i][j],i,j);
       
    }

  printf("\n\nEnter elements of 2nd polynomial:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter value for X^%d and Y^%d:", i, j);
      scanf("%d", &b[i][j]);
    }
     printf("\n");

for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
     if(b[i][j]!=0)
     printf("%dX^%dY^%d ", b[i][j],i,j);
    }
	printf("\n");

    for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

    printf("\nSum of 2 polynomials: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
    if(sum[i][j]!=0)
    printf("%dX^%dY^%d ", sum[i][j],i,j);
    }
    printf("\n");
}

