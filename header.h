#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include<limits.h>

#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>

// Definition of display size
#define SCREEN_W 640
#define SCREEN_H 480

#define ROW 9
#define COL 9

#define SCORE 5


#ifndef map
struct map
{
    int candy;
    int point;
};
#endif // map

#ifndef player
struct player
{
    int number;
    char name[10];
    int point;
    char time;
};
#endif// player


