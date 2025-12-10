#include <stdio.h>
#include <string.h>   // needed for strlen

int main() {
    char s1[] = "dhaka";

    printf("The city name is: %s\n", s1);
    printf("Length of the city name is: %lu\n", strlen(s1));

    return 0;
}
