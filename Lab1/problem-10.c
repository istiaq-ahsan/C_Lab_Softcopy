#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    printf("Integer Types: \n");
    printf("char: %d to %d(size: %lu bits)\n",CHAR_MIN, CHAR_MAX, sizeof(char)*8);
    printf("int: %d to %d(size: %lu bits)\n",INT_MIN, INT_MAX, sizeof(int)*8);
    printf("short: %d to %d(size: %lu bits)\n",SHRT_MIN, SHRT_MAX, sizeof(short)*8);
    printf("long: %d to %d(size: %lu bits)\n",LONG_MIN, LONG_MAX, sizeof(long)*8);
    printf("\nFloating Point Types: \n");
    printf("float: %e to %e(size: %lu bits)\n",FLT_MIN, FLT_MAX, sizeof(float)*8);
    printf("double: %e to %e(size: %lu bits)\n",DBL_MIN, DBL_MAX, sizeof(double)*8);
    return 0;
}
