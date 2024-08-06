#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t,c;

    printf("give me temperature in F!\n");
    scanf("%f",&t);

    c=(t - 32)/ 1.8;

    printf("the result in Celsius  is %f",c);

    return 0;
}
