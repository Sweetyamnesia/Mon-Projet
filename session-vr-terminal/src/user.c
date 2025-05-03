#include <stdio.h>
#include <string.h>
#include "user.h"

/**
 * creer_utilisateurs - fonction pour créer un nouvel utilisateur
 * Return: l'utilisateur actif
 */
User creer_utilisateurs(void)
{
    char prenom[50];  // Prénom de l'utilisateur
    int age;          // Âge de l'utilisateur
    int id;           // ID de l'utilisateur dans le fichier
    int id_max = 0;   // L'ID maximum actuel dans le fichier
    int nouvel_id;    // Le nouvel ID que nous allons attribuer
    User user = {0, "", 0};  // Initialisation par défaut de l'utilisateur
    char line[100];   // Buffer pour lire chaque ligne du fichier
    int file_age;     // Variable pour l'âge extrait du fichier

    // Demander le prénom de l'utilisateur
    printf("Entrez votre prénom :");
    scanf("%s", prenom);

    // Demander l'âge de l'utilisateur et s'assurer que c'est un entier
    printf("Entrez votre âge :");
    scanf("%d", &age);  // Corrigé ici, on doit utiliser %d pour l'âge

    // Ouvrir le fichier des utilisateurs pour lire les données existantes
    FILE *file = fopen("data/users.csv", "r");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier de données.\n");
        return user;  // Retourne un utilisateur invalide si le fichier ne peut pas être ouvert
    }

    // Lire chaque ligne du fichier et vérifier l'ID max
    while (fgets(line, sizeof(line), file) != NULL) {
        // Extrait l'ID et l'âge de chaque utilisateur dans le fichier
        if (sscanf(line, "%d,%*[^,],%d", &id, &file_age) == 2) {  
            if (id > id_max) {
                id_max = id;  // Met à jour l'ID maximum
            }
        }
    }

    // Calculer le nouvel ID
    nouvel_id = id_max + 1;

    // Fermer le fichier après lecture
    fclose(file);

    // Ouvrir le fichier en mode ajout pour écrire le nouvel utilisateur
    file = fopen("data/users.csv", "a");
    if (file == NULL) {
        printf("Erreur lors de l'ouverture du fichier pour l'ajout.\n");
        return user;  // Retourne un utilisateur invalide si le fichier ne peut pas être ouvert
    }

    // Ajouter le nouvel utilisateur dans le fichier
    fprintf(file, "%d,%s,%d\n", nouvel_id, prenom, age);

    // Fermer le fichier après l'écriture
    fclose(file);

    // Remplir la structure de l'utilisateur créé
    user.id = nouvel_id;
    user.age = age;
    strcpy(user.name, prenom);

    // Afficher un message de succès
    printf("Utilisateur créé avec succès.\n");

    // Retourner l'utilisateur créé
    return user;
}


/**
 * load_utilisateurs - fonction pour télécharger le profil utilisateur
 */
void load_utilisateurs(void)
{
    // Implémente cette fonction pour charger les utilisateurs si nécessaire
}
