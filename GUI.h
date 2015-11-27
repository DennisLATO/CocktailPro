/**
 * @(#) GUI.h
 */

#ifndef GUI_H_H
#define GUI_H_H
#include <string>
using namespace std;
#include "Rezeptliste.h"
#include "Rezeptur_Prozessor.h"
/**
 * gibt die Rezeptliste aus
 * gibt Der gerätesteuerung ihr 
 */
class GUI
{
	
public:
	/**
	 * 
	 */
	void Rezept_anzeigen();
	/**
	 * 
	 */
	void Rezept_auswaehlen();
	/**
	 * 
	 */
	void Rezeptbuch_initialisieren();
	
private:
	/**
	 * 
	 */
	Rezeptliste* rezeptliste;
	
	/**
	 * 
	 */
	Rezeptur_Prozessor* rezeptur_prozessor;
	
	
};

#endif
