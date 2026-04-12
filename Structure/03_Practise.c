#include<stdio.h>
struct pokemon{
    int hp;
    int speed ;
    int attack;
};
int main(){
    struct pokemon pikachu ;
    pikachu.hp=34;
    pikachu.speed = 700;
    pikachu.attack = 20;
    printf("------pokemon------\npikachu hp : %d\npikachu speed: %d\npikachu attack : %d",pikachu.hp,pikachu.speed,pikachu.attack);

    struct pokemon charizard ;
    charizard.hp=54;
    charizard.speed = 900;
    charizard.attack = 50;
    printf("\n------charizard------\ncharizard hp : %d\ncharizard speed: %d\ncharizard attack : %d",charizard.hp,charizard.speed,charizard.attack);
}
