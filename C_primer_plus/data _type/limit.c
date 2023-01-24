#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
    printf("The minvalue of char is %d\n", SCHAR_MIN);
    printf("The maxvalue of signedchar is %d\n", SCHAR_MAX);
    printf("The maxvalue of unsignedchar is %d\n", UCHAR_MAX);
    printf("The maxvalue of signedshort is %hd\n", SHRT_MAX);
    printf("The maxvalue of unsignedshort is %d\n", USHRT_MAX);
    printf("The maxvalue of signedint is %d\n", INT_MAX);
    printf("The maxvalue of unsignedint is %u\n", UINT_MAX);
    printf("The maxvalue of long is %ld\n", LONG_MAX);
    printf("The maxvalue of unsignedlong is %lu\n", ULONG_MAX);
    printf("The maxvalue of unsignedfloat is %e\n", FLT_MAX);
    printf("The maxvalue of unsigneddouble is %e\n", DBL_MAX);
    
}