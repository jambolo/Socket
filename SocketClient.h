#if !defined( SOCKETCLIENT_H_INCLUDED )
#define SOCKETCLIENT_H_INCLUDED

#pragma once

/****************************************************************************

                                SocketClient.h

						Copyright 2000, John J. Bolton
	----------------------------------------------------------------------

	$Header: //depot/Libraries/Socket/SocketClient.h#2 $

	$NoKeywords: $

****************************************************************************/

class Socket;


/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

class SocketClient  
{
public:

	virtual ~SocketClient();

	// Called from a Socket's OnAccept function
	virtual void OnAccept( Socket * pSocket, int nErrorCode );

	// Called from a Socket's OnReceive function
	virtual void OnReceive( Socket * pSocket, int nErrorCode );

	// Called from a Socket's OnClose function
	virtual void OnClose( Socket * pSocket, int nErrorCode );

protected:

	SocketClient();	// Must be derived from
};


#endif // !defined( SOCKETCLIENT_H_INCLUDED )
