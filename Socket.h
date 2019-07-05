#if !defined( SOCKET_H_INCLUDED )
#define SOCKET_H_INCLUDED

#pragma once

/****************************************************************************

                                   Socket.h

						Copyright 2000, John J. Bolton
	----------------------------------------------------------------------

	$Header: //depot/Libraries/Socket/Socket.h#2 $

	$NoKeywords: $

****************************************************************************/


#include <afxsock.h>

class SocketClient;

/********************************************************************************************************************/
/*																													*/
/*																													*/
/********************************************************************************************************************/

class Socket : public CSocket
{
public:
	Socket( SocketClient * pNotifyClient = 0 );
	virtual ~Socket();

	// *** CSocket overrides 
	virtual void OnAccept( int nErrorCode );
	virtual void OnReceive( int nErrorCode );
	virtual void OnClose( int nErrorCode );
	// *** End CSocket overrides 

private:

	SocketClient *	m_pNotifyClient;	// Notify client
};

#endif // !defined( SOCKET_H_INCLUDED )
