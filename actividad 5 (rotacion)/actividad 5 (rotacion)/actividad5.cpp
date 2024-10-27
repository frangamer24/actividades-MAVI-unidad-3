#include <SFML/window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{

	RenderWindow ventana(VideoMode(800, 600, 32), "rotacion de un sprite");

	Texture textura;

	if (!textura.loadFromFile("cuad_yellow.png"))
	{
		return 0;
	}

	Sprite sprite;
	sprite.setTexture(textura);

	sprite.setOrigin(sprite.getTexture()->getSize().x / 2, sprite.getTexture()->getSize().y / 2);

	sprite.setPosition(400, 300);

	while(ventana.isOpen())
	{
		Event evento;

		while(ventana.pollEvent(evento))
		{
			if (evento.type == Event::Closed)
				ventana.close();
		}

		ventana.clear();

		sprite.rotate(5);

		ventana.draw(sprite);

		ventana.display();

	}
	return 0;
}
