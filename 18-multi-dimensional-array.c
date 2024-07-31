// #include <stdio.h>
// int main() {
//   int r, c, a[100][100], b[100][100], sum[100][100], i, j;
//   printf("Enter the number of rows (between 1 and 100): ");
//   scanf("%d", &r);
//   printf("Enter the number of columns (between 1 and 100): ");
//   scanf("%d", &c);

//   printf("\nEnter elements of 1st matrix:\n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("Enter element a%d%d: ", i + 1, j + 1);
//       scanf("%d", &a[i][j]);
//     }

//   printf("Enter elements of 2nd matrix:\n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("Enter element b%d%d: ", i + 1, j + 1);
//       scanf("%d", &b[i][j]);
//     }

//   // adding two matrices
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       sum[i][j] = a[i][j] + b[i][j];
//     }

//   // printing the result
//   printf("\nSum of two matrices: \n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("%d   ", sum[i][j]);
//       if (j == c - 1) {
//         printf("\n\n");
//       }
//     }

//   return 0;
// }


#include<stdio.h>
int main()
{
    /* code */
    // int matrix[1][2]=  { {1,2,3} , {4,5,6} } ;
//     /Issue: The dimensions do not match the initialization list. You cannot fit three elements into a 1x2 array.
// Correction: The declaration should match the number of elements in the initializer list or the initializer list should be adjusted to fit the declared dimensions
    int matrix [3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };
    printf("%d \n" , matrix[2][1]); // ekhane 3 no row 2 no column mane array index rower jonno 2, column er jonno 1

    //Change Elements in a 2D Array
    matrix[2][1]=100;
    printf("%d" , matrix[2][1]); // Now outputs 9 instead of 1

    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

int i, j;
for (i = 0; i < 2; i++) {
  for (j = 0; j < 3; j++) {
    printf("%d\n", matrix[i][j]);
  }
}
    return 0;
}
