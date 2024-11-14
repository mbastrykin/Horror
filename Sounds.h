#pragma once
#include <SFML/Audio.hpp>

class Music {
public:
	Music(const std::string& File) {
		music.openFromFile("Sounds/Music/" + File);
		music.play();
	}
private:
		sf::Music music;
};

class Sound{
public:
	Sound(const std::string& File) {
		buffer.loadFromFile("Sounds/Sounds/" + File);
		sound.setBuffer(buffer);
		sound.play();
	}
private:
	sf::SoundBuffer buffer;
	sf::Sound sound;
};
