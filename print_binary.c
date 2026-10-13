#include <stdio.h>
#include <stdint.h>


void Print_Binary(uint8_t value_to_convert);

int main()
{
    uint8_t value_to_convert = 170;
    printf("Decimal: %d\n", value_to_convert);
    Print_Binary(value_to_convert);
    return 0;
}



void Print_Binary(uint8_t value_to_convert)
{
    // Start from the Most Significant Bit (bit 7) down to bit 0
    for (int i = 7; i >= 0; i--) {
            printf("%d", (value_to_convert >> i) & 1);

            if(i==4){
                printf("_");
            }

    }
    printf("\n");
}