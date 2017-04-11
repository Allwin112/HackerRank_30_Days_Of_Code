#include <stdio.h>
#include <conio.h>

int main() {
    // Declare a variable named 'input_string' to hold our input.
    char input_string[105];

    // Read a full line of input from stdin and save it to variable - input_string.
    scanf("%[^\n]", input_string);

    printf("Hello, World.\n");

    printf("%s", input_string);

    return 0;
}
