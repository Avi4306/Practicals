//Modify value stored in other variable using a pointer in c
//Intialize the pointer with the other(A normal variable whose value we have to modify)
#include <stdio.h>

#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Before modification: %d\n", num);
    *ptr = 20;

    printf("After modification: %d\n", num);

    return 0;
}
