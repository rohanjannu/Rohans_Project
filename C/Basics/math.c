// C code to illustrate
// the use of ceil function.
#include <math.h>
#include <stdio.h>
#define PI 3.14159265
int main()
{
    float val1, val2, val3, val4;

    val1 = 1.6;
    val2 = 1.2;
    val3 = -2.8;
    val4 = -2.3;

    printf("value1 = %.1lf\n", ceil(val1));
    printf("value2 = %.1lf\n", ceil(val2));
    printf("value3 = %.1lf\n", ceil(val3));
    printf("value4 = %.1lf\n", ceil(val4));

    float val1, val2, val3, val4;

    val1 = 1.6;
    val2 = 1.2;
    val3 = -2.8;
    val4 = -2.3;

    printf("Value1 = %.1lf\n", floor(val1));
    printf("Value2 = %.1lf\n", floor(val2));
    printf("Value3 = %.1lf\n", floor(val3));
    printf("Value4 = %.1lf\n", floor(val4));

    int a, b;
    a = 1234;
    b = -344;

    printf("The absolute value of %d is %lf\n", a, fabs(a));
    printf("The absolute value of %d is %lf\n", b, fabs(b));

    double x, ret;
    x = 2.7;

    /* finding log(2.7) */
    ret = log(x);
    printf("log(%lf) = %lf", x, ret);

    x = 10000;

    /* finding value of log1010000 */
    ret = log10(x);
    printf("log10(%lf) = %lf\n", x, ret);


    a = 8.2;
    b = 5.7;
    int c = 3;
    printf("Remainder of %f / %d is %lf\n", a, c,fmod(a, c));
    printf("Remainder of %f / %f is %lf\n", a, b,fmod(a, b));

    printf("Square root of %lf is %lf\n", 300.0,sqrt(300.0));
    printf("Value 3.05 ^ 1.98 = %lf", pow(3.05, 1.98));

    double o, fractpart, intpart;

    o = 8.123456;
    fractpart = modf(o, &intpart);

    printf("Integral part = %lf\n", intpart);
    printf("Fraction Part = %lf \n", fractpart);
x=2;
    printf("The exponential value of %lf is %lf\n", x,exp(x));


    double ret, val;

    x = 60.0;
    val = PI / 180.0;
    ret = cos(x * val);
    printf("The cosine of %lf is %lf degrees\n", x, ret);
    ret = acos(x) * val;
    printf("The arc cosine of %lf is %lf degrees", x, ret);
    ret = tanh(x);
    printf("The hyperbolic tangent of %lf is %lf degrees",x, ret);
    return (0);


}