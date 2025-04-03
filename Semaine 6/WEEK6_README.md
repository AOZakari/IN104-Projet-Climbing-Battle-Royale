# 📘 Semaine 6 – Sélection de grimpeur et stratégie

Cette semaine, vous allez simuler un **choix stratégique** entre plusieurs grimpeurs pour réussir un mur donné.  
Chaque grimpeur possède un profil différent, et c’est à vous de coder une fonction qui sélectionne **le meilleur grimpeur**.

---

## 🎯 Objectifs pédagogiques

- Réutiliser un mur, un grimpeur et un graphe
- Appliquer les parcours BFS/DFS pour tester des chemins
- Comparer plusieurs grimpeurs sur un même mur
- Renforcer la modularité du code

---

## 📁 Fichiers à compléter

| Fichier                    | Objectif                                      |
|----------------------------|-----------------------------------------------|
| `strategy.h`       | Prototypes de scoring                         |
| `strategy.c`       | Fonction `can_climber_complete()` et `select_best_climber()` |
| `main.c`           | Mur + grimpeurs + test de sélection           |
| `Makefile_week6`   | Compilation du projet                         |

---

## ✅ Étapes à suivre

1. Implémentez `can_climber_complete(Graph* g)` : retourne 1 si le chemin existe, 0 sinon
2. Implémentez `select_best_climber(Wall*, Climber[], int)` :
   - Pour chaque grimpeur :
     - Transformez le mur en graphe
     - Testez avec `can_climber_complete`
     - Retournez l’indice du premier grimpeur qui réussit
3. Dans `main.c` :
   - Créez une équipe de 3 grimpeurs avec des profils variés
   - Testez leur performance sur un mur
   - Affichez le nom du meilleur

---

## 💻 Compilation

```bash
make -f Makefile_week6
./climb_game_week6
```

---

## ✅ Check-list

- [ ] Le projet compile et s’exécute
- [ ] Le bon grimpeur est sélectionné automatiquement
- [ ] Vous avez bien libéré le graphe après chaque test
- [ ] Le code est commenté et clair

---

## 🎁 BONUS

- Affichez les noms et stats de **tous** les grimpeurs testés
- Donnez une **note ou score de difficulté** au mur
- Testez vos grimpeurs sur **plusieurs murs** en boucle

---

Une équipe bien pensée peut faire la différence en compétition.  
À vous de jouer les coachs 🧗‍♀️👨‍🏫

