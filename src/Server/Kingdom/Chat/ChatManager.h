/*
 * \file ChatManager.h
 *
 *  Created on: \date 3 janv. 2015
 *      Author: \author joda
 *  \brief :
 */
#include <Network/NetworkManager.h>
#include <Configuration/Configuration.h>

#ifndef SRC_SERVER_KINGDOM_CHAT_CHATMANAGER_H_
#define SRC_SERVER_KINGDOM_CHAT_CHATMANAGER_H_

namespace Kingdom {

	/*! Enumeration des types de message disponibles */
	enum typeForChat
	{
		ID_KINGDOM, /*!< Message � destination de tout le royaume pour un canal particulier: world/trade...  */
		ID_AREA,  /*!< Message � destination d'une zone du jeu*/
		ID_PRIVATE, /*!< Message priv� entre 2 joueurs*/
		ID_COMMUNITY, /*!< Message � destination d'un groupe de joueur: Guilde, alliance...*/
		ID_ERREUR /*!< Message de retour en cas d'anomalie*/
	};

	/*! Enumeration des types de retour possibles */
	enum erreurOfChat
	{
		ID_NOERROR = 0,
		ID_ERROR_PACKET_SIZE,
		ID_SPAM
	};

/*! Header du chatManager*/
class ChatManager : public NetworkListener{

public:
	ChatManager(NetworkManager * NetworkManager);
	virtual ~ChatManager();
	void run();

    /*!
     *  \brief Gestion des messages � destination de l'ensemble du serveur
     *  \param messageNetwork:
     *  	Forme du fichier en entr�e: String canal: canal de discution
     *  \return messageRetour
     */
	int HandleChatKingdom(MessageNetwork * messageNetwork,MessagePacket * messageRetour);
    /*!
     *  \brief Gestion des messages � destination d'une zone sp�cifique
     *  \param messageNetwork:
     *  	Forme du fichier en entr�e: String id_area: id de la zone
     *  \return messageRetour
     */
	int HandleChatArea(MessageNetwork * messageNetwork,MessagePacket * messageRetour);
	/*!
     *  \brief Gestion des messages�  destination d'un joueur
     *  \param messageNetwork:
     *  	Forme du fichier en entr�e: String name_dest: nom du joueur destinataire
     *
     *  \return messageRetour
     */
	int HandleChatPrivate(MessageNetwork * messageNetwork,MessagePacket * messageRetour);
	/*!
     *  \brief Indicateur de spam de l'emetteur
     *  \param messageNetwork
     *  \return messageRetour
     */
	bool SpamDetector(MessageNetwork * messageNetwork,MessagePacket * messageRetour);
	void processPacket(MessageNetwork * messageNetwork);

private:
	Log * log;
	Configuration * config ;
	NetworkManager * networkManager;
};


} /* namespace Kingdom */

#endif /* SRC_SERVER_KINGDOM_CHAT_CHAT_H_ */
