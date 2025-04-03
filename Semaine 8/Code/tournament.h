/**
 * @file tournament.h
 * @brief Interface du tournoi final à compléter
 */

#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include "wall.h"
#include "climber.h"
#include "graph.h"
#include "pathfinding.h"
#include "simulation.h"

// TODO: Déclarer la fonction run_tournament
void run_tournament(Wall** walls, int wall_count, Climber* climbers, int climber_count);

#endif // TOURNAMENT_H
