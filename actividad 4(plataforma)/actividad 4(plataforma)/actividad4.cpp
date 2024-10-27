#include <SFML/Graphics.hpp>
#include <SFML/openGL.hpp>
#include <vector>

using namespace std;
using namespace sf;

int main() {

    Texture plataforma;
    vector<Sprite> sprites;

    RenderWindow window(VideoMode(800, 600), "juego de plataformas. ");

    string imagen = "plataforma.jpg";
    plataforma.loadFromFile(imagen);

    float anchoWIDTH = plataforma.getSize().x;
    float alturaHEIGHT = plataforma.getSize().y;

    for (int i = 0; i < 7; i++)
    {
        Sprite sprite;
        sprite.setTexture(plataforma);

        sprite.setScale(0.15f, 0.2f * (i + 1));

        sprite.setPosition(i * ((anchoWIDTH * 0.15f) + 20), 600 - (i + 1) * anchoWIDTH * 0.15f);
        sprites.push_back(sprite);
    }
    Sprite sprite;
    sprite.setTexture(plataforma);

    sprite.setScale(0.2f * 7, 0.15f);

    sprite.setPosition(7 * ((anchoWIDTH * 0.15f) + 20), alturaHEIGHT * 0.2f * 6.5f);
    sprites.push_back(sprite);


    while (window.isOpen()) {

        window.clear();

        for (auto sprite : sprites)
        {
            window.draw(sprite);
        }

        window.display();
    }

    return 0;
}
