# 📘 Semaine 4 – Transformation du mur en graphe

Cette semaine, vous allez apprendre à transformer un **mur d’escalade** en un **graphe de déplacements**, où chaque prise devient un **nœud**, et chaque connexion possible devient une **arête**.

---

## 🎯 Objectifs pédagogiques

- Représenter un graphe à l’aide de `struct`
- Identifier les prises atteignables selon les stats du grimpeur
- Construire dynamiquement un ensemble de nœuds connectés
- Manipuler les pointeurs et tableaux dynamiques en C

---

## 🛠️ Fichiers à compléter

| Fichier                    | Contenu attendu                            |
|----------------------------|---------------------------------------------|
| `graph.h`          | Déclaration de `Node`, `Graph`, prototypes |
| `graph.c`          | Fonctions `build_graph_from_wall`, `destroy_graph`, etc. |
| `main.c`           | Création d’un mur et test de génération de graphe |
| `Makefile`  | Compilation du projet avec `-lm` pour `sqrt` |

---

## 📐 Structure attendue

### `Node`
- Identifiant
- Coordonnées `(x, y)`
- Copie de la `Hold` correspondante
- Tableau de pointeurs vers ses voisins (`Node**`)
- Nombre de voisins

### `Graph`
- Tableau `Node** nodes`
- Entier `node_count`

---

## 🧠 Connexions entre prises

Vous devez connecter une prise `A` à une prise `B` si :

- `B` est **atteignable** (distance < portée du grimpeur)
- `B` est **utilisable** et autorise les **mains**
- La distance est calculée avec `sqrt(dx² + dy²)`

---

## 💻 Compilation

```bash
make -f Makefile
./climb_game_week4
```

---

## ✅ Check-list

- [ ] Toutes les prises utilisables apparaissent dans le graphe
- [ ] La structure `Graph` est bien allouée et libérée
- [ ] Le graphe reflète les connexions physiques et les stats du grimpeur
- [ ] Le graphe est affiché proprement avec `print_graph`

---

## 🎁 BONUS

- Comptez le **nombre total d’arêtes**
- Affichez une **matrice d’adjacence**
- Ajoutez un champ `visited` ou `reachable` pour préparer les prochaines semaines

---

🧗‍♂️ Bravo, vous venez de modéliser un vrai mur d’escalade sous forme de graphe !

