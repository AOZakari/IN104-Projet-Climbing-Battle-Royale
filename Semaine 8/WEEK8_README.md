# 🏆 Semaine 8 – Tournoi final & soutenance

Bienvenue dans la dernière semaine de ce projet : vous allez organiser un **tournoi d’escalade algorithmique** entre vos grimpeurs IA !  
Chaque grimpeur tentera de franchir plusieurs murs aux styles différents. Votre objectif : faire grimper **le plus loin possible** votre équipe !

---

## 🎯 Objectifs pédagogiques

- Réutiliser l’ensemble du projet de façon modulaire
- Orchestrer plusieurs simulations sur des cas variés
- Implémenter une boucle de tournoi simple et lisible
- Afficher les résultats de manière claire
- Générer des logs ou un classement simple

---

## 📁 Fichiers à compléter

| Fichier                    | Objectif                                         |
|----------------------------|--------------------------------------------------|
| `tournament.h`     | Prototype de la fonction `run_tournament()`     |
| `tournament.c`     | Implémentation de la boucle du tournoi          |
| `main.c`           | Création des murs + grimpeurs + lancement       |
| `Makefile_week8`   | Compilation finale                              |

---

## ✅ Étapes à suivre

1. Créez plusieurs murs avec des styles différents (slab, physique, coordination…)
2. Créez une équipe de grimpeurs IA
3. Pour chaque grimpeur et chaque mur :
   - Construisez un graphe
   - Lancez une simulation
   - Affichez `SUCCÈS` ou `ÉCHEC`
4. Affichez les résultats pour chaque grimpeur (par exemple `2/3 murs franchis`)

---

## 💻 Compilation

```bash
make -f Makefile
./climb_game_week8
```

---

## ✅ Check-list

- [ ] Chaque grimpeur a tenté chaque mur
- [ ] Les résultats sont clairs et bien formatés
- [ ] Vous avez libéré toute la mémoire après chaque essai
- [ ] Le code est modulaire et propre

---

## 🎁 BONUS

- Donnez un **score chiffré** par grimpeur
- Affichez un **classement final**
- Sauvegardez les résultats dans un fichier `.txt`
- Faites un **replay ASCII** du meilleur parcours

---

## 🎤 Soutenance

À préparer en groupe ou individuellement :
- Présentation de votre stratégie IA
- Démonstration du tournoi
- Réponses aux questions (modularité, algos, choix de code)

---

Félicitations 🎉 Vous avez conçu, structuré, simulé et confronté une IA de grimpe !  
Place au tournoi... et que la meilleure équipe gagne 🧗‍♂️🔥

