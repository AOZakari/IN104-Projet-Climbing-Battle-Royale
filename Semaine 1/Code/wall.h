/**
 * @file wall.h
 * @brief Interface de manipulation d'un mur d'escalade
 */

#ifndef WALL_H
#define WALL_H

#include "hold.h"

// TODO: Définir la structure Wall contenant une matrice de prises

typedef struct {
    // À compléter
} Wall;

// TODO: Prototyper les fonctions suivantes :
Wall* create_wall(int width, int height);
void destroy_wall(Wall* wall);
void display_wall(Wall* wall);

#endif // WALL_H
