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
    knee = new Part(0.176, 0.368, 0.796);
    leg = new Leg();
}

Knee::~Knee()
{
    delete knee;
    delete leg;
}

void Knee::draw()
{
    // ############## KNEE ##############
    glScalef(1/0.5, 1/1.0, 1/0.5);  // cube (1, 1, 1)
    glTranslatef(0, -0.5, 0);
    glRotatef(angle, 1, 0, 0);
    glScalef(0.5, 0.5, 0.5);
    //glTranslatef(0, -0.5, 0);
    //glScalef(0.8, 0.2, 0.8);
    //glScalef(2, 0.5, 2);
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
    //angle +=1;
    if(flag){
        angle += 2.0;
        if(angle >= 40.0){
            flag = false;
        }
    }
    else{
        angle -= 2.0;
        if(angle <= 0.0){
            flag = true;
            time = 1;
        }
    }
    printf("angle: %f\n", angle);
    leg -> update();
}
