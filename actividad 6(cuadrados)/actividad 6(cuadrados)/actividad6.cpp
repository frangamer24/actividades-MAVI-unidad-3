#include <SFML/Window.hpp>
#include<SFML/Graphics.hpp>}

using namespace std;
using namespace sf;

int main() 
{
	RenderWindow ventana(VideoMode(800, 600, 32), "cuadrados de colores");

	Texture textura[4];
	Sprite sprites[4];

	std::string archivos[] = { "cuad_red.png", "cuad_yellow.png", "cuad_blue.png", "chessb.png" };
	for (int i = 0; i < 4; i++)
	{
		if (!textura[i].loadFromFile(archivos[i])) 
		{
			return 0;
		}

		sprites[i].setTexture(textura[i]);

		float escalaX = 200.0f / textura[i].getSize().x;
		float escalaY = 200.0f / textura[i].getSize().y;
		sprites[i].setScale(escalaX, escalaY);
		
		sprites[i].setPosition(100 + i * 210, 100);

	}
	float ancho = 200;
	float alto = 200;

	sprites[0].setPosition(100, 100);
	sprites[1].setPosition(300, 100);
	sprites[2].setPosition(100, 300);
	sprites[3].setPosition(300, 300);
	
	while (ventana.isOpen()) 
	{
		Event evento;

		while (ventana.pollEvent(evento)) 
		{
			if (evento.type == Event::Closed)
				ventana.close();
		}
		ventana.clear();

		for (int i = 0; i < 4;i++)
		{
			ventana.draw(sprites[i]);
		}

		ventana.display();
	}

	return 0;

}
