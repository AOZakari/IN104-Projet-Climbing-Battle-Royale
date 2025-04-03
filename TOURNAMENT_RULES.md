# 🏆 Règles du Tournoi – Climbing Battle Royale

Ce document décrit le déroulement du **tournoi final**, les règles d’affectation des grimpeurs, le système de notation, et les contraintes de simulation.

---

## 🎯 Objectif du tournoi

Simuler un ensemble de **matchs entre équipes**, dans lesquels les **IA grimpeurs** affrontent les **murs d’escalade créés par les autres groupes**.

Chaque équipe sera jugée sur :
- La qualité de ses grimpeurs (IA)
- La conception stratégique de ses murs
- La performance globale au tournoi

---

## 👥 Format du tournoi

- Chaque équipe construit **4 murs** et **3 grimpeurs IA**
- Chaque équipe devra affronter les **murs des autres équipes**
- Pour chaque mur adverse, une **IA sera choisie** pour tenter l’ascension
- Aucun grimpeur ne peut être utilisé plus de **2 fois d'affilée**

---

## 🧗 Affectation des grimpeurs

Avant chaque match :
- L’équipe choisit **quel grimpeur affronte quel mur**
- Les choix sont faits **à l’aveugle** (aucune connaissance du résultat)
- Une interface `match_config.txt` sera fournie pour automatiser l’exécution

---

## ⚙️ Simulation automatique

Chaque match suit ces étapes :
1. Le mur `.wall` est chargé
2. Le grimpeur IA est initialisé
3. Le mur est converti en graphe (`graph_builder`)
4. L’IA cherche un chemin (parcours ou heuristique)
5. Le moteur simule les mouvements (`simulator`)
6. Un rapport `.log` est généré

---

## 📊 Système de notation

| Critère                  | Points |
|--------------------------|--------|
| Atteinte du sommet       | +10    |
| Énergie restante         | +1 à +5 (selon %) |
| Temps (nb de mouvements) | +1 à +5 (selon rapidité) |
| Utilisation optimale     | +3     |
| Repos intelligent (`Jug`) | +2    |
| Bonus d’ingéniosité      | +2     |
| Échec                   | -3     |

Un **grimpeur qui tombe** ne marque aucun point sauf le malus.

---

## 💡 Bonus & malus

- 🔁 Réutilisation d’un grimpeur déjà utilisé ? → -1
- 💥 Mouvement irréaliste (hors portée) → simulation interrompue
- 🚀 Si un grimpeur réussit un `Dyno` extrême → +2 points spectacle

---

## 🥇 Classement final

Le classement final sera basé sur :
- Le **score cumulé**
- La **créativité des murs**
- La **clarté du code et des logs**
- Une **soutenance orale de 10 minutes** : vous y présenterez vos murs, vos IA, et vos choix d’implémentation

---

## 📂 Organisation des fichiers

| Dossier       | Contenu                                    |
|---------------|--------------------------------------------|
| `walls/`      | Vos 4 fichiers `.wall`                     |
| `climbers/`   | Vos 3 IA : `climber1.c`, `climber2.c`, ... |
| `matches/`    | Fichier `match_config.txt` automatisé      |
| `logs/`       | Résultats des simulations                  |

---

## 🚀 Conseil de stratégie

- Affectez chaque IA à un mur qui **matche son profil** !
- Ne cherchez pas à tout réussir avec une seule IA
- Travaillez sur les **routes alternatives** (beta breaks) pour gagner du temps
- Vérifiez vos logs avec les outils ASCII ou web

---

Bonne chance dans l’arène !
