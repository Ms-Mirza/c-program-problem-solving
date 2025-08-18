#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct pokemon{
        char name[30];
        char tier;
        int hp;
        int attack;
        int speed;
    }pokemon;

    typedef struct legendary_pokemon{
        pokemon normal; // copy struct pokemon;
        char avility[30];
    } legendary;

    typedef struct overPowerPokemon{
        legendary legend; // copy legenday_pokemon and normal pokemon;
        char speciallity[40];
    } powerful_Pokimon;

    powerful_Pokimon arceus;

    strcpy(arceus.legend.normal.name, "Arceus.");
    arceus.legend.normal.tier = 'Z';
    arceus.legend.normal.hp = 8000;
    arceus.legend.normal.attack = 5000;
    arceus.legend.normal.speed = 1000;
    strcpy(arceus.legend.avility, "Copy other pokemons ability.");
    strcpy(arceus.speciallity, "Convert anyone into stone.");

    legendary mewtwo;
    strcpy(mewtwo.normal.name, "Mewtwo.");
    mewtwo.normal.tier = 'S';
    mewtwo.normal.hp = 800;
    mewtwo.normal.attack = 500;
    mewtwo.normal.speed = 600;
    strcpy(mewtwo.avility, "Copy other pokemons ability.");

    return 0;
}