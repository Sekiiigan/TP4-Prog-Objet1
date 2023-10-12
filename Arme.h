#ifndef Arme_h
#define Arme_h

#include <iostream>
#include <string>

class Arme
{
private:
    std::string m_nomarme;
    int m_puissancearme;
public:
    Arme();
    Arme(std::string noarme, int puissancearme); // Constructeur permettant d'initialiser les attributs
    void changerarme(std::string noarme, int puissancearme);
    void afficher() const;
    int getpuissance() const;
};

#include "Arme.cpp"
#endif