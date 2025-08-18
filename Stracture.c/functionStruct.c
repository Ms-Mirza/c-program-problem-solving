#include<stdio.h>
#include<string.h>
#include<stdbool.h>
// global structure for accessing from any function.. 
typedef struct pokemon{
        char name[30];
        char tier;
        int hp;
        int attack;
        int speed;
    }pokemon;

void fun(pokemon info){
    printf("%d", info.tier);
}

int main()
{
    pokemon pikachu;
    pikachu.tier = 'A';
    fun(pikachu);

    return 0;
}