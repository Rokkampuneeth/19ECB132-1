#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1=200,num2=10,div;
    int *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;
    div=*ptr1/ *ptr2;
    printf("Division is: %d",div);
    return 0;
}
