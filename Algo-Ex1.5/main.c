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

unsigned char numbers[10] = {28, 3, 45, 1, 5, 17, 33, 32, 42, 2};

/**
 * @brief Print a comment and all the values of a table
 * 
 * @param string The string printed befor the ":" (comment)
 * @param table The table to print
 * @param n The number of values
 */
void printTable(unsigned char string[], unsigned char table[], unsigned char n)
{
    printf("%s\t:", string);
    for (unsigned char i = 0; i < n; i++)
    {
        printf(" %3i", table[i]);
    }
    printf("\n");
}

/**
 * @brief Perform a bubble sort on the input table
 * 
 * @param pTable The table to sort
 * @param n The number of values
 * @return unsigned char The number of permutations
 */
unsigned char BubbleSort(unsigned char *pTable, unsigned char n)
{
    unsigned char s;
    unsigned char permutations;
    do
    {
        s = 0;
        for (unsigned char i = 1; i < n; i++)
        {
            if(pTable[i] < pTable[i - 1])
            {
                unsigned char swap = pTable[i];
                pTable[i] = pTable[i - 1];
                pTable[i - 1] = swap;
                permutations++;
                s++;
            }
        }
    } while (s != 0);
    return permutations;
}

void main(void)
{
    unsigned char numbersSize = sizeof(numbers) / sizeof(numbers[0]);
    printTable("The unsorted numbers", numbers, numbersSize);
    unsigned char permutations = BubbleSort(numbers, numbersSize);
    printTable("The sorted numbers", numbers, numbersSize);
    printf("The number of required permutations to sort the table: %i", permutations);

    while(1);
}