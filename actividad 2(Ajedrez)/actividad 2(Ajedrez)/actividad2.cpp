#include <SFML/window.hpp>
#include <SFML/graphics.hpp>
using namespace std;
using namespace sf;

int main()
{
	Texture colornegro, colorblanco;
	Sprite sprite;

	string lugarblanco = "C:/SFML/imagenes/chessw.png";
	string lugarnegro = "C:/SFML/imagenes/chessb.png";

	colornegro.loadFromFile(lugarnegro);
	colorblanco.loadFromFile(lugarblanco);

	float height = colorblanco.getSize().y;
	float width = colorblanco.getSize().x;
	float escalaX, escalaY;
	escalaX = 100.0f / width;
	escalaY = 100.0f / height;
	sprite.setScale(escalaX, escalaY);

	RenderWindow App(sf::VideoMode(800, 600, 32), "tablero de ajedres");

	while (App.isOpen())
	{
		App.clear();

		for(int i=0; i<8;i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if((i+j)%2==0)
				{
					sprite.setTexture(colorblanco);
				}
				else
				{
					sprite.setTexture(colornegro);
				}
				sprite.setPosition(j * 100, i * 100);

				App.draw(sprite);
			

			}
		}
		App.display();

	}
	return 0;
}
