#include <SFML/Graphics.hpp>

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const float SQUARE_SIZE = 100.0f;
const float ROTATION_SPEED = 0.04f;

int main()
{
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Graphic Screensaver");

    sf::RectangleShape square1(sf::Vector2f(SQUARE_SIZE*1.5, SQUARE_SIZE*1.5));
    square1.setFillColor(sf::Color::Red);
    square1.setOrigin(SQUARE_SIZE / 0.5f, SQUARE_SIZE / 0.5f);
    square1.setPosition(WINDOW_WIDTH / 2.0f, WINDOW_HEIGHT / 2.0f);

    sf::RectangleShape square2(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
    square2.setFillColor(sf::Color::Blue);
    square2.setOrigin(SQUARE_SIZE / 2.0f, SQUARE_SIZE / 2.0f);
    square2.setPosition(WINDOW_WIDTH / 2.0f, WINDOW_HEIGHT / 2.0f);
    square2.setRotation(45);


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        square1.rotate(ROTATION_SPEED);
        square2.rotate(-ROTATION_SPEED);

        window.clear();
        window.draw(square1);
        window.draw(square2);
        window.display();
    }

    return 0;
}
