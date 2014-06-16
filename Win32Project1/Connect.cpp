#include "Connect.h"

namespace DampKeg{


	/* host - ip address or domain
	 * service - xmpp-client (service name)
	 * Assume have final host name and port
	 * Set instance variables for OPEN
	 */
	Connection::Connection(std::string host, std::string service){
		
	}

	Connection::Connection(std::string host, std::string service,
		ConnectedEventHandler connectedEventHandler, DataReceivedEventHandler dataReceivedEventHandler){

	}

	/*
	*Create socket and connect to it
	*/

	void Connection::open(){

	}

	void Connection::close(){

	}

}