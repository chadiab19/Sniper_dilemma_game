#include "Target.h"
//#include "Enemy.h"
//#include "enemysingleton.hpp"

Target& Target::getInstance(){
    static Target instance;
    return instance;

}
Target::Target(){
    setRect(x(),y(),50,10);

}
Target::~Target(){

}



