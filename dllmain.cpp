#include <iostream>
#define PI 3.14

using namespace std;

void persegipanjang(int p, int l)
{
       int rumus = p * l;
       cout << "Hasil dari Rumus Persegi Panjang Adalah: " << rumus;
       
}

void kubus(int s)
{
	int rumus = s*s*s;
	cout << "Hasil dari Rumus Kubus Adalah: " << rumus;
}

void lingkaran(int r)
{
     float pi = 3.14;
     float rumus = (float)PI*r*r;
     	cout << "Hasil dari Rumus Luas Lingkaran Adalah: " << rumus;
}

int main()
{
	int pilihankang;
	cout << "Pilih rumus:\n";
	cout << "1.Luas Persegi Panjang\n";
	cout << "2.Volume Kubus\n";
	cout << "3.Luas Lingkaran\n";
	cin >> pilihankang;
	switch(pilihankang)
	{
		case 1:
			persegipanjang(2,4);
			break;
		case 2:
			kubus(5);
			break;
		case 3:
			lingkaran(7);
			break;
		default:
		    cout << "Pilihlah jawaban yang benar";
			break;
				
 }
	return 0;
}
