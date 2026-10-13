#include "../include/game.h"
#include <stdlib.h>

static Ball balls[MAX_BALLS];

void init_game() {
    for (int i = 0; i < MAX_BALLS; i++) {
        balls[i].x = 100 + i * 20;
        balls[i].y = 100;
        balls[i].color = (i % 4) + 1;
        balls[i].active = true;
    }
}

void update_game() {
    // Logique de déplacement de la chaîne de billes le long d'une courbe
}

void handle_input(SDL_Event *event, bool *quit) {
    if (event->type == SDL_QUIT) {
        *quit = true;
    }
    if (event->type == SDL_MOUSEBUTTONDOWN) {
        // Gérer le tir d'une bille vers la position de la souris
    }
}
