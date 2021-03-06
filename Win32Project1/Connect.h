/**********************************************************************************************************************
* @file    Connection.h
* @date    2014-06-14
* @brief   <# Brief Description#>
* @details <#Detailed Description#>
**********************************************************************************************************************/

#pragma once

#include <functional>
#include <string>

namespace DampKeg {

	class Connection {
	public:
		using DataReceivedEventHandler = std::function<void(void)>;
		using ConnectedEventHandler = std::function<void(void)>;

		enum class State {
			NotConnected,
			Connecting,
			Connected,
			SecurelyConnected
		};

		Connection() = default;
		Connection(std::string host, std::string service);
		Connection(std::string host, std::string service,
			ConnectedEventHandler connectedEventHandler, DataReceivedEventHandler dataReceivedEventHandler);
		void open();
		void close();
	private:
		std::string host;
		std::string service;
		State state = State::NotConnected;
		ConnectedEventHandler handleConnectedEvent = nullptr;
		DataReceivedEventHandler handleDataRecievedEvent = nullptr;
	};
}
