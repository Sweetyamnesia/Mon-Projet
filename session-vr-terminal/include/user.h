#ifndef USER_H
#define USER_H

/**
 * struct User - structure to define users
 * @id: id of user
 * @name: the name of user
 * @age: the age of user
 */

typedef struct User
{
	int id;
	char name[50];
	int age;
} User;

User creer_utilisateurs(void);
void load_utilisateurs(void);
User *chercher_utilisateur(int id);

#endif
