/**
 * @(#) Rezeptur_Prozessor.h
 */

#ifndef REZEPTUR_PROZESSOR_H_H
#define REZEPTUR_PROZESSOR_H_H
#include <string>
using namespace std;
#include "Rezeptliste.h"
#include "Dosierersteuerung.h"
#include "Entleerer.h"
#include "Mischer.h"
#include "Stampfer.h"
/**
 * Koordieniert seine bestandteile
 */
class Rezeptur_Prozessor
{
	
public:
	/**
	 * 
	 */
	void Komponenten_initialisieren();
	/**
	 * 
	 */
	void Rezept_ausfuehren();
	
private:
	/**
	 * 
	 */
	Dosierersteuerung* dosiersteuerung;
	
	/**
	 * 
	 */
	Entleerer* entleerer;
	
	/**
	 * 
	 */
	Mischer* mischer;
	
	/**
	 * 
	 */
	Rezeptliste* rezeptliste;
	
	/**
	 * 
	 */
	Stampfer* stampfer;
	
	
};

#endif
