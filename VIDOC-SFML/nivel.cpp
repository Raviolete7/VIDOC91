#include <SFML/Graphics.hpp>
#include "juego.h"
#include "nivel.h"
using namespace sf;

void nivel::nivel_pantalla(int x, int y, char *titulo){
pantalla = new RenderWindow(sf::VideoMode(x,y), titulo);
}

void nivel::cargar_imagenes(int difi, int vida){
escena = new Texture;
escenografia = new Sprite;
escena->loadFromFile("niveluno.png");
escenografia->setTexture(*escena);
}
void nivel::imprimir_imagenes(){
while(true){
pantalla->clear();
pantalla->draw(*escenografia);
pantalla->display();
}}

void nivel::setEscenografia(){
switch(dificultad){
case 1:
escena = new Texture;
escenografia = new Sprite;
escena->loadFromFile("niveluno.png");
escenografia->setTexture(*escena);
break;


case 3:
escena = new Texture;
escenografia = new Sprite;
escena->loadFromFile("niveluno.png");
escenografia->setTexture(*escena);
break;

case 4:
escena = new Texture;
escenografia = new Sprite;
escena->loadFromFile("niveluno.png");
escenografia->setTexture(*escena);
break;
}

}
void nivel::setSalud(int vida){
switch(vida/10){
case 0:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 1:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 2:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 3:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 4:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 5:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 6:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 7:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 8:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 9:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("mapa.png");
salud->setTexture(*barra);
break;

case 10:
barra = new Texture;
salud = new Sprite;
barra->loadFromFile("IU.png");
salud->setTexture(*barra);
break;

}


}
void nivel::setDificultad(int difi){
dificultad = difi;
}

