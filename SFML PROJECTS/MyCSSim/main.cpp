#include <SFML/Graphics.hpp>
//#include "Gun.h"

int main(){
    // render the window size and window title
    sf::RenderWindow window(
        sf::VideoMode({1280, 720}),
        "CS Shooting Simulator"
    );

    window.setMouseCursorVisible(false);

    // Player
    sf::CircleShape player(15.f);
    player.setPosition({625.f, 345.f});

    // Crosshairs
    sf::RectangleShape horizontal({20.f, 2.f});
    sf::RectangleShape vertical({2.f, 20.f});

    //
    //Gun gun;

    while (window.isOpen()){
        while (auto event = window.pollEvent()){
            if (event->is<sf::Event::Closed>()) window.close();
        }

        // get mouse position from the window
        sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

        // horizontal line on crosshair
        horizontal.setPosition({
            static_cast<float>(mousePosition.x - 10),
            static_cast<float>(mousePosition.y - 1)
        });
        // vertical line on crosshair
        vertical.setPosition({
            static_cast<float>(mousePosition.x -1),
            static_cast<float>(mousePosition.y -10)
        });


        window.clear();

        // draw every object
        window.draw(player);
        window.draw(horizontal);
        window.draw(vertical);

        // display all drawings

        window.display();
    }

    return 0;
}