#include <stdio.h>

int double_number_a(int x) {
    return 2 * x;
}

// reeving mem address 
// changing the value of the passed address
void double_number_b(int* x) {
    *x = *x * 2;
}

int main(int argc, char const *argv[])
{
    int num = 4;
    printf("%d\n", double_number_a(num));
    printf("%d\n", num);
    // passing mem address of num
    double_number_b(&num);
    printf("%d\n", num);
    return 0;
}
