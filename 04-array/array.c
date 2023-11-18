#include <stdio.h>

int main(int argc, char const *argv[])
{
    int my_array[5];
    int my_array_b[] = {0, 1, 2, 3, 4};

    // size of returns bytes and it diving it a elements by we can get how many items we can store 
    // example if we have 100 bytes and each element can have 10 byte so we can store 10 elements in an a given array
    size_t len = sizeof(my_array) / sizeof(my_array[0]);
    for (size_t i = 0; i < len; i++) {
        my_array[i] = i;
    }

    printf("%d\n", my_array[2]);

    return 0;
}
