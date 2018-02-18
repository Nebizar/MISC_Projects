#include <iostream>
#include <vector>
#include <cstdlib>
#include "menu.h"

int main()
{
	menu menu1;
	menu1.wczytaj();
	do
	{
		menu1.glowne();
		
	} while (menu1.ifLoop() == true);
	return 0;
}