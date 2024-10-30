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

    int cat1=1, cat2=2;
    int *ptr2cat1;
    ptr2cat1= &cat1;

    printf("Value of *ptr2cat1: %d\n", *ptr2cat1);
    
    
    //scanf("%d %d", &cat1, &cat2);
    //printf("The result is %d\n", mult(cat1, cat2));

    //swap(&cat1, &cat2);

    //printf("The numbers swapped are %d %d\n", cat1, cat2);
    

}