#include<stdio.h>
#include<time.h>
/*struct tm {
    // seconds,  range 0 to 59
    int tm_sec;

    // minutes, range 0 to 59
    int tm_min;

    // hours, range 0 to 23
    int tm_hour;

    // day of the month, range 1 to 31
    int tm_mday;

    // month, range 0 to 11
    int tm_mon;

    // The number of years since 1900
    int tm_year;

    // day of the week, range 0 to 6
    int tm_wday;

    // day in the year, range 0 to 365
    int tm_yday;

    // daylight saving time
    int tm_isdst;
};*/

int main() {
    
    // Structure to store local time
    struct tm* ptr;
    
    // Variable to store current time
    time_t t;
    
    // Get current time
    t = time(NULL);
    
    // Convert it to local time
    ptr = localtime(&t);
    
    // Get the string of local time
    printf("%s", asctime(ptr));

    ptr = gmtime(&t);
    printf("%s", asctime(ptr));

    time_t start, end;
    
    // Record start time
    start = time(NULL);
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Sum of %d and %d is %d\n",
           a, b, a + b);
           
    // Record endtime
    end = time(NULL);
    
    // Print time difference
    printf("Time taken to print sum is %.2f seconds",
           difftime(end, start));
           
    return 0;
}