//
//  cLeg.cpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#include "cLeg.hpp"

Leg::Leg()
{
    leg = new Part(0.176, 0.368, 0.796);
    foot = new Foot();
}

Leg::~Leg()
{
    
}

void Leg::draw()
{
    // ############## LEG ##############
    glRotatef(angle, 1, 0, 0);
    //glTranslatef(0, -1.0, 0);  //v1.0
    //glScalef(1.05, 1.1, 1.05); //v1.0
    glTranslatef(0, -2.5, 0);
    glScalef(1.1, 3.0, 1.1);
    leg -> draw();
    
    // ####### FOOT #######
    glPushMatrix();
    {
        foot -> draw();
    }
    glPopMatrix();
}

void Leg:: update()
{
    //angle += 1.0;
    
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
    }
}
