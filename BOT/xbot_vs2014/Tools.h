#include "stdafx.h"

class RegularConsole//Tworzy now� instancj� konsoli
{
public:

	RegularConsole()
	{
		AllocConsole();
		freopen("CONIN$", "rb", stdin); 

		freopen("CONOUT$", "wb", stdout);

		freopen("CONOUT$", "wb", stderr);

	}
	~RegularConsole()
	{
		FreeConsole();
		//system("pause");
	}
};