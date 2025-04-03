/**
 * @file wall_loader.h
 * @brief Interface à compléter pour gérer les fichiers .wall
 */

#ifndef WALL_LOADER_H
#define WALL_LOADER_H

#include "wall.h"

// TODO: Définir la fonction de chargement depuis un fichier
int load_wall_from_file(Wall* wall, const char* filename);

// TODO: Définir la fonction de sauvegarde dans un fichier
int save_wall_to_file(Wall* wall, const char* filename);

#endif // WALL_LOADER_H
