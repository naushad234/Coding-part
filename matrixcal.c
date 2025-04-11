#include <stdio.h>

#define MAX 10

void inputMatrix(int matrix[MAX][MAX], int row, int col) {
    printf("Enter elements of the matrix (%d x %d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int row, int col) {
    printf("Resulting matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int row1, int col1, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
    int row1, col1, row2, col2, choice;
    char cont;

    do {
        printf("Matrix Calculator\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n");
        printf("Choose an operation: ");
        scanf("%d", &choice);

        if (choice == 1 || choice == 2) {
            printf("Enter rows and columns for matrices: ");
            scanf("%d %d", &row1, &col1);
            row2 = row1;
            col2 = col1;
        } else if (choice == 3) {
            printf("Enter rows and columns for first matrix: ");
            scanf("%d %d", &row1, &col1);
            printf("Enter rows and columns for second matrix: ");
            scanf("%d %d", &row2, &col2);
            if (col1 != row2) {
                printf("Matrix multiplication is not possible with these dimensions.\n");
                continue;
            }
        } else {
            printf("Invalid choice!\n");
            continue;
        }

        printf("Enter first matrix:\n");
        inputMatrix(A, row1, col1);
        printf("Enter second matrix:\n");
        inputMatrix(B, row2, col2);

        switch (choice) {
            case 1:
                addMatrices(A, B, result, row1, col1);
                break;
            case 2:
                subtractMatrices(A, B, result, row1, col1);
                break;
            case 3:
                multiplyMatrices(A, B, result, row1, col1, col2);
                break;
        }

        printMatrix(result, (choice == 3) ? row1 : row1, (choice == 3) ? col2 : col1);
        
        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &cont);
    } while (cont == 'y' || cont == 'Y');
    
    return 0;
}
