# 📜 RÈGLES GÉNÉRALES – Climbing Battle Royale

---

Ce fichier décrit l'ensemble des **règles fondamentales** du projet, incluant les éléments de gameplay, les contraintes de mur, les capacités des grimpeurs IA, et les modalités de simulation.

---

## 🎯 Objectif du projet

Construire un système de **simulation algorithmique d'escalade**, où :
- Chaque **mur** est une **matrice** transformable en **graphe**.
- Chaque **grimpeur IA** planifie un chemin jusqu’au sommet selon ses **statistiques**.
- Les équipes s'affrontent via un **tournoi final simulé**.

---

## 🧱 Représentation d’un mur

Les murs sont des **matrices de prises** (`Hold`) de taille définie (ex : `6x6`, `8x10`, `10x12`).

Chaque prise a :
- Une **position** `(x, y)`
- Un **type** (`Crimp`, `Sloper`, `Dyno`, etc.)
- Une **taille** (`Small`, `Medium`, `Large`)
- Des autorisations **main** / **pied**
- Une valeur de **difficulté**
- Un **état** (`usable = 0/1`)
- Une **texture** (`dual_texture = 1` interdit aux pieds)

Le mur doit être **représentable en graphe**, où :
- Chaque **prise valide** devient un **nœud**
- Chaque **mouvement possible** (selon les stats du grimpeur) devient une **arête pondérée**

---

## 🔧 Types de murs (4 à concevoir par équipe)

| Nom            | Taille typique | Contraintes spécifiques |
|----------------|----------------|--------------------------|
| Force          | 6x6 à 8x8      | Beaucoup de `Crimps`, peu de repos |
| Slab           | 6x10 à 8x12    | Précision, `Slopers`, pied technique |
| Coordination   | 6x8 à 10x10    | `Dynos`, parcours dynamiques |
| Lead           | 10x20 à 12x24  | Long, mixé, test d’endurance globale |

---

## 🤖 Grimpeurs IA

Chaque IA est un `struct Climber` avec :
- Un nom
- Une stratégie de parcours
- 120 points à répartir entre :

| Statistique     | Impact principal                     |
|-----------------|--------------------------------------|
| Force           | Prises petites (`Crimps`)            |
| Endurance       | Longs parcours (`Lead`)              |
| Équilibre       | `Slab`, pieds seuls                  |
| Souplesse       | Portée des jambes                    |
| Explosivité     | `Dynos`, gros mouvements             |
| Taille          | Portée globale                       |
| Coordination    | Enchaînements rapides et optimisés   |

---

## 📈 Graphe généré depuis le mur

Chaque prise valide devient un **nœud**.  
Les **connexions** sont établies selon les règles suivantes :
- Un grimpeur peut atteindre une prise s’il est en position stable
- La distance max entre prises dépend de la **taille + souplesse**
- Les arêtes du graphe sont pondérées selon :
  - Type de prise
  - Coût énergétique
  - Usage main/pied
  - Orientation (montée plus coûteuse)

---

## 🛑 Restrictions de mouvement

Un mouvement est interdit si :
- La prise est bloquée (`usable = 0`)
- Le type ne permet pas l’usage main/pied demandé
- La distance entre les prises dépasse la portée du grimpeur
- Le grimpeur entre dans un état instable (2 points de contact obligatoires)

---

## 📂 Format de fichiers `.wall`

Fichier texte contenant pour chaque prise :

```
TYPE SIZE DUAL FEET_OK HAND_OK DIFF USABLE
C M 0 0 1 4 1
S S 0 1 1 2 1
...
```

---

## ✅ Règles de validation

Un mur :
- Doit contenir 1 `Start` (`T`) et 1 `End` (`E`)
- Doit être **solvable par au moins 1 IA du groupe**
- Doit respecter les contraintes de type selon son style (ex : pas de `Dyno` dans Slab)

---

## 📎 Fichiers associés

- `HOLD_TYPE_RULES.md` → Détails des prises (taille, autorisations)
- `TOURNAMENT_RULES.md` → Format de match et scoring
- `graph_builder.[c/h]` → Module de transformation mur → graphe

---

## 📌 À retenir

Le cœur du projet est de **transformer un mur en graphe**, puis d'**analyser ce graphe avec une IA grimpeur**.

