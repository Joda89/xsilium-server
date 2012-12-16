/*
 * Server.h
 *
 *  Created on: 2 mars 2012
 *      Author: joda2
 */

#ifndef SERVER_H_
#define SERVER_H_

#include <string>
#include <stdint.h>
#include <time.h>
#include "Packet.h"

    /*!
     *  \brief struct AUTH_LOGON_PROOF_S
     *
     *  structure de AUTH_LOGON_PROOF_S
     *
     *  \param
     */
struct AUTH_LOGON_ERROR
{
	structure_opcodeT structure_opcode;
    int   error; /*!< correspond a l'erreur qui a ete detecter */
};


/*!
 *  \brief struct sClient
 *
 *  structure de sClient
 *
 *  \param
 */
struct sClient
{
	uint32_t IP ; /*!< L'ip du client       */
	uint16_t port;
    uint8_t idLogin; /*!< numero unique du compte dans la base de donn�e      */
    uint16_t  build; /*!< version du client      */
    uint8_t   platform[4]; /*!< la platform du client      */
    uint8_t   os[4]; /*      */
    uint8_t   country[4]; /*!< le pays du client      */
    std::string shaPassHash; /*!< Le mot de passe crypter */
    bool locked; /*!< Si le client lock sont compte sur l'ip*/
    uint8_t nbPassage; /*!<Le nombre d'essais que fait un clien */
    std::string lastIP; /*!< derniere IP du compte  */
    uint8_t gmlevel[50] ; /*!<Niveau de MJ*/
    time_t accountUnBanDate ; /*!<si le compte est bannie date de debanne du compte*/
    uint8_t	etape;
};

struct AUTH_LOGON_CHALLENGE
{
	structure_opcodeT structure_opcode;
	uint32_t	key;
	uint32_t	key2;
};

struct AUTH_LOGON_PROOF
{
	structure_opcodeT structure_opcode;
    uint8_t   Key[20];
};



#endif /* SERVER_H_ */
