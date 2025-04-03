# 📘 Semaine 1 – Structure de données & affichage du mur

Bienvenue dans la première semaine du projet **Climbing Battle Royale**.  
Vous allez poser les bases de votre simulateur d’escalade : définir et manipuler les **structures de données du mur**.

---

## 🎯 Objectifs pédagogiques

- Comprendre la séparation `.h` / `.c` dans un projet modulaire en C
- Implémenter les structures `Hold` et `Wall`
- Allouer dynamiquement une matrice de prises
- Afficher le mur dans le terminal
- Compiler avec un `Makefile`

---

## 📁 Fichiers à compléter

| Fichier                    | Description                                      |
|----------------------------|--------------------------------------------------|
| `include/hold.h`   | Définir `HoldType`, `HoldSize`, `struct Hold`   |
| `include/wall.h`   | Définir `struct Wall` et les prototypes         |
| `src/wall.c`       | Implémenter `create_wall`, `destroy_wall`, `display_wall` |
| `src/main.c`       | Créer un mur, modifier quelques prises, l’afficher |

---

## 🧱 Étapes à suivre

### 1. Complétez `hold.h`
- Enum `HoldType` (`CRIMP`, `SLOPER`, `DYNO`, etc.)
- Enum `HoldSize` (`SMALL`, `MEDIUM`, `LARGE`)
- Struct `Hold` avec ses champs (coordonnées, type, taille, etc.)

### 2. Implémentez `Wall`
- Dans `wall.h`, définissez la struct `Wall`
- Dans `wall.c`, écrivez :
  - `create_wall(int width, int height)`
  - `destroy_wall(Wall* wall)`
  - `display_wall(Wall* wall)`

### 3. Testez dans `main.c`
- Créez un mur 6x5
- Modifiez 2 ou 3 prises
- Affichez le mur avec `display_wall()`

---

## 💻 Compilation

Completez puis utilisez le Makefile de la semaine 1 :

```bash
make -f Makefile
./climb_game_week1
```

Pour nettoyer :

```bash
make -f Makefile clean
```

---

## ✅ Check-list

- [ ] Le projet compile sans erreur
- [ ] `display_wall` montre une grille ASCII claire
- [ ] Le mur contient des prises de types variés
- [ ] La mémoire est allouée/libérée proprement

---

## 💡 Astuces

- Faites une prise bloquée avec `usable = 0` et testez si elle s’affiche en `X`
- Utilisez `valgrind ./climb_game_week1` pour détecter des fuites mémoire

---

## 🎁 BONUS

- Ajoutez une fonction `set_hold(Wall* w, int x, int y, Hold h)`
- Faites une fonction `print_hold_info(Hold h)` pour afficher les infos détaillées d’une prise

---

Bonne grimpe logique ! 🧗‍♀️
