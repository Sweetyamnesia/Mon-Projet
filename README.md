# 🎮 Mon-Projet : Application de gestion de sessions VR

Une application web innovante pour accompagner les patients et les professionnels de santé dans le suivi et la gestion de sessions VR. 🌐

## 🎯 Objectif
Faciliter l'accès à des outils de réhabilitation cognitive et physique à travers une plateforme simple et intuitive.

---

## 🛠️ Fonctionnalités principales

### **Utilisateurs (Patients & Familles)**  
1. **Page d'accueil** :  
   - Présentation de l’application et informations de connexion.

2. **Profil utilisateur** :  
   - Visualisation des progrès  
   - Historique des sessions VR  
   - Notifications personnalisées

3. **Réservation de sessions VR** :  
   - Calendrier interactif  
   - Choix d'exercices adaptés aux besoins du patient

4. **Accès aux vidéos et exercices** :  
   - Liste d'exercices VR  
   - Visionnage des vidéos explicatives

---

### **Professionnels de Santé (Thérapeutes & Administrateurs)**  
1. **Tableau de bord thérapeute** :  
   - Vue d’ensemble des patients  
   - Rapports de progression  
   - Gestion des sessions et réservations

2. **Gestion des utilisateurs** :  
   - Création et modification des profils patients  
   - Attribution d'exercices personnalisés

3. **Analyse & Statistiques** :  
   - Suivi des performances des patients  
   - Recommandations pour ajuster les thérapies

4. **Configuration des sessions VR** :  
   - Ajout de nouveaux exercices/vidéos  
   - Paramètres de la plateforme

---

## 🔮 Fonctionnalités futures
- **Notifications en temps réel** : Alertes pour les sessions et mises à jour importantes.
- **Mode hors ligne** : Téléchargement des exercices pour une utilisation sans connexion.

---

## 🖥️ Technologies utilisées
- **Backend** : Node.js avec Express
- **Base de données** : MongoDB
- **Frontend** : HTML, CSS (Bulma), JavaScript
- **Outils** : Visual Studio Code, GitHub (Contrôle de version)

---

## 🧪 Prototype Terminal – `session-vr-terminal`

Ce dossier contient une version autonome en **langage C** de l'application, fonctionnant exclusivement dans le **terminal**. Il sert de **preuve de concept** pour la gestion des utilisateurs, des sessions VR et de l’historique, sans interface graphique ni base de données web.

### 🎮 Fonctionnalités incluses
- Création de profils utilisateurs avec enregistrement dans un fichier `.csv`
- Menu interactif pour :
  - Créer un utilisateur
  - Démarrer une session
  - Afficher l'historique des sessions
- Sauvegarde des données dans le dossier `data/`

### 🧱 Structure du dossier
```
session-vr-terminal/
├── src/           → Code source en C
├── include/       → Fichiers d'en-tête .h
├── data/          → Fichiers CSV utilisateurs & sessions
├── docs/          → Documentation technique & planning
├── scripts/       → Scripts shell utilitaires
├── Makefile       → Fichier de compilation
└── bin/           → (Optionnel) Dossier pour l'exécutable compilé
```

### 🔧 Compilation
Depuis le dossier `session-vr-terminal`, utilise la commande suivante pour compiler :
```bash
make
```
Puis exécute le programme : 
```bash
./bin/session_vr
```

## 👩‍💻 Auteur
**Angela RHIN** - Projet professionnel visant à améliorer les outils thérapeutiques pour les patients âgés.  
