# 🎯 Jeu Zuma(SDL2)

Bienvenue dans le dépôt du projet **Zuma**, un clone du célèbre jeu vidéo réalisé en langage C avec la bibliothèque graphique **SDL2**.

---

## 👥 Membres du groupe

* **Joël Albert Tchinde** - *Développeur principal / Étudiant*

---

## 📝 Description du jeu

**Zuma** est un jeu de puzzle et d'action. Le joueur contrôle un tireur (placé au centre du plateau) qui pivote et tire des billes de différentes couleurs. 
Des chaînes de billes colorées se déplacent le long d'un parcours en spirale vers un point d'arrivée (la fosse). Le but du joueur est d'éliminer toutes les billes avant qu'elles n'atteignent le bout du chemin en formant des combinaisons d'au moins **3 billes de même couleur**.

---

## ✨ Fonctionnalités du jeu

- **Rendu graphique 2D :** Fenêtre de jeu gérée via SDL2.
- **Déplacement de la chaîne :** Génération et mouvement continu des billes le long d'une courbe définie.
- **Orientation du tireur :** Rotation automatique vers le curseur de la souris.
- **Système de tir :** Lancement de billes colorées par clic de souris.
- **Détection de collisions :** Insertion de la bille tirée dans la chaîne au point d'impact.
- **Mécanique Match-3 :** Destruction automatique des séquences de 3 billes (ou plus) de même couleur.
- **Gestion du score et Game Over :** Calcul des points et condition de défaite si les billes atteignent le centre.

---

## 🏗️ Architecture du projet

Le projet est structuré de manière modulaire afin d'isoler la logique du jeu, l'affichage graphique et les ressources :

```text
zuma_game/
├── include/
│   └── game.h          # Déclarations des structures de données et prototypes
├── src/
│   ├── main.c          # Point d'entrée du programme et boucle principale (game loop)
│   ├── game.c          # Logique métier (mouvements, collisions, match-3, score)
│   └── graphics.c      # Fonctions de rendu et d'affichage SDL2
├── assets/             # Textures, sprites, sons et polices de caractères
├── Makefile            # Script d'automatisation de la compilation
└── README.md           # Documentation du projet
