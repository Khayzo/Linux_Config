/*************************************************************************
                           Classe  -  description
                             -------------------
    début                : START_DATE
    copyright            : (C) 2012-2013 par tcantenot
*************************************************************************/

//---------- Réalisation de la classe <Classe> (fichier Classe.cpp) -------

//---------------------------------------------------------------- INCLUDE

#include <iostream>

#include "Classe.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs
Classe & Classe::operator = (Classe const & __classe)
{
}


//-------------------------------------------- Constructeurs - destructeur
Classe::Classe(Classe const & __classe)
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Classe>" << endl;
#endif
}


Classe::Classe()
{
#ifdef MAP
    cout << "Appel au constructeur de <Classe>" << endl;
#endif
}


Classe::~Classe()
{
#ifdef MAP
    cout << "Appel au destructeur de <Classe>" << endl;
#endif
}


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

