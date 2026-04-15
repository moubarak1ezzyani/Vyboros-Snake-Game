#include <SFML/Graphics.hpp>

int main() {
    // SFML 3 requires {} for VideoMode dimensions
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Vyboros Snake - SFML 3 Works!");

    while (window.isOpen()) {
        // SFML 3 uses a modern std::optional approach for events
        while (const auto event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear(sf::Color::Black);
        window.display();
    }

    return 0;
}