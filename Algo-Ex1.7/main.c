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
#include <time.h>
#include <limits.h>

printDateTime(char *string, struct tm date)
{
    printf("%s\t: ", string);
    printf("%02d.%02d.%04d %02d:%02d:%02d\n",
           date.tm_mday,
           date.tm_mon,
           date.tm_year + 1900,
           date.tm_hour,
           date.tm_min,
           date.tm_sec);
}

int main(void)
{
    time_t const myTime = time(NULL);
    struct tm const date = *localtime(&myTime);
    printDateTime("a) current date and time is", date);

    time_t const maxTime = ULONG_MAX;
    struct tm const maxDate = *localtime(&maxTime);
    printDateTime("b) overflow date and time is", maxDate);
    return 0;
}