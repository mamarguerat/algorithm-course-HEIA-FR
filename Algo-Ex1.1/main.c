/*
  _  _ ____ _   _       ____ ___ 
 | || | ___| | / \  ___| ___| _ \
 | __ | __|| |/ - \|___| __||   /
 |_||_|____|_|_/ \_\   |_|  |_|_\
  __  __   _   ___ _____ _ __  _  
 |  \/  | / \ | _ \_   _| |  \| |
 | |\/| |/ - \|   / | | | | | | |
 |_|  |_|_/ \_\_|_\ |_| |_|_|\__|                               
  __  __   _   ___ ___ _ _ ____ ___   _  _____
 |  \/  | / \ | _ \ __| | | ___| _ \ / \|_   _|
 | |\/| |/ - \|   /|_ \ | | __||   // - \ | |  
 |_|  |_|_/ \_\_|_\___/___/____|_|_\_/ \_\|_|  

*/

/* 
 *  Taille  │ <stdint.h> │ nom c              │ Valeurs
 * ─────────┼────────────┼────────────────────┼─────────────────
 *  8  bits │ uint8_t    │ unsigned char      │ 0     ->  255
 *          │  int8_t    │ char               │ -128  ->  127
 *  16 bits │ uint16_t   │ unsigned short     │ 0     ->  65536
 *          │  int16_t   │ short              │ -32768->  32767
 *  32 bits │ uint32_t   │ unsigned int long  │ 
 *          │  int32_t   │ int long           │ 
 *  64 bits │ uint64_t   │ unsigned long long │ 
 *          │  int64_t   │ long long          │ 
 * 
 * IEEE754   float   32 bits
 *           double  64 bits
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    //Exercice a, b, c
    unsigned char var1 = 5, var2 = 10;
    unsigned char sum = var1 + var2;

    printf("Hello world\n");
    printf("Sum is :%d \n", sum);
    printf("Difference is :%d \n", var1 - var2);
    printf("Mean is :%d \n", sum / 2);

    //Exercice d
    unsigned char b = 5;
    int i = 9;
    double d = 5.2;
    short s = 8;
    float f = 2.5;

    double result1 = d / 2;
    short result2 = s * 4;
    bool result3 = (b + s) > (5 * f);
    float result4 = i / 4 + d;
    float result5 = 1 / 3;
    unsigned char result6 = b & 6;

    //Ecercice e
    int j = 7, k = 4;
    bool a = true, b2 = true;
    printf("Expression 1: a=%i b=%i j=%i k=%i\n", a, b2, j, k);

    b2 = a != true;
    printf("Expression 2: a=%i b=%i j=%i k=%i\n", a, b2, j, k);

    a = a && b2 && true;
    printf("Expression 3: a=%i b=%i j=%i k=%i\n", a, b2, j, k);

    a = 7 >= 3 | 7 == 3;
    printf("Expression 4: a=%i b=%i j=%i k=%i\n", a, b2, j, k);

    b2 = k++ >= 5 || j-- == 7;
    printf("Expression 5: a=%i b=%i j=%i k=%i\n", a, b2, j, k);

    k = k++ + ++j;
    printf("Expression 6: a=%i b=%i j=%i k=%i\n", a, b2, j, k);

    return 0;
}
