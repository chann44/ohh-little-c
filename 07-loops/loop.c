#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 1;

    for(int i =0; i <= 3; i++) {
        printf("%d\n", i);

    }

    while (x < 10)
    {
        printf("%d\n", x++);

    }
    
    return 0;
}
