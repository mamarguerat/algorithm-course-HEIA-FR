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
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

double ReadOperand(char *string){
    char Chaine[10] /*={0}*/;
    printf("%s", string);
    scanf("%s", Chaine);
    for (unsigned char i = 0; i < 10; i++)
    {
        if(Chaine[i] == 0)
        {
            break;
        }
        if((Chaine[i] < '0' || Chaine[i] > '9') && Chaine[i] != '.'){
            printf("----- ERROR -----\n");
            return 0;
        }
    }
    return atof(Chaine);
}

int main(void){
    char Chaine1[10] /*={0}*/;
    double c1 = ReadOperand("Please enter first operand: ");
    double c2 = ReadOperand("Please enter second operand: ");

    printf("Result of %5f + %5f = %5f\n", c1, c2, c1 + c2);

    return 0;
}