// WAP to print below pattern using for loop .//

#include <stdio.h>

int main()
 {
    int i, j , n = 5 ;

  
    for (i = 0; i < n; i++) 
    {
       
        for (j = 0; j < i; j++)
        {
            printf("  ");
        }
        for( int k = n - i ; k >= 1 ; k--)
        {
            printf(" %d",k);
        }
      
        printf("\n");
    }
 }
   