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

#include <stdio.h>
#include <stdbool.h>

char fruits[][10] = {
    "pomme    ",
    "poire    ",
    "banane   ",
    "fraise   ",
    "mangue   ",
    "papaye   ",
    "tomate   ",
    "framboise",
    "cerise   ",
    "groseille",
    "orange   "};

int main(void)
{
    for (unsigned char i = 0; i < sizeof(fruits) / sizeof(fruits[0]); i++)
    {
        printf("Le fruit %i est: \t%s - ", i, fruits[i]);
        printf("%c%s\n", toupper(fruits[i][0]), fruits[i] + 1);
    }

    unsigned char var1 = 12;
    unsigned char var2 = 10;
    printf("var1 = 12\tvar2 = 10\n");
    printf("OR\t%i\n", var1 | var2);
    printf("AND\t%i\n", var1 & var2);
    printf("XOR\t%i\n", var1 ^ var2);
    printf("INV\t%i\n", ~var1);

    printf("OR\t%s\n", var1 || var2 ? "true" : "false");
    printf("AND\t%s\n", var1 && var2 ? "true" : "false");
    printf("XOR\t%s\n", ~(var1 == var2) ? "true" : "false");
    printf("EQUAL\t%s\n", var1 == var2 ? "true" : "false");
    printf("N-EQUAL\t%s\n", var1 != var2 ? "true" : "false");
    printf("GREATER\t%s\n", var1 > var2 ? "true" : "false");
    printf("SMALLER\t%s\n", var1 < var2 ? "true" : "false");

    return 0;
}