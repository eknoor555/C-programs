#include <stdio.h>
#include <stdlib.h>

void enter_matrix(int arr[9][9], int r, int c) //input the matrix
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}
void enter_matrix0(int arr[9][9], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = 0;
        }
    }
}
void printmat(int arr[9][9], int r, int c) //output the entered matrix ]
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[9][9], b[9][9], r1, c1, r2, c2, ch, ans[9][9],ans2[9][9];
    printf("\n Enter no. rows and columns in first matrix: \n");
    scanf("%d %d", &r1, &c1);
    printf("\n Enter no. rows and columns in second matrix: \n");
    scanf("%d %d", &r2, &c2);
    printf("\n Enter the matrix A :\n");
    enter_matrix(a, r1, c1);
    printf("\n Enter the matrix B :\n");
    enter_matrix(b, r2, c2);
    enter_matrix0(ans, 9, 9);
    enter_matrix0(ans2, 9, 9);
    printf("\n ----MENU---- \n 1. Addtion \n 2. Subtraction \n 3. Upper and Lower triangle matix \n 4. Transpose \n 5. Matrix multiplication\n");
    printf("\n Enter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {

    case 1:
        if (r1 == r2 && c1 == c2)
        {
            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c1; j++)
                {
                    ans[i][j] = a[i][j] + b[i][j];
                }
            }
            printf("\n The Addition of matrix A : \n");
            printmat(a, r1, c1);
            printf("\n and B : \n");
            printmat(b, r2, c2);
            printf("\n ANS : \n");
            printmat(ans, r1, c1);
        }
        else
            printf("\n Invalid input.");
        break;

    case 2:
        if (r1 == r2 && c1 == c2)
        {

            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c1; j++)
                {
                    ans[i][j] = a[i][j] - b[i][j];
                }
            }
            printf("\n The Subtraction of matrix A : \n");
            printmat(a, r1, c1);
            printf("\n and B : \n");
            printmat(b, r2, c2);
            printf("\n ANS : \n");
            printmat(ans, r1, c1);
        }
        else
            printf("\n Invalid input.");
        break;
    case 3:
        if (r1 == c1)

        {
            printf("\n The Upper and Lower triangle matrix of  A : \n");
            printmat(a, r1, c1);
            printf("\n is ANS1 : \n");
            for (int i = 0; i < r1; i++)
            {
                for (int j = i; j < c1; j++)
                {
                    ans[i][j] = a[i][j];

                }

            }
            printmat(ans, r1, c1);
            printf("\n and ANS2 : \n");
            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j <= i; j++)
                {
                    ans2[i][j] = a[i][j];

                }

            }
            printmat(ans2, r1, c1);
        }
        else
            printf("\n Invalid input.");
        break;
    case 4:
    {

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                ans[i][j] = a[j][i];
            }
        }
        printf("\n The Transpose of matrix A : \n");
        printmat(a, r1, c1);
        printf("\n ANS : \n");
        printmat(ans, r1, c1);
    }
    break;
    case 5:
        if (c1 == r2)
        {
            for (int i = 0; i < r1; i++)
            {
                for (int j = 0; j < c2; j++)
                {
                    for (int k = 0; k < r2; k++)
                    {
                        ans[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            printf("\n The Matrix Multiplication A : \n");
            printmat(a, r1, c1);
            printf("\n and B : \n");
            printmat(b, r2, c2);
            printf("\n ANS : \n");
            printmat(ans, r1, c2);
        }
        else
            printf("\n Invalid input.");
        break;
    default:
        printf("\n Invalid option. ");
        break;
    }
    return 0;
}
