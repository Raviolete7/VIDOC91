#include <SFML/Graphics.hpp>
#include "Casa.h"
using namespace sf;

void Casa::setcasita(){
home = new Texture;
casita = new Sprite;
home->loadFromFile("puerta1.png");
casita->setTexture(*home);
casita->setPosition(55,329);

}
Sprite &Casa::getcasita(){
return *casita;
}

