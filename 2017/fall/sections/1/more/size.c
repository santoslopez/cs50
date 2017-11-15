// Prints sizes of types

#include <cs50.h>
#include <stdio.h>

void print_size(string type, size_t size)
{
    printf("Size of %s is %zu\n", type, size);
}

int main(void)
{
    print_size("char", sizeof(char));
    print_size("short", sizeof(short));
    print_size("int", sizeof(int));
    print_size("long", sizeof(long));
    print_size("long long", sizeof(long long));
    print_size("float", sizeof(float));
    print_size("double", sizeof(double));
    print_size("string", sizeof(string));
}
