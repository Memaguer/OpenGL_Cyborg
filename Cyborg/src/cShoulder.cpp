//
//  cShoulder.cpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#include "cShoulder.hpp"

Shoulder::Shoulder(char _side)
{
    shoulder = new Part(0.176, 0.368, 0.796);
    forearm = new Forearm();
    side = _side;
}

Shoulder::~Shoulder()
{
    
}

void Shoulder::draw()
{
    // ############## SHOULDER ##############
    if(side == 'r'){
        x = 0.65;
    } else{
        x = -0.65;
    }
    glRotatef(angle, 1, 0, 0);
    glTranslatef(x, 0.28, -0.05);
    //glTranslatef(x, -2.0, -0.05); prueba de piernas
    glScalef(0.3, 0.5, 0.5);
    shoulder -> draw();
    
    // ####### FOREARM #######
    glPushMatrix();
    {
        forearm -> draw();
    }
    glPopMatrix();
}

void Shoulder:: update()
{
    if(side == 'r'){
        if(flagLeft){
            angle += 0.75;
            if(angle >= 15.0){
                flagLeft = false;
            }
        }
        else{
            angle -= 0.75;
            if(angle <= -15.0){
                flagLeft = true;
            }
        }
    } else{
        if(flagRight){
            angle += 0.75;
            if(angle >= 15.0){
                flagRight = false;
            }
        }
        else{
            angle -= 0.75;
            if(angle <= -15.0){
                flagRight = true;
            }
        }
    }
}
