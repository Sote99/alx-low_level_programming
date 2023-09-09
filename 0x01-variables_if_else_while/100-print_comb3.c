#include <stdio.h>

int main() {
    int ones, tens; // '0'; '0'; 
    
    for (tens = '0'; tens <= '9'; tens++) {
        for (ones = '0'; ones <= '9'; ones++) {
            if (tens < ones) {
                putchar(tens);
                putchar(ones);
                if (tens != '8' || ones != '9') {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    
    putchar('\n');
    
    return 0;
}

