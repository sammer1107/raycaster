#pragma once

#include <stdint.h>

#define PLAYER_SIZE 0.2f

class Game
{
public:
    void Move(int m, int r, float seconds);

    float playerX, playerY, playerA;

    Game();
    ~Game();
};
