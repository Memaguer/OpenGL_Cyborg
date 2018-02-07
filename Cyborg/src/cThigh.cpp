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
    knee -> angle = angle;
}

Thigh::~Thigh()
{
    delete thigh;
    delete knee;
}

void Thigh::draw()
{
    // ############## THIGH ##############
    glScalef(1/0.5, 1/0.5, 1/0.5); // cube (1, 1, 1)
    glTranslatef(0, -0.7, 0);
    glScalef(0.5, 1.0, 0.5);
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
