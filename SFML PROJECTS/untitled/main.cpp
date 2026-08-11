// Simple and Fast Multi-media Library

#include <SFML/Graphics.hpp>

int main(){
    //sf::RenderWindow window(sf::VideoMode({200, 200}, "SFML works!");
    //sf::CircleShape shape(100.f);
    //shape.setFillColor(sf::Color::Green);e

    sf::RenderWindow window(sf::VideoMode({200,200}), "Square");
    sf::RectangleShape shape{};
    shape.setFillColor(sf::Color::Red);

    while (window.isOpen()){
        while (const std::optional event = window.pollEvent()){
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
}