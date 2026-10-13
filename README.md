# 🎯 Jeu Zuma
Bienvenue dans le dépôt du projet **Zuma**, un clone du célèbre jeu vidéo réalisé en langage C avec la bibliothèque graphique **SDL2**.

---

## 👥 Membres du groupe

* **Joël Albert Tchinde** - 
* **kigoko wamba clarelle** - 

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
🚀 Comment lancer le jeu ?
💻 1. Version PC (Desktop - Linux / macOS / Windows)
Prérequis :
Compilateur C (GCC ou Clang)

Bibliothèque SDL2 (avec SDL2_image et SDL2_ttf)

Compilation et exécution :
Cloner le dépôt :

Bash
git clone [https://github.com/ton-nom-utilisateur/zuma-game-c.git](https://github.com/ton-nom-utilisateur/zuma-game-c.git)
cd zuma-game-c
Compiler le projet :

Bash
make
Lancer l'exécutable :

Bash
./zuma
🌐 2. Version Web (Navigateur)
La version Web est obtenue en compilant le code source C vers WebAssembly (WASM) grâce à Emscripten.

Compilation WebAssembly :
Bash
emcc src/main.c src/game.c src/graphics.c -Iinclude -s USE_SDL=2 -s USE_SDL_IMAGE=2 -o index.html
Lancement :
Vous pouvez ouvrir le fichier index.html généré via un serveur local (ex: python3 -m http.server 8000).

Lien Web / GitHub Pages : (Insère ici le lien si tu héberges le jeu sur GitHub Pages, ex: https://ton-nom-utilisateur.github.io/zuma-game-c/)

📱 3. Version Mobile (Android / iOS)
Les jeux SDL2 en C peuvent être déployés sur mobile de deux manières :

PWA / Web Mobile : En accédant directement au lien de la version Web (WebAssembly) depuis n'importe quel navigateur mobile (Chrome, Safari). Le jeu s'exécute directement dans le navigateur du téléphone.

Compilation native Android (NDK) : En intégrant le code C dans un projet Android Studio utilisant la bibliothèque wrapper SDL2 pour Android (SDLActivity), permettant de générer un fichier .apk.

🛠️ Outils et Technologies
Langage : C (C99 / C11)

Bibliothèque graphique : SDL2

Gestionnaire de version : Git & GitHub

Compilation : GCC / Make / Emscripten (WASM)
