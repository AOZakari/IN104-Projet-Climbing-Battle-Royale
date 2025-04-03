# 📘 Semaine 3 – Création de grimpeurs IA

Cette semaine, vous allez créer les premiers **grimpeurs IA** de votre simulateur.  
Un grimpeur est défini par son **profil de statistiques** qui influencera ses performances sur différents types de murs.

---

## 🎯 Objectifs pédagogiques

- Comprendre la structure `Climber`
- Répartir un total de **120 points de stats**
- Implémenter une fonction d’initialisation
- Afficher les statistiques du grimpeur dans le terminal
- Renforcer la séparation entre `.h` / `.c`

---

## 📁 Fichiers à compléter

| Fichier                    | Contenu attendu                            |
|----------------------------|---------------------------------------------|
| `climber.h`        | Déclaration de la structure et fonctions    |
| `climber.c`        | Implémentation des fonctions                |
| `main.c`           | Exemple de création avec Janja Garnbret    |

---

## 🧠 Statistiques disponibles

| Statistique     | Impact principal                     |
|-----------------|--------------------------------------|
| Force           | Tenue sur prises petites (`Crimps`)  |
| Endurance       | Résistance sur murs longs            |
| Balance         | Contrôle des appuis (`Slab`)         |
| Flexibilité     | Étirements, jambes éloignées         |
| Explosivité     | `Dynos`, sauts                       |
| Taille          | Portée des bras                      |
| Coordination    | Fluidité des mouvements              |

---

## ✅ Étapes à suivre

1. Dans `climber.h`, déclarez tous les champs de la struct
2. Implémentez `create_climber(...)` dans `climber.c`
3. Implémentez `print_climber_info(...)` pour afficher les stats
4. Dans `main.c`, créez une grimpeuse `Janja Garnbret`
5. Compilez et vérifiez l’affichage

---

## 💻 Compilation

Utilisez ce `Makefile` :

```bash
make -f Makefile
./climb_game_week3
```

---

## ✅ Check-list

- [ ] Votre `Climber` a exactement 7 champs de stats
- [ ] Le total ne dépasse pas 120 points
- [ ] L’affichage dans le terminal est lisible et aligné
- [ ] La séparation `.h` / `.c` est bien respectée

---

## 🎁 BONUS

- Créez plusieurs grimpeurs avec des profils variés (explosif, souple, etc.)
- Implémentez une fonction `int total_points(Climber c)` qui vérifie que vous ne dépassez pas 120

---

Prêt à affronter la paroi ? 🧗‍♂️

