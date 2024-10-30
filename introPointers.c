#include <stdio.h>
#include <math.h>

int mult(int a, int b)
{
    return a*b;
}


void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("The values of swapped values are: %d %d\n", *a,*b);
}


int main()
{

    int cat1, cat2;

    printf("Enter 2 integers: ");
    scanf("%d %d", &cat1, &cat2);
    printf("The result is %d\n", mult(cat1, cat2));

    swap(&cat1, &cat2);

    printf("The numbers swapped are %d %d\n", cat1, cat2);
    

}