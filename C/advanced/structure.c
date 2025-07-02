#include <stdio.h>

struct A {
    int i;
    struct {
        int ii;
        char cc;
    };
};

int main() {
  
    // Define and name the anonymous union
    struct A a;
  	a.i = 1;
  	a.ii = 20;
    a.cc = 'C';
    
    printf("%d %d %c", a.i, a.ii, a.cc);

    return 0;
}