# 📘 Semaine 2 – Lecture & sauvegarde de murs .wall

Dans cette seconde semaine du projet **Climbing Battle Royale**, vous allez apprendre à **sauvegarder** et **recharger** vos murs depuis des fichiers texte `.wall`. Cela permettra de tester, échanger et rejouer facilement des parcours d’escalade.

---

## 🎯 Objectifs pédagogiques

- Lire un fichier `.wall` et remplir dynamiquement un `Wall`
- Sauvegarder un mur existant sous forme de texte structuré
- Appliquer des règles de parsing simples en C
- Travailler avec les **fichiers et formats structurés**

---

## 🛠️ Fichiers à compléter

| Fichier                        | Objectif                                       |
|-------------------------------|------------------------------------------------|
| `wall_loader.h`       | Déclarer les fonctions `load` et `save`        |
| `wall_loader.c`       | Implémenter les fonctions `load_wall_from_file` et `save_wall_to_file` |
| `main.c`              | Créer un mur, l’enregistrer, le recharger, l’afficher |

---

## 🧾 Format du fichier `.wall`

Chaque ligne représente une prise, et contient :

```
TYPE SIZE DUAL FEET_OK HAND_OK DIFFICULTY USABLE
```

Exemple :

```
C S 0 0 1 4 1
S M 0 1 1 2 1
...
```

---

## ✅ Étapes à suivre

1. **Déclarer** les fonctions dans `wall_loader.h`
2. Implémenter la **fonction de lecture ligne par ligne** (`fscanf`)
3. Implémenter la **fonction d’écriture** (`fprintf`)
4. Dans `main.c`, faire un test :
    - Créer un mur
    - Modifier 2 ou 3 prises
    - L’enregistrer
    - Recharger dans un autre mur
    - Afficher le résultat avec `display_wall()`

---

## ⚙️ Compilation

Utilisez :

```
make -f Makefile
./climb_game_week2
```

---

## ✅ Check-list de fin de semaine

- [ ] Le mur est bien sauvegardé et rechargé
- [ ] Le fichier `.wall` respecte le bon format
- [ ] Les structures rechargées sont cohérentes
- [ ] Vous utilisez bien `fopen`, `fscanf`, `fprintf`, `fclose`
- [ ] `display_wall` montre le même mur avant/après

---

## 💡 Astuces

- Testez votre fichier `.wall` en l’ouvrant avec un éditeur
- Vérifiez les erreurs (`if (!f)`, `fscanf(...) != 7`)
- Ajoutez des printf intermédiaires pour vérifier la lecture

---

## 🎁 BONUS

- Implémentez une fonction `random_wall(int w, int h)` qui génère un mur aléatoire
- Ajoutez une vérification `is_valid_wall(wall)` pour détecter s’il y a bien une prise de départ et d’arrivée

---

Bonne sauvegarde, bon chargement, et bonne grimpe ! 🧗‍♂️
