/*************************************************************************
                           Classe  -  description
                             -------------------
    d�but                : START_DATE
    copyright            : (C) 2012-2013 par tcantenot
*************************************************************************/

//---------- R�alisation de la classe <Classe> (fichier Classe.cpp) -------

//---------------------------------------------------------------- INCLUDE

#include <iostream>

#include "Classe.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs
Classe & Classe::operator = (Classe const & __classe)
{
}


//-------------------------------------------- Constructeurs - destructeur
Classe::Classe(Classe const & __classe)
{
#ifdef MAP
    std::cout << "Appel au constructeur de copie de <Classe>" << std::endl;
#endif
}


Classe::Classe()
{
#ifdef MAP
    std::cout << "Appel au constructeur de <Classe>" << std::endl;
#endif
}


Classe::~Classe()
{
#ifdef MAP
    std::cout << "Appel au destructeur de <Classe>" << std::endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

