// WAP to find Maximum number from a matrix in 1D Array //

#include <stdio.h>

int main()

 {

    int rows, cols , size ,  array[20] , i , max ;
    
  
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    
    size = rows * cols;

    printf("Enter the elements of the matrix:\n");

    for ( i = 0; i < size; i++)
    {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    
  
     max = array [0]; 

    for ( i = 1; i < size; i++) 
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    
   
    printf("The maximum element in the matrix is: %d\n", max);
    
   
}