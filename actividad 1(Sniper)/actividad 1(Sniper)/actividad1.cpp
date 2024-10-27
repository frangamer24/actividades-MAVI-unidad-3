#include <SFML/window.hpp>
#include <SFML/graphics.hpp>
using namespace sf;

Texture circulo;
Texture textura;
Sprite sprite;
Sprite circulorojo;
Sprite circulorojo1;
Sprite circulorojo2;
Sprite circulorojo3;

int main()
{
	circulo.loadFromFile("rcircle.png");

	circulorojo.setTexture(circulo);
	circulorojo1.setTexture(circulo);
	circulorojo2.setTexture(circulo);
	circulorojo3.setTexture(circulo);

	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "cuatro sirculos rojos");

	circulorojo1.setPosition(App.getSize().x - circulorojo1.getTexture()->getSize().x, 0);
	circulorojo2.setPosition(0, App.getSize().y - circulorojo2.getTexture()->getSize().y);
	circulorojo3.setPosition(App.getSize().x - circulorojo3.getTexture()->getSize().x, App.getSize().y - circulorojo2.getTexture()->getSize().y);

	while (App.isOpen()) 
	{

		App.clear();

		App.draw(circulorojo);
		App.draw(circulorojo1);
		App.draw(circulorojo2);
		App.draw(circulorojo3);

		App.display();
	}
	return 0;
}
