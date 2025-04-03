/**
 * @file simulation.h
 * @brief Interface à compléter pour simuler un parcours de grimpeur
 */

#ifndef SIMULATION_H
#define SIMULATION_H

#include "graph.h"
#include "climber.h"

// TODO: Déclarer la fonction simulate_climb
int simulate_climb(Graph* graph, int* path, int path_len, Climber climber);

// TODO: Déclarer la fonction display_wall_with_climber
void display_wall_with_climber(Wall* wall, int climber_x, int climber_y);

#endif // SIMULATION_H
