/**
 * @file pathfinding.h
 * @brief Prototypes pour les algorithmes de parcours sur le graphe
 */

#ifndef PATHFINDING_H
#define PATHFINDING_H

#include "graph.h"

// TODO: Déclarer la fonction bfs (retourne 1 si chemin trouvé, sinon 0)
int bfs(Graph* graph, int start_id, int end_id);

// TODO: Déclarer la fonction dfs (retourne 1 si chemin trouvé, sinon 0)
int dfs(Graph* graph, int start_id, int end_id);

#endif // PATHFINDING_H
