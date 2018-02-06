//
//  cKnee.cpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#include "cKnee.hpp"

Knee::Knee()
{
    knee = new Part(0, 1, 0);
    leg = new Leg();
}

Knee::~Knee()
{
    
}

void Knee::draw()
{
    // ############## KNEE ##############
    //glRotatef(angle, 1, 0, 0);
    glTranslatef(0, -0.5, 0);
    glScalef(0.8, 0.2, 0.8);
    knee -> draw();
    
    // ####### LEG #######
    glPushMatrix();
    {
        leg -> draw();
    }
    glPopMatrix();
}

void Knee:: update()
{
    if (time <= 40){
        time += 1;
    }
    else{
        if(flag){
            angle += 1;
            if(angle >= 20.0){
                flag = false;
            }
        }
        else{
            angle -= 0.5;
            if(angle <= 0){
                flag = true;
                time = 1;
            }
        }
    }
    leg -> update();
}
