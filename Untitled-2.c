#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("You entered: %s\b", str);

    return 0;
}
