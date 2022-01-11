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

typedef struct coordinates
{
    short x;
    short y;
} coordinates_t;

typedef struct rect
{
    coordinates_t coord[4];
    int (*area)(const struct rect *);
} rect_t;

int Area(rect_t rect)
{
    return (rect.coord[0].x - rect.coord[2].x) * (rect.coord[3].y - rect.coord[1].y);
}

void PrintRectangleInfo(rect_t rect)
{
    printf("[%2d,%2d][%2d,%2d][%2d,%2d][%2d,%2d]\n",
          rect.coord[0].x,
          rect.coord[0].y,
          rect.coord[1].x,
          rect.coord[1].y,
          rect.coord[2].x,
          rect.coord[2].y,
          rect.coord[3].x,
          rect.coord[3].y);
}

void PrintRectangleAddress(rect_t *rect)
{
    printf("[%#010x,%#010x][%#010x,%#010x][%#010x,%#010x][%#010x,%#010x]\n",
          &rect->coord[0].x,
          &rect->coord[0].y,
          &rect->coord[1].x,
          &rect->coord[1].y,
          &rect->coord[2].x,
          &rect->coord[2].y,
          &rect->coord[3].x,
          &rect->coord[3].y);
}

void main(void)
{
    rect_t rectangles[3] = {
        {{{0, 0}, {0, 10}, {10, 10}, {10, 0}}, &Area},
        {{{0, 5}, {0, 10}, {5, 10}, {5, 5}}, &Area},
        {{{10, 10}, {10, 15}, {20, 15}, {20, 10}}, &Area}
    };
    printf("b)\n");
    for (unsigned char i = 0; i < 3; i++)
    {
        printf("Rectangle %i points values are \t: ", i+1);
        PrintRectangleInfo(rectangles[i]);
    }
    printf("c)\n");
    for (unsigned char i = 0; i < 3; i++)
    {
        printf("Rectangle %i points addresses are \t: ", i+1);
        PrintRectangleAddress(&rectangles[i]);
    }
    printf("d)\n");
    for (unsigned char i = 0; i < 3; i++)
    {
        printf("Rectangle %i computes area is \t: ", i+1);
        printf("%i\n", rectangles[i].area(&rectangles[i]));
    }

    while(1);
}