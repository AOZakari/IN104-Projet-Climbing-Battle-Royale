# 📚 Syllabus – IN104 Projet Climbing Battle Royale

---

## 🏁 Introduction

Ce syllabus présente la **progression complète** du projet Climbing Battle Royale pour le cours IN104.  
Il s’adresse aux étudiants de première année de l’ENSTA Paris.

---

## 🧗 Objectif global

Développer une **intelligence artificielle grimpeuse** en C capable de :
- Analyser un mur d’escalade (sous forme de matrice)
- Le convertir en **graphe de prises**
- Choisir un **chemin optimal**
- Gérer la **fatigue**, le **positionnement** et les **mouvements autorisés**
- Participer à un **tournoi final** contre d’autres équipes

---

## 🔢 Planning par semaine

| Semaine | Thème central                  | Contenu technique                                | Objectif pédagogique                                  |
|--------|-------------------------------|--------------------------------------------------|--------------------------------------------------------|
| 1      | Structure du mur              | `struct Wall`, `struct Hold`, affichage ASCII   | Manipulation de matrices, pointeurs, struct            |
| 2      | Chargement/Sauvegarde         | Fichiers `.wall`, parsing                        | Lire/écrire un format structuré en C                   |
| 3      | Grimpeurs IA                  | `struct Climber`, stats & validation             | Conception de profils avec contraintes                 |
| 4      | Graphe depuis mur             | `graph_builder`                                  | Construction de graphes pondérés                       |
| 5      | Planification IA              | DFS / BFS / A*                                   | Recherche de chemin et optimisation                    |
| 6      | Stratégie d’équipe            | Affectation IA ↔ murs                            | Apprentissage de la prise de décision adaptative       |
| 7      | Simulation & visualisation    | ASCII + replay / moteur                         | Analyse de performance et vérification de comportements|
| 8      | Tournoi final & soutenance    | Logs, scoring, oral                             | Défense technique, vision système                      |

---

## 📂 Dossiers et fichiers importants

- `README.md` : Présentation générale
- `RULES.md` : Règles du jeu, contraintes
- `HOLD_TYPE_RULES.md` : Détail des prises
- `TOURNAMENT_RULES.md` : Déroulement du tournoi
- `walls/` : Vos fichiers de murs
- `climbers/` : Vos IA
- `matches/` : Configuration du tournoi
- `logs/` : Résultats et visualisation

---

## 💼 Évaluation

| Critère                         | Pondération |
|---------------------------------|-------------|
| Fonctionnement du code          | 30%         |
| Algorithmes et IA               | 20%         |
| Qualité des murs                | 10%         |
| Respect des règles              | 10%         |
| Documentation & oral            | 10%         |
| Résultats au tournoi            | 20%         |

---

## 💡 Compétences développées

- Programmation modulaire en C
- Manipulation de fichiers, parsing structuré
- Génération de graphes, recherche de chemin
- Modélisation spatiale et stratégie algorithmique
- Travail en équipe et gestion de version
- Soutenance technique et analyse de performance

---

## 📎 Ressources complémentaires

- Fichiers `.c` & `.h` commentés
- Visualiseur ASCII / web
- Fonction de conversion mur → graphe
- Logs des simulations

---

Ce syllabus est votre fil conducteur. Suivez-le semaine après semaine pour progresser en toute confiance.
