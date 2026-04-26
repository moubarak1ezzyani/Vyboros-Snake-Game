#include "Snake.hpp"

Snake::Snake(int startX, int startY) {
    // Start with a single block head
    body.push_back({startX, startY});
    direction = {1, 0}; // by default : Moving right 
}

void Snake::setDirection(sf::Vector2i newDirection) {
    // Prevent the snake from instantly reversing into itself
    if (body.size() > 1 && direction.x + newDirection.x == 0 && direction.y + newDirection.y == 0) {
        return; 
    }
    direction = newDirection;
}

void Snake::update(int gridWidth, int gridHeight) {
    sf::Vector2i newHead = body.front() + direction;

    // Spec Requirement: Wrap-around borders (non-lethal)
    newHead.x = (newHead.x + gridWidth) % gridWidth;
    newHead.y = (newHead.y + gridHeight) % gridHeight;

    // Negative mod fix : when passing through the left/top walls
    if (newHead.x < 0) newHead.x += gridWidth;
    if (newHead.y < 0) newHead.y += gridHeight;

    body.push_front(newHead);
    body.pop_back(); // Remove the tail block to maintain length
}

void Snake::draw(sf::RenderTarget& target, int tileSize) const {
    sf::RectangleShape segment(sf::Vector2f(tileSize - 1.f, tileSize - 1.f));
    segment.setFillColor(sf::Color::Green);

    for (const auto& part : body) {
        segment.setPosition(sf::Vector2f(part.x * tileSize, part.y * tileSize));
        target.draw(segment);
    }
}