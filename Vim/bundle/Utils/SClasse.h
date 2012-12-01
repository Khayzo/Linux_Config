/*************************************************************************
                           Classe  -  description
                             -------------------
    d�but                : START_DATE
    copyright            : (C) 2012-2013 par tcantenot
*************************************************************************/

//---------- Interface de la classe <Classe> (fichier Classe.h) ------
#ifndef CLASSE_H
#define CLASSE_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// R�le de la classe <Classe>
//
//
//------------------------------------------------------------------------

class Classe
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- M�thodes publiques

//------------------------------------------------- Surcharge d'op�rateurs

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
//----------------------------------------------------- M�thodes prot�g�es

//----------------------------------------------------- Attributs prot�g�s

};

//--------------------------- Autres d�finitions d�pendantes de <Classe>

#endif // CLASSE_H

