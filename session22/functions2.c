#include <stdio.h>

float div (float a, float b)
{
    float answer;
    answer = a / b;
    return answer;
}

int main () 
{
    int y = 2;
    float z = div(8, y); // calling our new function

    printf ("The div of 8 and %d is %f\n", y, z);
}