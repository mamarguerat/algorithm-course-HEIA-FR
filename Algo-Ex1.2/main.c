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

unsigned long long factRecursive(unsigned int x);
unsigned long long factLoop(unsigned int x);

void main(void)
{
    for (unsigned int i = 0; i <= 20; i++)
    {
        printf("Recursive\t%i!\t = %llu\n", i, factRecursive(i));
        printf("Loop\t\t%i!\t = %llu\n", i, factLoop(i));
    }
    while(1);
}

/**
 * @brief Compute the factorial of the parameter using the recursive method
 * 
 * @param x integer between 0 and 20
 * @return unsigned long long 
 */
unsigned long long factRecursive(unsigned int x)
{
    if(x == 0) return 1;
    else return factRecursive(x - 1) * x;
}

/**
 * @brief Compute the factorial of the parameter using a loop
 * 
 * @param x integer between 0 and 20
 * @return unsigned long long 
 */
unsigned long long factLoop(unsigned int x)
{
    unsigned long long ret = 0;
    for (unsigned int i = 0; i <= x; i++)
    {
        if(i == 0)
            ret = 1;
        else
            ret = ret * i;
    }
    return ret;
}