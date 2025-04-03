/**
 * @file climber.h
 * @brief Définition de la structure représentant un grimpeur IA
 */

#ifndef CLIMBER_H
#define CLIMBER_H

#include "wall.h"

// TODO: Compléter la structure Climber avec les champs nécessaires
typedef struct {
    // À compléter : nom, force, endurance, etc.
} Climber;

// TODO: Déclarer la fonction create_climber pour initialiser un grimpeur
Climber create_climber(const char* name, int force, int endurance, int balance,
                       int flexibility, int explosiveness, int height, int coordination);

// TODO: Déclarer une fonction pour afficher les infos d’un grimpeur
void print_climber_info(Climber climber);

#endif // CLIMBER_H
