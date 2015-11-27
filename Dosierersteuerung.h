/**
 * @(#) Dosierersteuerung.h
 */

#ifndef DOSIERERSTEUERUNG_H_H
#define DOSIERERSTEUERUNG_H_H
#include <string>
using namespace std;
#include "Dosierer.h"
#include "Zutatenliste.h"
/**
 * Steuert alle dosierer
 */
class Dosierersteuerung
{
	
public:
	/**
	 * 
	 */
	void Dosierer_auswaehlen();
	/**
	 * 
	 */
	void Dosierer_initialisieren();
	
private:
	/**
	 * 
	 */
	Dosierer* dosierer;
	
	/**
	 * 
	 */
	Zutatenliste* zutatenliste;
	
	
};

#endif
