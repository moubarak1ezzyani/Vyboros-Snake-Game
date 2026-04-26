#pragma once
#include <SFML/Graphics.hpp>
#include "Snake.hpp"

class Game {
public:
    Game();
    void run();

private:
    void processEvents();
    void update(sf::Time deltaTime);
    void render();

    sf::RenderWindow window;
    Snake snake;

    int tileSize = 20;
    int gridWidth = 40;  // 40 tiles * 20 px = 800 width
    int gridHeight = 30; // 30 tiles * 20 px = 600 height

    sf::Time timeSinceLastMove;
    sf::Time moveInterval; // Controls the snake's speed
};