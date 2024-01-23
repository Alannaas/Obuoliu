#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// FUNKCIJOS PROTOTIPAS
void sistema(int &litrai, ifstream &fin);

// Pagrindine funckija
int main()
{
    // Kintamasis saugoti litr� kiekiui
    int litrai;

    // Atidaromas failas duomenims skaityti
    ifstream fin("duomenys.txt");

    // Tikrinama, ar failas buvo s�kmingai atidarytas
    if (!fin)
    {
        cout << "Failas neatidarytas" << endl;
        return -1;  // Programa baigia darb� su klaida
    }

    // Kvie�iama funkcija, kuri atlieka pagrindin� skai�iavim�
    sistema(litrai, fin);

    return 0;  // Programos pabaiga be klaid�
}

// FUNKCIJA
void sistema(int &litrai, ifstream &fin)
{
    int n;

    // Nuskaitomas skai�ius n i� failo
    fin >> n;

    // Ciklas vykdomas n kartus
    for (int i = 1; i <= n; i++)
    {
        // Nuskaitomas kiekis litr�
        fin >> litrai;

        // Skai�iuojamos buteli� kiekio atitinkamos dalys
        int l5;
        int l2;
        int l1;
        l5 = litrai / 5;
        l2 = (litrai - l5 * 5) / 2;
        l1 = litrai - (l5 * 5 + l2 * 2);

        // I�vedami rezultatai
        cout << l5 << " " << l2 << " " << l1 << endl;
    }
}

