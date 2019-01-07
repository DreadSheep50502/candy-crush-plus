#include"header.h"
#include"func.h"

ALLEGRO_DISPLAY *display = NULL;/* pointer to display */
int main(int argc, char *argv[ ])
{

    int turn=strtol(argv[1], NULL, 10);
    int target=strtol(argv[2], NULL, 10);
    int cheat=0;
    struct map A[ROW][COL];
    struct player B[10];
    struct player C[10];
    srand(time(NULL));


    ALLEGRO_BITMAP* bitmap = NULL;
    // Initialize Allegro
    al_init();
    al_init_image_addon();
    al_init_primitives_addon();


    // Create allegro display
    display = al_create_display(SCREEN_W, SCREEN_H);

    // Load bitmap
    bitmap = al_load_bitmap("./background.jpg");

    // Draw bitmap
    al_draw_bitmap(bitmap, 0, 0, 0);//Background

    printf("Press any key to continue\n");
    printf("(press A to get a lollipop)\n");
    cheat=check_lollipop();

    //Execution game
    game(cheat,A,B,C,turn,target);

    //Output file
    file_game(B,target);


    // Cleanup
    al_destroy_bitmap(bitmap);



    return 0;
}



