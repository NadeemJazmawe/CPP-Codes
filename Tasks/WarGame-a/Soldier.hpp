#pragma once

#include<iostream>
#include<vector>
using namespace std;


namespace WarGame{
    class Soldier{
    protected:
        enum TYPE{Commander, Foot, Sniper, Paramedic};

        const int damage;
        const int team;
        const int maxHealth;
        int health;
        const TYPE type;

    public:
        Soldier(uint team, uint damage, uint health, TYPE type)
            : type(type), team(team), damage(damage), health(health), maxHealth(health){
                cout  << "Soldier in " << endl;
            }
    };
}