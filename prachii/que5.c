//. WAP to print Cube table using the UDF.//
#include<stdio.h>

int cube(int num)
{
    return num* num * num ;
}
int main()
{
    int num ;

    printf("enter the num : ");
    scanf("%d",&num);

    int C = cube(num);

   printf("cube is = %d",C);
}


