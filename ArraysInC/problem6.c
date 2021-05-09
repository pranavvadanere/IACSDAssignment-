
#include <stdio.h>
int main() {
  int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    if (j == c - 1)
    printf("\n");
  }

  // computing the transpose
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == r - 1)
    printf("\n");
  }
  return 0;
}

/*
pranav@pranav-ThinkPad-L420:~$ cd IACSDAssignment/ArraysInC/
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ArraysInC$ gcc problem6.c 
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ArraysInC$ ./a.out 
Enter rows and columns: 3
3

Enter matrix elements:
Enter element a11: 1
Enter element a12: 2
Enter element a13: 3
Enter element a21: 4
Enter element a22: 5
Enter element a23: 6
Enter element a31: 7
Enter element a32: 8
Enter element a33: 9

Entered matrix: 
1  2  3  
4  5  6  
7  8  9  

Transpose of the matrix:
1  4  7  
2  5  8  
3  6  9  
pranav@pranav-ThinkPad-L420:~/IACSDAssignment/ArraysInC$ 

*/
