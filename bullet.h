#pragma once
#include "settings.h"

class Bullet {
private:
	sf::Sprite sprite;
	sf::Texture texture;
	float speedx, speedy;

public:
	Bullet(sf::Vector2f playerPos,int playerAngle) {
		texture.loadFromFile(bullet_file_name);
		sprite.setTexture(texture);
		sprite.setPosition(playerPos);
		sprite.setRotation(playerAngle);
		speedx = sin((playerAngle * pi) / 180) * bullet_speed;
		speedy = -cos((playerAngle * pi) / 180) * bullet_speed;
	}
	void update() {
		sprite.move(speedx, speedy);
	}
	sf::Sprite& getSprite() { return sprite; }
};