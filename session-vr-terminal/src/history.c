#include "user.h"

void save_session(int score, User user)
{
	//obtenir la date actuelle
	//sauvegarder score + date dans data/sessions/user_<id>.csv
}

void afficher_historique_sessions()
{
	//lire le fichier de sessions correspondant à l'utilisateur
	//Afficher les sessions avec date et score
}

/**
 * Fonction : enregistrer une session
    Ouvrir ou créer un fichier data/sessions/user_ID.csv
    Ajouter une ligne avec :
        - Date de session
        - Score ou réussite
        - Détail de l'exercice

Fonction : afficher l'historique d'un utilisateur
    Lire data/sessions/user_ID.csv
    Afficher toutes les sessions précédentes

 */