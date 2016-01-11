/*
 * CompteDAO.h
 *
 *  Created on: 6 oct. 2015
 *      Author: joda
 */

#ifndef SRC_SERVER_SHARED_COMPTE_COMPTEDAO_H_
#define SRC_SERVER_SHARED_COMPTE_COMPTEDAO_H_

#include <DAO/DAO.h>
#include <Model/Compte/Compte.h>

enum CompteDatabaseStatements {
	REALMS_SEL_ACCOUNT,
	REALMS_INS_ACCOUNT,
	REALMS_UPD_ACCOUNT,
	REALMS_DEL_ACCOUNT
};

class CompteDAO : public DAO {
public:
	CompteDAO();
	virtual ~CompteDAO();

	bool create(Model * model, int idTransaction = 0);
	bool update(Model * model, int idTransaction = 0);
	bool read(Model * model, int idTransaction = 0);
	bool suppr(Model * model, int idTransaction = 0);

private:


};

#endif /* SRC_SERVER_SHARED_COMPTE_COMPTEDAO_H_ */
