/*
 * IPDAO.h
 *
 *  Created on: 15 déc. 2015
 *      Author: Aeden
 */

#ifndef SRC_SERVER_SHARED_DAO_IP_IPDAO_H_
#define SRC_SERVER_SHARED_DAO_IP_IPDAO_H_

#include <DAO/DAO.h>
#include <Model/IP/IP.h>

enum IPDatabaseStatements {
	REALMS_DEL_IPTEMPORAIRE,
	REALMS_SEL_IPTEMPORAIRE,
	REALMS_INS_IPTEMPORAIRE,
	REALMS_UPD_IPTEMPORAIRE
};

class IPDAO: public DAO {
public:
	IPDAO();
	virtual ~IPDAO();

	bool create(IP * ip, int idTransaction = 0);
	bool update(IP * ip, int idTransaction = 0);
	bool read(IP * ip, int idTransaction = 0);
	bool suppr(IP * ip, int idTransaction = 0);

private:

};

#endif /* SRC_SERVER_SHARED_DAO_IP_IPDAO_H_ */
