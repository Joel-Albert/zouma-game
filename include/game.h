#ifndef GAME_H
#define GAME_H

#include <SDL2/SDL.h>
#include <stdbool.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define MAX_BALLS 50

typedef struct {
    float x, y;
    int color; // 1: Rouge, 2: Vert, 3: Bleu, 4: Jaune
    bool active;
} Ball;

void init_game();
void update_game();
void render_game(SDL_Renderer *renderer);
void handle_input(SDL_Event *event, bool *quit);

#endif
