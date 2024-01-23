#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// FUNKCIJOS PROTOTIPAS
void sistema(int &litrai, ifstream &fin);

// Pagrindine funckija
int main()
{
    // Kintamasis saugoti litrø kiekiui
    int litrai;

    // Atidaromas failas duomenims skaityti
    ifstream fin("duomenys.txt");

    // Tikrinama, ar failas buvo sëkmingai atidarytas
    if (!fin)
    {
        cout << "Failas neatidarytas" << endl;
        return -1;  // Programa baigia darbà su klaida
    }

    // Kvieèiama funkcija, kuri atlieka pagrindiná skaièiavimà
    sistema(litrai, fin);

    return 0;  // Programos pabaiga be klaidø
}

// FUNKCIJA
void sistema(int &litrai, ifstream &fin)
{
    int n;

    // Nuskaitomas skaièius n ið failo
    fin >> n;

    // Ciklas vykdomas n kartus
    for (int i = 1; i <= n; i++)
    {
        // Nuskaitomas kiekis litrø
        fin >> litrai;

        // Skaièiuojamos buteliø kiekio atitinkamos dalys
        int l5;
        int l2;
        int l1;
        l5 = litrai / 5;
        l2 = (litrai - l5 * 5) / 2;
        l1 = litrai - (l5 * 5 + l2 * 2);

        // Iðvedami rezultatai
        cout << l5 << " " << l2 << " " << l1 << endl;
    }
}

