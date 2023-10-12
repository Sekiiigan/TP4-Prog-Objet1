#include <stdio.h> 
#include "Heros.h"
using namespace std;

void Heros::diminuervie(int vieenmoins) // Méthode pour diminuer le niveau de vie (vie ne peut pas être en dessous de 0)
{
    m_vieheros -= vieenmoins;
    if (m_vieheros<0)
        m_vieheros=0;
}

void Heros::attaquer (Heros &cible) // Méthode pour attaquer un autre héros
{
    cout << m_nomheros <<" attaque "<< cible.m_nomheros << endl;
    cible.diminuervie (m_arme.getpuissance());
}

void Heros::changerarme (string nomnouvellearme, int puissancenouvellearme) // Méthode pour changer d'arme
{
    m_arme.changerarme (nomnouvellearme, puissancenouvellearme);
}

bool Heros::vivant () const // Savoir si le héros est vivant, true vivant et false mort
{
    return (m_vieheros>0);
}
Heros::Heros() : m_nomheros("Inconnu"), // Constructeur sans attribut
m_vieheros (0) {}
Heros::Heros(string nomheros, int vieheros, string nomarme, int puissancearme) // Constructeur avec attribut
{
    m_nomheros = nomheros;
    m_vieheros = vieheros;
    m_arme = Arme (nomarme, puissancearme);
}

void Heros::afficher() const // Méthode pour afficher les informations du héros
{
    cout << "Heros :"<<m_nomheros << "\tVie: " << m_vieheros << endl;
    m_arme.afficher();
    if (vivant() == true)
    {
        cout << "Heros Vivant" << endl;
    }
    else
    {
        cout<<"Heros Mort" << endl;
    }

cout << "-----------------------------------" << endl;
}