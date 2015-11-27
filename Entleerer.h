/**
 * @(#) Entleerer.h
 */

#ifndef ENTLEERER_H_H
#define ENTLEERER_H_H
#include <string>
using namespace std;
#include "Spueler.h"
/**
 * Der entleerer entleert
 */
class Entleerer
{
	
public:
	/**
	 * 
	 */
	void Entleeren();
	
private:
	/**
	 * 
	 */
	Spueler* spueler;
	
	
};

#endif
