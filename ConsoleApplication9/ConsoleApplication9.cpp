// ConsoleApplication9.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;

/*Napište funkci body, která pro dané kartézské souřadnice dvou bodů v rovině zjistí,
	zda leží ve stejné polorovině určené osou x a zda leží ve stejném kvadrantu.
	Funkci zavolejte v programu.*/

int kvadrantG(int x1, int y1) {
	if (x1 < 0 && y1 < 0) { return 1; }
	if (x1 > 0 && y1 < 0) { return 2; }
	if (x1 < 0 && y1 > 0) { return 3; }
	if (x1 > 0 && y1 > 0) { return 4; }
	return 1;
}

void body(int x1, int y1, int x2, int y2, bool &kvadrant, bool &polorovina) {
	kvadrant = false;
	if (y1 >= 0 && y2 >= 0) { polorovina = true; }
	if (y1 <= 0 && y2 <= 0) { polorovina = true; }
	kvadrant = false;
	if (kvadrantG(x1, y1) == kvadrantG(x2, y2)) { kvadrant = true; }

}



int main()
{
	int x1, x2, y1, y2;
	bool kvadrant, polorovina;
	cout << "Zadej X1:\n";
	cin >> x1;
	getchar();
	cout << "Zadej Y1:\n";
	cin >> y1;
	getchar();
	cout << "Zadej X2:\n";
	cin >> x2;
	getchar();
	cout << "Zadej Y2:\n";
	cin >> y2;
	getchar();
	body(x1, y1, x2, y2, kvadrant, polorovina);
	cout << "Body " << (kvadrant ? "lezi" : "nelezi") << " ve stejnem kvadrantu\n";
	cout << "Body " << (polorovina ? "lezi" : "nelezi") << " ve stejne polorovine\n";
	getchar();
    
}



