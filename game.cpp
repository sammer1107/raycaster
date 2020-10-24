#include <cmath>
#include <cstdlib>

#include "game.h"
#include "raycaster.h"

void Game::Move(int m, int r, float seconds)
{
    playerA += 0.05f * r * seconds * 25.0f;
    playerX += 0.5f * m * sin(playerA) * seconds * 5.0f;
    playerY += 0.5f * m * cos(playerA) * seconds * 5.0f;

    while (playerA < 0) {
        playerA += 2.0f * M_PI;
    }
    while (playerA >= 2.0f * M_PI) {
        playerA -= 2.0f * M_PI;
    }

    if (playerX < PLAYER_SIZE) {
        playerX = PLAYER_SIZE;
    } else if (playerX > MAP_X - PLAYER_SIZE) {
        playerX = MAP_X - PLAYER_SIZE;
    }
    if (playerY < PLAYER_SIZE) {
        playerY = PLAYER_SIZE;
    } else if (playerY > MAP_Y - PLAYER_SIZE) {
        playerY = MAP_Y - PLAYER_SIZE;
    }
}

Game::Game()
{
    playerX = 23.03f;
    playerY = 6.8f;
    playerA = 5.25f;
}

Game::~Game()
{
}
