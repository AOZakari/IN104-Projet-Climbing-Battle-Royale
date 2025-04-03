# 📌 Types de prises & règles d’utilisation

Ce document précise les **caractéristiques** de chaque type de prise disponible dans le projet Climbing Battle Royale ainsi que les **règles associées aux mouvements** possibles pour chaque membre du corps.

---

## 🧱 Types de prises (`HoldType`)

| Symbole | Nom         | Description technique                                         |
|---------|-------------|---------------------------------------------------------------|
| `N`     | Normale     | Prise standard, aucune contrainte                            |
| `C`     | Crimp       | Prise très petite, demande de la force, interdit aux pieds   |
| `S`     | Sloper      | Arrondie, dépend de l'équilibre, autorisée mains/pieds       |
| `D`     | Dyno        | Prise de réception d'un saut, doit être atteinte en vol      |
| `J`     | Jug         | Prise très confortable, bon pour le repos                    |
| `T`     | Start       | Point de départ du grimpeur                                  |
| `E`     | End         | Objectif final                                                |
| `X`     | Bloquée     | Inaccessible                                                  |

---

## 🔧 Attributs d’une prise

| Attribut        | Type     | Description |
|-----------------|----------|-------------|
| `size`          | `S`, `M`, `L` | Influence la difficulté et la portée du mouvement |
| `dual_texture`  | `0/1`    | Si `1`, prise interdite aux pieds                    |
| `foot_ok`       | `0/1`    | Si `0`, impossible d'y poser un pied                 |
| `hand_ok`       | `0/1`    | Si `0`, impossible d'y poser une main                |
| `difficulty`    | `1-5`    | Coût relatif pour la prise                           |
| `usable`        | `0/1`    | Si `0`, prise bloquée (invisible/inaccessible)       |

---

## 🦵🖐 Règles de mouvement par membre

| Type     | Pied autorisé | Main autorisée | Particularité |
|----------|----------------|----------------|----------------|
| Normal   | Oui            | Oui            | -              |
| Crimp    | ❌ Non         | ✅ Oui         | Nécessite Force élevée |
| Sloper   | ✅ Oui         | ✅ Oui         | Demande Équilibre élevée |
| Dyno     | ❌ Non         | ✅ Oui (réception) | Doit être atteint via Explosivité |
| Jug      | ✅ Oui         | ✅ Oui         | Permet repos, réduit fatigue |
| Start    | Oui            | Oui            | Position initiale du grimpeur |
| End      | Oui            | Oui            | Objectif final |
| Bloquée  | ❌ Non         | ❌ Non         | Ne peut pas être utilisée |

---

## 🧠 Interaction avec les IA

Lorsqu’une IA veut déplacer un membre :
1. Elle vérifie que la prise est **accessible (usable = 1)**
2. Vérifie si le **membre concerné** est autorisé (`foot_ok`, `hand_ok`, `dual_texture`)
3. Vérifie que la **portée** est suffisante en fonction de la **taille** du grimpeur et de sa **souplesse**
4. Vérifie que le **type de prise** est compatible avec les **statistiques** du grimpeur

---

## 🔄 Exemples de situations

- Un grimpeur peut poser un pied sur une prise `S` uniquement s’il a assez d’équilibre et que `foot_ok = 1` et `dual_texture = 0`
- Un grimpeur peut faire un **dyno** uniquement si sa **explosivité** et **coordination** sont suffisantes
- Une prise `C` (Crimp) **ne peut pas être utilisée comme pied**

---

## 🔍 Astuce d’implémentation

Les règles d'autorisation doivent être **codées sous forme de fonction booléenne**, à appeler à chaque tentative de déplacement.

```c
int can_place_hand(Climber* climber, Hold* hold);
int can_place_foot(Climber* climber, Hold* hold);
int can_reach(Hold* from, Hold* to, Climber* climber);
```

Ces fonctions sont **essentielles pour construire le graphe des mouvements valides**.

---

## 📎 Voir aussi

- `RULES.md` → règles de construction de mur
- `graph_builder.c` → transformation du mur en graphe d’actions
