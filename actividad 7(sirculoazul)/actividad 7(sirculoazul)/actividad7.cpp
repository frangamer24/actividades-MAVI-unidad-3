#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>
using namespace sf;

int main()
{
	RenderWindow ventana(VideoMode(800, 600), "sirculo azul en el medio");

	Texture colorazul;
	colorazul.loadFromFile("C:/SFML/imagenes/CIRCULO AZUL.png");

	Sprite sprite;
	sprite.setTexture(colorazul);
	
	float ancho = ventana.getSize().x;
	float altura = ventana.getSize().y;

	float spriteancho = sprite.getGlobalBounds().width;
	float spritealtura = sprite.getGlobalBounds().height;

	float posicionX = (ancho / 2) - (spriteancho / 2);
	float posicionY = (altura / 2) - (spritealtura / 2);
	sprite.setPosition(posicionX, posicionY);

	while(ventana.isOpen())
	{
		ventana.clear();

		ventana.draw(sprite);

		ventana.display();
	}
	return 0;
}