/**
 * @file graph.h
 * @brief Structures et prototypes pour construire un graphe à partir d’un mur
 */

#ifndef GRAPH_H
#define GRAPH_H

#include "wall.h"
#include "climber.h"

// TODO: Définir une structure Node représentant une prise connectée
typedef struct Node {
    // À compléter : id, coordonnées, Hold, voisins, etc.
} Node;

// TODO: Définir une structure Graph contenant tous les noeuds
typedef struct {
    // À compléter : tableau de Node*, nombre de noeuds
} Graph;

// TODO: Fonction pour créer un graphe à partir d’un mur et d’un grimpeur
Graph* build_graph_from_wall(Wall* wall, Climber* climber);

// TODO: Fonction pour libérer la mémoire du graphe
void destroy_graph(Graph* graph);

// TODO: Fonction d'affichage des connexions (pour vérification)
void print_graph(Graph* graph);

#endif // GRAPH_H
