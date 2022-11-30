#include <stdio.h>
#include <math.h>

float signal(float x, float y)
{
  float part_1 = log(pow(x, 3))+tan(y)+pow(y+x,3);
  float part_2 = x * sin(y+1.6);
  float part_3 = 177 * pow(x,2);

    return part_1 - part_2 / part_3;
}

int main()
{
    float x = 4.123, y = 2.395;
    float b = signal (x, y);

    printf("the result is %f\n", b);

    return 0;
}