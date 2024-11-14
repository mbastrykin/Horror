#pragma once
#include <SFML/Graphics.hpp>
#include "backGround.h"
#include "objectGame.h"
#include "Sounds.h"



sf::RenderWindow window(sf::VideoMode(1920, 1080), "huy", sf::Style::Fullscreen);

void SwitchCam() {
    securityRoom.draw(window);
    /* if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
         securityRoom.draw(window);
     }*/
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1)) {
        cam1.draw(window);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2)) {
        cam2.draw(window);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3)) {
        cam3.draw(window);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4)) {
        cam4.draw(window);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5)) {
        cam5.draw(window);
    }
}


int Render(){
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
                window.close();
            }
        }

         window.clear();
         SwitchCam();
         window.display();
    }

    return 0;
};

int game() {
    Render();
    return 0;
}
