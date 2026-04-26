#include "Game.hpp"

Game::Game() 
    : window(sf::VideoMode({800, 600}), "Vyboros Snake - Movement"),
      snake(20, 15), // Spawn in the middle of the grid
      moveInterval(sf::seconds(0.1f)) { // Snake moves every 0.1 seconds
    timeSinceLastMove = sf::Time::Zero;
}

void Game::run() {
    sf::Clock clock;
    while (window.isOpen()) {
        sf::Time deltaTime = clock.restart();
        processEvents();
        update(deltaTime);
        render();
    }
}

void Game::processEvents() {
    while (const auto event = window.pollEvent()) {
        if (event->is<sf::Event::Closed>()) {
            window.close();
        } 
        // SFML 3 : Modern input handling
        else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>()) {
            if (keyPressed->code == sf::Keyboard::Key::Up || keyPressed->code == sf::Keyboard::Key::W) {
                snake.setDirection({0, -1});
            } else if (keyPressed->code == sf::Keyboard::Key::Down || keyPressed->code == sf::Keyboard::Key::S) {
                snake.setDirection({0, 1});
            } else if (keyPressed->code == sf::Keyboard::Key::Left || keyPressed->code == sf::Keyboard::Key::A) {
                snake.setDirection({-1, 0});
            } else if (keyPressed->code == sf::Keyboard::Key::Right || keyPressed->code == sf::Keyboard::Key::D) {
                snake.setDirection({1, 0});
            }
        }
    }
}

void Game::update(sf::Time deltaTime) {
    timeSinceLastMove += deltaTime;
    
    // Only move the snake when the interval has passed
    if (timeSinceLastMove >= moveInterval) {
        snake.update(gridWidth, gridHeight);
        timeSinceLastMove -= moveInterval;
    }
}

void Game::render() {
    window.clear(sf::Color::Black);
    snake.draw(window, tileSize);
    window.display();
}