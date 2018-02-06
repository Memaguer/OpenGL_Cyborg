//
//  cThigh.cpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#include "cThigh.hpp"

Thigh::Thigh()
{
    thigh = new Part(1, 1, 1);
    knee = new Knee();
}

Thigh::~Thigh()
{
    
}

void Thigh::draw()
{
    // ############## THIGH ##############
    glTranslatef(0, -2.1, 0);
    glScalef(1.05, 5.1, 1.05);
    thigh -> draw();
    
    // ####### KNEE #######
    glPushMatrix();
    {
        knee -> draw();
    }
    glPopMatrix();
}

void Thigh:: update()
{
    knee -> update();
    //angle += 1.0;
    /*
    if(flag){
        angle += 1.0;
        if(angle >= 30.00){
            flag = false;
        }
    }
    else{
        angle -= 1.0;
        if(angle <= 0.00){
            flag = true;
        }
    }*/
}
