#include <iostream>
#include "Menu.h"

using namespace std;
int main() {
	Menu* m = new Menu();
	m->imprimirEncabezado();
	m->imprimirMenu();
	return 0;
}