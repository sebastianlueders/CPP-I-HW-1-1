#include <stdlib.h>
#include <stdio.h>


/*
Since C++ introduced the concept of classes (to provide a way to implement access control for variables), the keyword 'class' can be used as a variable name in C, 
but not in C++ since 'class' must be a reserved keyword.

*/

int main() 
{
    int class = 42;
    printf("class value: %d \n", class);
    return 0;
}