/* If the function was declared with a type before its name, it must perform the return statement equipped with an expression.

We will write a simple program helping us to solve a trigonometry problem for right triangles. The program will calculate the length of the hypotenuse using the lengths of the legs. This should be done:

ask the user for the length of the first leg and square it
ask the user for the length of the second leg and square it
the sum of both values should be square rooted using the sqrtf() function (pay attention math.h header file included at the top of our source)*/

#include <math.h>
#include <stdio.h>

int main(void) {
    float a, b, a_sqr, b_sqr, c;

    printf("A?\n");
    scanf("%f", &a);
    a_sqr = a * a;
    printf("B?\n");
    scanf("%f", &b);
    b_sqr = b * b;
    c = sqrtf(a_sqr +  b_sqr);
    printf("The length of the hypotenuse is: %f\n", c);
    return 0;
}

