/**
 * @file main.c
 * @brief Test : création et affichage d’un grimpeur IA
 */

#include "climber.h"

int main() {
    // TODO: Créez une grimpeuse nommée Janja Garnbret avec une bonne répartition de points
    Climber janja = create_climber("Janja Garnbret", 18, 20, 17, 15, 16, 17, 17);
    print_climber_info(janja);
    return 0;
}
