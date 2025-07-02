// C program to demonstrate use of Bit-fields
#include <stdio.h>

// Space optimized representation of the date
struct date {
    // d has value between 0 and 31, so 5 bits
    // are sufficient
    int d : 5;

    // m has value between 0 and 15, so 4 bits
    // are sufficient
    int m : 4;

    int y;
};
struct test {
    unsigned int x : 5;
    unsigned int y : 5;
    unsigned int z;
};
int main()
{
    printf("Size of date is %lu bytes\n",
           sizeof(struct date));
    struct date dt = { 31, 12, 2014 };
    printf("Date is %d/%d/%d", dt.d, dt.m, dt.y);  //outbit will be -1/-4/2014 since the value stored will be 11111 but since 1st bit MSB is signed it denotes negative so the overflow valueis printed
   
   // C program to demonstrate that the pointers cannot point
// to bit field members
    struct test t;

    // Uncommenting the following line will make
    // the program compile and run
    //printf("Address of t.x is %p", &t.x);

    // The below line works fine as z is not a
    // bit field member
    printf("Address of t.z is %p", &t.z);
 
    return 0;
}