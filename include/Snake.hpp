#pragma once
#include <SFML/Graphics.hpp>
#include <deque>

class Snake {
public:
    Snake(int startX, int startY);
    
    // Snake's position : grid dimensions -> the wrap-around logic
    void update(int gridWidth, int gridHeight);
    
    // Snake's direction : preventing 180-degree self-collisions
    void setDirection(sf::Vector2i newDirection);
    
    // Renders the snake : The RenderTarget is passed by reference - NFR Standard
    void draw(sf::RenderTarget& target, int tileSize) const;

private:
    std::deque<sf::Vector2i> body;
    sf::Vector2i direction;
};