# 🧗‍♂️ Règles complètes pour `can_climb` et la validation de parcours

## 🧱 Types de prises & validation

| Type     | Main autorisée | Pied autorisé | Conditions & particularités                     |
|----------|----------------|----------------|--------------------------------------------------|
| `N` Normale | ✅ Oui        | ✅ Oui        | Prise par défaut                                |
| `C` Crimp  | ✅ Oui        | ❌ Non        | Requiert `force >= 15`                          |
| `S` Sloper | ✅ Oui        | ✅ Oui        | Requiert `balance >= 15` pour être stable       |
| `D` Dyno   | ✅ Oui (main) | ❌ Non        | Requiert `explosivité >= 20` & `coordination >= 15` |
| `J` Jug    | ✅ Oui        | ✅ Oui        | Diminue fatigue (-15), autorise pauses          |
| `T` Start  | ✅ Oui        | ✅ Oui        | Position de départ                              |
| `E` End    | ✅ Oui        | ✅ Oui        | Objectif final                                  |
| `X` Bloquée| ❌ Non        | ❌ Non        | Inaccessible                                    |

- Toute prise avec `usable == 0`, `hand_ok == 0` ou `foot_ok == 0` est interdite.
- Si `dual_texture == 1` → pas de pied possible.

---

## 🧗‍♀️ Stats du grimpeur & effets

| Statistique     | Impact direct dans `can_climb(...)`                                         |
|-----------------|-----------------------------------------------------------------------------|
| **Force**       | Utilisation de Crimps (min 15), pénalité si < 12                           |
| **Endurance**   | Détermine le nombre max d’actions (fatigue > (100 + endurance * 2) → chute)                 |
| **Équilibre**   | Permet de tenir les Slopers (min 15), facilite les appuis techniques       |
| **Souplesse**   | Allonge la **portée** des mouvements                                       |
| **Explosivité** | Nécessaire pour Dyno (>= 20), enchaînements dynamiques                    |
| **Taille**      | Définit la **portée de base** (`portée_base = taille / 5.0`)               |
| **Coordination**| Nécessaire pour Dyno (>= 15), et pour transitions rapides                  |

---

## 📐 Calcul de portée maximale

```c
portée_maximale = (taille / 5.0) + (souplesse / 10.0)
```

- **taille / 5.0** = portée de base biomécanique
- **souplesse / 10.0** = bonus de mobilité

Le grimpeur peut atteindre une prise `B` depuis `A` si :

```c
sqrt((xB - xA)^2 + (yB - yA)^2) <= portée_maximale
```

---

## 🧮 Fatigue : coût de chaque prise

### 🏋️ Relation entre Endurance et Fatigue

L'endurance augmente la **tolérance maximale** à la fatigue :

```
seuil_fatigue_max = 100 + endurance * 2
```

Par exemple :

| Endurance | Seuil de fatigue max |
|-----------|----------------------|
| 10        | 120                  |
| 20        | 140                  |
| 30        | 160                  |
| 40        | 180                  |

Cela permet à un grimpeur endurant de supporter davantage de prises coûteuses avant de tomber.



```c
fatigue += hold->difficulty * fatigue_modifier(hold_type);
```

| Type     | Modificateur de fatigue |
|----------|-------------------------|
| Normale | x1.0                     |
| Crimp   | x1.5                     |
| Sloper  | x1.4                     |
| Dyno    | x2.0                     |
| Jug     | x0.5 (et réduit fatigue totale de 15) |

- Si `fatigue > (100 + endurance * 2)`, le grimpeur échoue.

---

## 🔄 Chaînes de prises interdites

| Situation              | Condition pour autoriser             |
|------------------------|--------------------------------------|
| 3 Crimps consécutives  | ❌ interdit sauf si un `Jug` suit    |
| 2 Dynos consécutifs    | ❌ sauf si `explosivité >= 25`       |
| 2 Slopers consécutifs  | ❌ sauf si `balance >= 20` ou Jug    |

---

## 🔧 Fonctions utilitaires à implémenter

```c
int can_place_hand(Climber* c, Hold* h);
int can_place_foot(Climber* c, Hold* h);
int can_reach(Hold* from, Hold* to, Climber* c);
float get_reach_distance(Climber* c);
float fatigue_modifier(HoldType t);
```

---

## ✅ Exemple simplifié de `can_climb(...)`

```c
if (!can_reach(prev, curr, climber)) return 0;
if (!can_place_hand(climber, curr)) return 0;
fatigue += hold->difficulty * fatigue_modifier(hold->type);
if (fatigue > (100 + endurance * 2)) return 0;
```

Ces règles forment le socle du moteur de validation pour chaque grimpeur IA. Elles doivent être vérifiées pour **chaque mouvement** dans le graphe, et permettront aux équipes d’optimiser leurs profils et parcours.
