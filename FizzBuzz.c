#include <stdio.h>

int main() {
    int i;
    char buf[3];

    puts("A FizzBuzz implementation in C by Aron Dennen (c)2014\n\n");

    for (i = 1; i <= 100; i++)
        puts( ( (i % 3) && (i % 5) ) ? snprintf(buf, 3, "%d", i), buf : !(i % 3) ?
            !(i % 5) ? "FizzBuzz" : "Fizz" : "Buzz");

    return 0;
}
