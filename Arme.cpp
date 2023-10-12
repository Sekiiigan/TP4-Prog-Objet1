#include <stdio.h>
#include "Arme.h"

using namespace std;

Arme::Arme() : m_nomarme("Sans Arme"), m_puissancearme(0) { } // Constructeur sans attribut

Arme::Arme(string nomarme, int puissancearme) : m_nomarme(nomarme), m_puissancearme(puissancearme) { } // Constructeur avec attribut

void Arme::changerarme(std::string noarme, int puissancearme)
{
    m_nomarme = noarme;
    m_puissancearme = puissancearme;
}

void Arme::afficher() const
{
    cout << "Arme : " << m_nomarme << " (Puissance : " << m_puissancearme << ")" << endl;
}

int Arme::getpuissance() const
{
    return m_puissancearme;
}