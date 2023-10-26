#include "main.h"
/**
 * binary_to_unit - function that take one parametter 
 * @b: argument 
 * Return: decimal representation of abinary number
 *
*/
unsigned int binary_to_uint(const char *b) {
    int decimal = 0;
    int length = strlen(b);

    for (int i = length - 1, j = 0; i >= 0; i--, j++) {
        if (b[i] == '1') {
            decimal += (1 << j); 
        }
    }

    return decimal;
}
