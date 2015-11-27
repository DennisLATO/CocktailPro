/**
 * @(#) Rezeptliste.h
 */

#ifndef REZEPTLISTE_H_H
#define REZEPTLISTE_H_H
#include <string>
using namespace std;
#include "Rezeptbuch.h"
#include "Zutatenliste.h"
/**
 * schaut welche Rezepte verfügbar sind
 */

class Rezeptliste: public Rezeptbuch
{
	
public:
	/**
	 * 
	 */
	void Rezepte_sortieren();
	
private:
	/**
	 * 
	 */
	Zutatenliste* zutatenliste;
	
	
};

#endif
