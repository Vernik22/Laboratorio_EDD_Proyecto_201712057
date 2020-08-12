#include "Menu.h"

using namespace std;

Menu::Menu()
{
}

void Menu::imprimirEncabezado() {
	cout << "**************************************************"<<endl;
	cout << "*USAC                                            *"<<endl;
	cout << "*Estructura de Datos                             *"<<endl;
	cout << "*Seccion A                                       *"<<endl;
	cout << "*Vernik Carlos Alexander Yaxon Ortiz             *"<<endl;
	cout << "*201712057                                       *"<<endl;
	cout << "**************************************************"<<endl;

}

void Menu::imprimirMenu() {
	cout << "**************************************************" << endl;
	cout << "1 * Ver Proyectos"<< endl;
	cout << "2 * Editar Proyectos" << endl;
	cout << "3 * Cargar Proyectos" << endl;
	cout << "4 * Graficar Proyectos" << endl;
	cout << "5 * Guardar Proyectos" << endl;
	cout << "6 * Cargar Librerias" << endl;
	cout << "7 * Salir" << endl;
}
Menu::~Menu()
{
}