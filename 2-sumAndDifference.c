#include <stdio.h>
#include <stdlib.h>

int sunAndDifference()
{
	int int1, int2;
    float float1, float2;

    scanf("%d %d", &int1, &int2);
    scanf("%f %f", &float1, &float2);
    
    printf("%d %d\n", int1+int2, int1-int2);
    printf("%0.1f %0.1f\n", float1+float2, float1-float2);

    return 0;
}
