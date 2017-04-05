#include <iostream>
#include "SFML\Network.hpp"

int main()
{
	sf::Http site("https://www.timeanddate.com/");

	sf::Http::Request req;
	req.setMethod(sf::Http::Request::Get);

	sf::Http::Response resp = site.sendRequest(req);
	std::cout << "Status: " << resp.getStatus() << std::endl;
	std::cout << "Test: " << resp.getField("lzsplash") << std::endl;

	std::system("PAUSE");
	return 0;
}