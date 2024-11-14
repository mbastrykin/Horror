#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class Background {
public:
    Background(const std::string& File,float windowWidth, float windowHeight,float x = 0, float y =0) {
        
        texture.loadFromFile("Image/background/" + File);
        sprite.setTexture(texture);

        float scaleX = windowWidth / texture.getSize().x;
        float scaleY = windowHeight / texture.getSize().y;
        
        float upScaleX;
        float upScaleY;

        sprite.setScale(scaleX, scaleY);
        sprite.setPosition(x, y);
    }

    void draw(sf::RenderWindow& window) {
        window.draw(sprite);
    }

private:
    sf::Texture texture;
    sf::Sprite sprite;
};
