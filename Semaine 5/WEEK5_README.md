# 📘 Semaine 5 – Parcours de graphe : BFS & DFS

Cette semaine, vous allez coder vos **premiers algorithmes d’intelligence de grimpe** !  
Vous apprendrez à utiliser **BFS** (Breadth-First Search) et **DFS** (Depth-First Search) pour analyser le graphe d’un mur d’escalade et savoir si un chemin existe entre deux prises.

---

## 🎯 Objectifs pédagogiques

- Implémenter des algorithmes de recherche de chemin
- Explorer des structures de graphe via pointeurs
- Vérifier la connectivité d’un mur
- Comprendre la différence entre BFS et DFS

---

## 📁 Fichiers à compléter

| Fichier                    | Objectif                                      |
|----------------------------|-----------------------------------------------|
| `pathfinding.h`    | Déclaration de `bfs()` et `dfs()`             |
| `pathfinding.c`    | Implémentation des deux algorithmes           |
| `main.c`           | Création du mur, génération du graphe, test   |
| `Makefile_week5`   | Compilation du projet                         |

---

## 🧠 BFS vs DFS

| BFS                         | DFS                          |
|-----------------------------|------------------------------|
| Parcours en **largeur**     | Parcours en **profondeur**   |
| Utilise une **file**        | Utilise une **récursion**    |
| Plus rapide pour trouver le chemin le plus court | Explore toute une branche avant de revenir |

---

## ✅ Étapes à suivre

1. Déclarez vos fonctions dans `pathfinding.h`
2. Implémentez `dfs()` avec une fonction récursive `dfs_util(...)`
3. Implémentez `bfs()` avec un tableau `queue[]` et `visited[]`
4. Dans `main.c`, créez un mur simple, un grimpeur et testez les algos
5. Affichez le résultat : `CHEMIN TROUVÉ` ou `AUCUN CHEMIN`

---

## 💻 Compilation

```bash
make -f Makefile_week5
./climb_game_week5
```

---

## ✅ Check-list

- [ ] DFS trouve un chemin s’il existe
- [ ] BFS trouve un chemin s’il existe
- [ ] Le programme s’arrête correctement
- [ ] Les tableaux `visited` sont bien gérés
- [ ] Pas de fuites mémoire (testez avec `valgrind`)

---

## 🎁 BONUS

- Affichez le **chemin exact** suivi par BFS ou DFS
- Comptez le **nombre d’étapes** nécessaires
- Mesurez le **temps d’exécution** entre les deux méthodes

---

Vous venez de créer le **cerveau logique** de votre grimpeur.  
Prêt à faire les bons choix sur la paroi ? 🧗‍♂️🧠

