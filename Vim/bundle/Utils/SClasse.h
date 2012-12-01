/*************************************************************************
                           Classe  -  description
                             -------------------
    début                : START_DATE
    copyright            : (C) 2012-2013 par tcantenot
*************************************************************************/

//---------- Interface de la classe <Classe> (fichier Classe.h) ------
#ifndef CLASSE_H
#define CLASSE_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Classe>
//
//
//------------------------------------------------------------------------

class Classe
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

//------------------------------------------------- Surcharge d'opérateurs

    Classe & operator = (Classe const & __classe);
    // Mode d'emploi : trivial
    //
    // Contrat : aucun
    //


//-------------------------------------------- Constructeurs - destructeur

    Classe(Classe const & __classe);
    // Mode d'emploi (constructeur de copie) : trivial
    //
    // Contrat : aucun
    //

    Classe();
    // Mode d'emploi : trivial
    //
    // Contrat : aucun
    //

    virtual ~Classe();
    // Mode d'emploi : trivial
    //
    // Contrat : aucun
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <Classe>

#endif // CLASSE_H

