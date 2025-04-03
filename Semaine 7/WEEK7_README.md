# 📘 Semaine 7 – Simulation & Visualisation ASCII

Cette semaine, vous allez faire **vivre vos grimpeurs** : chaque mouvement sera affiché **étape par étape** dans le terminal.  
Vous simulerez le **parcours complet** d’un grimpeur sur un chemin prédéfini et afficherez le mur à chaque étape.

---

## 🎯 Objectifs pédagogiques

- Implémenter une boucle de simulation
- Visualiser dynamiquement la progression sur un mur
- Utiliser des `usleep()` ou autres effets pour un replay ASCII
- Apprendre à découper proprement un moteur simple

---

## 📁 Fichiers à compléter

| Fichier                    | Objectif                                     |
|----------------------------|----------------------------------------------|
| `simulation.h`     | Déclarations de `simulate_climb` et `display_wall_with_climber` |
| `simulation.c`     | Implémentation de la logique de replay       |
| `main.c`           | Création manuelle d’un chemin pour test      |
| `Makefile_week7`   | Compilation du moteur                        |

---

## 🧠 Détails

### `simulate_climb(Graph*, int* path, int path_len, Climber)`
- Affiche étape par étape la progression du grimpeur
- Chaque étape montre les coordonnées atteintes et le type de prise
- Simule un petit délai (`usleep(500000)`)

### `display_wall_with_climber(Wall*, x, y)`
- Affiche une version 6x6 du mur
- La position du grimpeur est représentée par **`C`**
- Les autres cases sont affichées avec un **`.`**

---

## 💻 Compilation

```bash
make -f Makefile_week7
./climb_game_week7
```

---

## ✅ Check-list

- [ ] Chaque mouvement du grimpeur est affiché clairement
- [ ] La position `C` est correcte
- [ ] Le chemin simulé est respecté
- [ ] L'affichage ASCII est lisible

---

## 🎁 BONUS

- Affichez une **légende** (`C = grimpeur`, `X = hold bloqué`, etc.)
- Sauvegardez chaque étape dans un fichier `.log`
- Ajoutez un **mode interactif** : appuyez sur une touche pour avancer

---

🧗‍♂️ C’est le moment de faire parler vos algos !  
Faites-les grimper, vivez l’action pas à pas, et préparez le **tournoi final** de la semaine 8 ! 🎯

