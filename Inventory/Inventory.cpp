#include "Inventory.h"

using namespace std;

Inventory::Inventory(){}


Inventory& Inventory::getInstance() {
    static Inventory inventoryInstance;
    return inventoryInstance;
}

int Inventory::getPotions(){
   return potions;
}

void Inventory::usePotion(){
    if (potions > 0) {
        potions -= 1;
    }
}
void Inventory::addPotions(int pots){
    this->potions += pots;
}

int Inventory::getGoblinEar() {
    return goblinEar;
}
void Inventory::lootGoblinEar() {
    this->goblinEar += 1;
}
void Inventory::lootBand(){
    this->ogreWeddingBand +=1;
}
int Inventory::getBand(){
    int band = this->ogreWeddingBand;
    return band;
}



}



