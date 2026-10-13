#include "../include/game.h"

void render_game(SDL_Renderer *renderer) {
    // Effacer l'écran en noir
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    // Dessiner les billes (sous forme de cercles simples pour l'exemple)
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_Rect ball_rect = {400, 300, 20, 20};
    SDL_RenderFillRect(renderer, &ball_rect); // Représentation basique

    SDL_RenderPresent(renderer);
}
