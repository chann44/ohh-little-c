#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 2;
    switch(x) {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        default:
            break;
    }
    return 0;
}
