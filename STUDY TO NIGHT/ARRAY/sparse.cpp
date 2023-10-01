#include<stdio.h>

int main()
{
    int i,j, matrix[3][3],counter=0;
    
    for(i = 0; i < 3; i++)   // to iterate the rows
    {
        for(j = 0; j < 3; j++)   // to iterate the columns
        {
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] == 0)
            counter++;  // same as counter=counter +1
        }
    }
printf("the entered matrix is :\n");

       for(i = 0; i < 3; i++)   // to iterate the rows
    {
        for(j = 0; j < 3; j++)   // to iterate the columns
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
if(counter>(i*j)/2){
    printf("the entered matrix is spare matrix");
}
else{
    printf("the entered matrix is not spare matrix");
}
return 0;
}
   