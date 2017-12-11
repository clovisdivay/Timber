// Timber.cpp�: d�finit le point d'entr�e pour l'application console.
//

#include "stdafx.h"
#include <SFML\Graphics.hpp>

using namespace sf;

int main()
{
	VideoMode vm(1920, 1080);
	RenderWindow window(vm, "Timber!!!", Style::Fullscreen);

	while (window.isOpen())
	{
		if (Keyboard::isKeyPressed(Keyboard::Escape))
			window.close();

		window.clear();
		window.display();
	}
    return 0;
}

