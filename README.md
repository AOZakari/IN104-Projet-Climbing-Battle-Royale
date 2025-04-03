# 🧗‍♂️ IN104 – Projet Climbing Battle Royale

---

## 🎓 Objectif pédagogique

Ce projet vous plonge dans une **simulation algorithmique d’escalade**, conçue pour développer vos compétences en :

- Programmation modulaire en **langage C**
- Manipulation de **structures dynamiques**
- **Génération et analyse de graphes**
- Conception d’algorithmes de recherche de chemin et de stratégie
- Travail en équipe avec **Git** et gestion de projet
- Lecture/écriture de formats structurés (`.wall`)
- Visualisation ASCII et simulation terminale

---

## 🧠 Le projet : Climbing Battle Royale

Chaque groupe d’étudiants représente une **équipe d'escalade IA**.  
Leur mission : concevoir des **grimpeurs IA** capables de réussir des **murs d’escalade générés par d’autres équipes**, tout en construisant leurs propres murs difficiles mais justes.

---

## 🎯 Missions à accomplir

- Construire 4 **murs** aux styles bien définis (Force, Slab, Coordination, Lead)
- Concevoir 3 **grimpeurs IA** avec profils statistiques variés
- Développer un algorithme qui **convertit un mur en graphe**
- Implémenter une IA qui **analyse ce graphe** et choisit un **chemin optimal**
- Participer à un **tournoi final** où les IA s’affronteront

---

## 📚 Progression pédagogique

| Semaine | Thème                                  | Objectif principal                                      |
|--------|----------------------------------------|---------------------------------------------------------|
| 1      | Structure du mur                       | Implémenter `Wall` et `Hold` + affichage terminal       |
| 2      | Sauvegarde et chargement               | Format `.wall` + éditeur de murs contraints             |
| 3      | Grimpeurs IA                           | `struct Climber`, stats, profilage                      |
| 4      | Graphe depuis mur                      | Générer un graphe à partir du mur                       |
| 5      | Mouvement & prise de décision          | Planification (DFS/BFS/A*) en fonction des stats        |
| 6      | Stratégie d’équipe                     | Sélection dynamique du grimpeur par mur                |
| 7      | Simulation terminale & Viewer          | Lancer toutes les IA, comparer les résultats            |
| 8      | Tournoi final                          | Classement automatique + soutenance                     |

---

## 🛠️ Structure du projet

```
IN104-Climbing-Project/
├── include/
│   ├── wall.h
│   ├── wall_loader.h
│   ├── climber.h
│   ├── graph_builder.h
│   └── simulator.h
├── src/
│   ├── wall.c
│   ├── wall_loader.c
│   ├── climber.c
│   ├── graph_builder.c
│   └── simulator.c
├── walls/                  ← murs au format texte
├── climbers/               ← définitions des IA
├── matches/                ← configs tournoi
├── visualizer/             ← visualisation ASCII ou web
├── README.md
├── RULES.md
├── HOLD_TYPE_RULES.md
├── TOURNAMENT_RULES.md
└── Makefile
```

---

## 🧱 Thèmes de murs (obligatoires)

- **Mur Force** → crimp + peu de repos, test de force pure
- **Mur Slab** → équilibre, précision et placement
- **Mur Coordination** → dynos, mouvements complexes
- **Mur Lead** → long, mixé, gestion de l’endurance

---

## 🧍 Profils de grimpeurs

Chaque IA dispose de **120 points à répartir** entre 7 stats :
- `force`, `endurance`, `équilibre`, `souplesse`, `explosivité`, `taille`, `coordination`

Les grimpeurs sont affectés individuellement à chaque mur du tournoi.

---

## 🗺️ Graphe & planification

Chaque mur sera **converti en graphe** :
- Noeuds = prises
- Arêtes = mouvements possibles (selon stats du grimpeur)
- Chaque IA doit :
  - Générer le graphe
  - Trouver un chemin vers le sommet
  - Optimiser énergie, sécurité, stratégie

---

## 🏆 Évaluation

| Critère                        | Points |
|-------------------------------|--------|
| Fonctionnement technique      | 30%    |
| Algorithmes & graphe          | 20%    |
| IA et prise de décision       | 20%    |
| Respect des contraintes       | 10%    |
| Rapport + soutenance          | 10%    |
| Performance tournoi           | 10%    |

---

## 💡 Conseils

- Commencez simple, améliorez progressivement
- Testez vos murs avec plusieurs profils IA
- Utilisez Git et commentez vos fonctions
- Travaillez en binôme parallèle (IA / mur)

---

Bonne grimpe à tous, et que le meilleur grimpeur gagne ! 🧗‍♀️
