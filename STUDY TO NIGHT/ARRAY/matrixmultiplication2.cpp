#include<stdio.h>
int main()
{
    int n, m, i, j, p, q, k, a[10][10], b[10][10], pro[10][10],sum = 0;
    printf("\nEnter the number : \n\n");
    scanf("%d%d", &m, &n);

    printf("\nEnter the %d elements of the first matrix: \n\n", m*n);
    for(i= 0; i < m; i++)   // to iterate the rows
        for(j = 0; j < n; j++)   // to iterate the columns
            scanf("%d", &a[i][j]);

    printf("\nEnter the number of rows and columns of the first matrix: \n\n");
    scanf("%d%d", &p, &q);
    if(n != p){
        printf("Matrices with the given order cannot be multiplied with each other.\n\n");
    }

    else    // matrices can be multiplied
    {
        printf("\nEnter the %d elements of the second matrix: \n\n",m*n);

        for(i = 0; i < p; i++)  { // to iterate the rows
            for(j = 0; j < q; j++){   // to iterate the columns
                scanf("%d", &b[i][j]);
            }
        }
        // printing the first matrix
        printf("\n\nThe first matrix is: \n\n");
        for(i= 0; i < m; i++)   // to iterate the rows
        {
            for(j = 0; j < n; j++)   // to iterate the columns
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        // printing the second matrix
        printf("\n\nThe second matrix is: \n\n");
        for(i = 0; i < p; i++)   // to iterate the rows
        {
            for(j = 0; j< q; j++)   // to iterate the columns
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }
        for(i = 0; i< p; i++)   // to iterate the rows
        {
            for(j = 0; j < q; j++)   // to iterate the columns
            {
                for(k = 0; k < p; k++)
                {
                    sum = sum + a[i][k]*b[k][j];
                }
            pro[i][j] = sum;    // resultant element of pro after multiplication
            sum = 0;    // to find the next element from scratch
            }
        }
        printf("\n\nThe multiplication of the two entered matrices is: \n\n");
        for(i = 0; i < m; i++)   // to iterate the rows
        {
            for(j = 0; j < q; j++)   // to iterate the columns
            {
                printf("%d\t", pro[i][j]);
            }
            printf("\n"); // to take the control to the next row
        }
    }
    return 0;
}

