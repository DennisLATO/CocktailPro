/**
 * @(#) Dosierer.h
 */

#ifndef DOSIERER_H_H
#define DOSIERER_H_H
#include <string>
using namespace std;

#include "Waage.h"

/**
 * auf machen zu machen
 * Dosiert 
 */

class Dosierer
{
	
public:
	/**
	 * 
	 */
	void Dosierer_oeffnen();
	/**
	 * 
	 */
	void Dosierer_schliessen();
	
private:
	/**
	 * 
	 */
    string Name;
	
	/**
	 * 
	 */
	Waage* waage;
	
	
};

#endif
