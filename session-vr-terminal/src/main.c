#include "main.h"
#include "user.h"
#include "session.h"
#include "history.h"
#include "utils.h"

/**
 * main - function void
 * Return: Always 0
 */
int main(void)
{
	load_users();

	while (1)
	{
		afficher_menu();

		int choix = lire_entree();

		switch (choix)
		{
			case 1:
				User new_user = creer_utilisateurs();

				printf("Nouvel utilisateur :\n");
				printf("ID : %d\n", new_user.id);
				printf("Nom : %s\n", new_user.name);
				printf("Âge : %d\n", new_user.age);
				break;

			case 2:
				demarrer_session_jeu();
				break;

			case 3:
				afficher_historique_sessions();
				break;

			case 4:
				quitter_programme();
				return (0);
		}
	}
}
