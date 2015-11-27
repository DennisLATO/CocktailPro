/**
 * @(#) Zutatenliste.h
 */

#ifndef ZUTATENLISTE_H_H
#define ZUTATENLISTE_H_H

#include "Zutat.h"
#include <string>
#include<vector>
using namespace std;
/**
 * Enthält alle zutaten die über die wir verfügen ruft zutraten txt auf
 */
class Zutatenliste
{
	
public:
	/**
	 * 
	 */
	void Zutatenliste_einlesen();
	
private:
	/**
	 * 
	 */
	vector<Zutat *>* zutatenliste;
	
	
};

#endif
