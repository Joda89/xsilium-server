/*
 * authServer.h
 *
 *  Created on: 2 f�vr. 2012
 *      Author: joda2
 */

#ifndef AUTHSERVER_H_
#define AUTHSERVER_H_

#include "RakThread.h"
#include "BitStream.h"
#include "RakPeerInterface.h"
#include "MessageIdentifiers.h"
#include "resource.h"
#include "RakSleep.h"


class authServer {
public:
	authServer();
	virtual ~authServer();

	void startThread();
	void stopThread();

private:
	bool endThread;

};

#endif /* AUTHSERVER_H_ */
