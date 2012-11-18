/*
 * LoginDatabase.h
 *
 *  Created on: 18 f�vr. 2012
 *      Author: joda2
 */

/*!
 * \file LoginDatabase.h
 * \brief Login Database
 * \author joda2
 *
 */

#ifndef LOGINDATABASE_H_
#define LOGINDATABASE_H_

#include "PostgreSQLInterface/connexionDatabase.h"
#include "Structure/Server.h"
#include "Singleton/Singleton.h"

enum LoginDatabaseStatements
{
    /*  Naming standard for defines:
        {DB}_{SEL/INS/UPD/DEL}_{table}_{Summary of data changed}
        When updating more than one field, consider looking at the calling function
        name for a suiting suffix.
    */

REALMS_UPD_IPBANNED_DEBANAUTOIP,
REALMS_SEL_IPBANNED_INFOSSURIPBANNIES,
REALMS_INS_ACCOUNTBANNED_AUTOBANCOMPTEAUTH,
REALMS_UPD_ACCOUNT_MAJERREURSAUTH,
REALMS_SEL_ACCOUNT_RECUPINFOSCOMPTE,
REALMS_INS_AVERTISSEMENTS_AJOUTAVERTISSEMENTS,
REALMS_UPD_ACCOUNT_MAJAVERTISSEMENTSCOMPTE,
REALMS_INS_ACCOUNTBANNED_AUTOBANCOMPTEPOURAVERTISSEMENTS,
REALMS_UPD_ACCOUNTBANNED_DEBANCOMPTE,
REALMS_SEL_LISTESERVEUR_RECUPLISTESERVEUR,
REALMS_UPD_ACCOUNTACCESS_MAJGMLEVELCOMPTE,
REALMS_UPD_IPBANNED_DEBANIP,
REALMS_UPD_ACCOUNTBANNED_DEBANAUTOCOMPTE,
REALMS_INS_BANIP_BANAUTOIP,
REALMS_UPD_LISTESERVEUR_MAJCOMPTEONLINE,
REALMS_INS_LISTESERVEUR_CREATIONSERVEUR,
REALMS_INS_ACCOUNTBANNED_BANCOMPTE,
REALMS_INS_IPBANNED_BANIP,
REALMS_UPD_ACCOUNT_LOGCONNEXIONCOMPTE,
REALMS_UPD_ACCOUNT_MAJMAIL,
REALMS_UPD_ACCOUNT_MAJPASS,
REALMS_INS_ACCOUNTACCESS_CREATIONACCESS,
REALMS_SEL_AVERTISSEMENTS_LISTEAVERTOS,
REALMS_INS_IPTEMPORAIRE_STOCKAGEIPTEMPORAIRE,
REALMS_UPD_IPTEMPORAIRE_MAJIPTEMPORAIRE,
REALMS_SEL_IPTEMPORAIRE_LECTURENERREURS,
REALMS_DEL_IPTEMPORAIRE_SUPPRLIGNEIP,
REALMS_SEL_ACCOUNTBANNED_RECUPDATEFINBANCOMPTE

//maj nico -- normalisation du nom des requetes
    //LOGIN_GET_REALMLIST,
    //LOGIN_SET_EXPIREDIPBANS,
    //LOGIN_SET_EXPIREDACCBANS,
    //LOGIN_GET_IPBANNED,
    //LOGIN_SET_IPAUTOBANNED,
    //LOGIN_GET_ACCBANNED,
    //LOGIN_SET_ACCAUTOBANNED,
    //LOGIN_GET_SESSIONKEY,
    //LOGIN_SET_VS,
    //LOGIN_SET_LOGONPROOF,
    //LOGIN_GET_LOGONCHALLENGE,
    //LOGIN_SET_FAILEDLOGINS,
    //LOGIN_GET_FAILEDLOGINS,
    //LOGIN_GET_ACCIDBYNAME,
    //LOGIN_GET_NUMCHARSONREALM,
    //AJOUT_AVERTISSEMENT,
    //MAJ_AVERTISSEMENTS,
    //AUTO_BAN_AVERTO,
    //DEBAN_COMPTE,
    //LISTE_SERVER,
    //MAJ_GM_LEVEL,
    //DEBAN_IP,
    //REALMS_INS_BANIP_BANAUTOIP,
    //MAX_LOGINDATABASE_STATEMENTS
};




  /*! \class LoginDatabase
   * \brief
   *
   */

class LoginDatabase : public Singleton<LoginDatabase>, public connexionDatabase {

	friend class Singleton<LoginDatabase>;


public:

    /*!
     *  \brief Constructeur
     *
     *  Constructeur de la classe LoginDatabase
     *
     *  \param
     */
	LoginDatabase();

    /*!
     *  \brief Destructeur
     *
     *  Destructeur de la classe LoginDatabase
     *
     *  \param
     */


	virtual ~LoginDatabase();

	void connexionDB(std::string infoString);

private:


};

#endif /* LOGINDATABASE_H_ */
