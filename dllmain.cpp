#include <iostream>
#include <string>
#define PI 3.14

using namespace std;

void persegipanjang(int p, int l)
{
       int rumus = p * l;
       cout << "Panjang: " << p;
       cout << "\nLebar: " << l;
       cout << "\nRumusnya adalah: Panjang x Lebar\n";
       cout << p << "x" << l << "\n"; 
       cout << "Hasil dari Rumus Persegi Panjang Adalah: " << rumus;
       
}

void kubus(int s)
{
	int rumus = s*s*s;
	cout << "Sisi: " << s;
    cout << "\nRumusnya adalah: Sisi x Sisi x Sisi\n";
    cout << s << "x" << s << "x" << s << "\n"; 
	cout << "Hasil dari Rumus Kubus Adalah: " << rumus;
}

void lingkaran(int r)
{
     float pi = 3.14;
     float rumus = (float)PI*r*r;
    cout << "Jari-jari (r): " << r;
    cout << "\nDiameter: " << r*r;
    cout << "\nRumusnya adalah: Phi (3,14) x r x r\n";
    cout << pi << "x" << r << "x" << r << "\n"; 
   	cout << "Hasil dari Rumus Luas Lingkaran Adalah: " << rumus;
}

int main()
{
	 string sebutnamabang;
	int pilihankang;
	cout << "Tuliskan nama mu: ";
	getline(cin, sebutnamabang);
	cout << "Halo " << sebutnamabang;
	cout << "\nPilih rumus:\n";
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
