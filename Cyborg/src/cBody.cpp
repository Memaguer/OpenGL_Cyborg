//
//  cBody.cpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#include "cBody.hpp"

Body::Body()
{
    body = new Part(1, 1, 1);
    chest = new Chest();
    hip = new Hip();
}

Body::~Body()
{
    delete body;
    delete chest;
    delete hip;
}

void Body::draw()
{
    // ############## BODY #############
    glTranslatef(0, up, 0);
    glScalef(1, 0.7, 1);
    body -> draw();
    // ####### CHEST #######
    glPushMatrix();
    {
        chest -> draw();
    }
    glPopMatrix();
    // ####### HIP #######
    glPushMatrix();
    {
        hip -> draw();
    }
    glPopMatrix();
    glPopMatrix();
}

void Body:: update()
{
    if(flagUp){
        up -= 0.003;
        if(up < -0.057){
            flagUp = false;
        }
    }
    else{
        up += 0.003;
        if(up > 0){
            flagUp = true;
        }
    }
    
    chest -> update();
    hip -> update();
    
}
