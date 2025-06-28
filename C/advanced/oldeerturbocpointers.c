#include <stdio.h>
//will only work in older systems or turbo c compilers

int main() {
  
	// Declaring a near pointer
	int near* ptr;

	// Size of the near pointer
	printf("Size: %d bytes", sizeof(ptr));

    int far* ptr1;

	// Size of far pointer
	printf("Size: %d bytes", sizeof(ptr1));


    int huge* ptr2;

    // size of huge pointer
    printf("Size: %d bytes", sizeof(ptr2));
	return 0;
}