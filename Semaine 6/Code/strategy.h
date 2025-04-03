/**
 * @file strategy.h
 * @brief À compléter : fonctions de scoring et sélection de grimpeurs
 */

#ifndef STRATEGY_H
#define STRATEGY_H

#include "graph.h"
#include "climber.h"
#include "pathfinding.h"

// TODO: Fonction can_climber_complete : retourne 1 si chemin trouvé
int can_climber_complete(Graph* g);

// TODO: Fonction select_best_climber : retourne l’indice du meilleur grimpeur
int select_best_climber(Wall* wall, Climber climbers[], int n);

#endif // STRATEGY_H
