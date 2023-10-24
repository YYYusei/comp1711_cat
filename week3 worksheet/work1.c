#include <stdio.h>


int circleArea (int r)
{
    int answer;
    answer = r*r*3.14;
    return answer;
}

int main()
{
    float R;
    printf("enter the radius of cirecle");
    scanf("%f",&R);
    float A = circleArea(R);
    printf ("The area of the circle  is %f\n", A);
}
