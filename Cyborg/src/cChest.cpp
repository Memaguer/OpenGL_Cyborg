//
//  cChest.cpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#include "cChest.hpp"

Chest::Chest()
{
    chest = new Part(0.698, 0.137, 0.152);
    neck = new Neck();
    rShoulder = new Shoulder('r');
    lShoulder = new Shoulder('l');
}

Chest::~Chest()
{
    delete chest;
    delete neck;
    delete rShoulder;
    delete lShoulder;
}

void Chest::draw()
{
    // ############## CHEST #############
    glRotatef(angle, 0, 1, 0);
    glTranslatef(0, 1, 0);
    glScalef(1.3, 1, 1.1);
    chest -> draw();
    // ####### NECK #######
    glPushMatrix();
    {
        neck -> draw();
    }
    glPopMatrix();
    // ####### RIGHT SHOULDER #######
    glPushMatrix();
    {
        rShoulder -> draw();
    }
    glPopMatrix();
    // ####### LEFT SHOULDER #######
    glPushMatrix();
    {
        lShoulder -> draw();
    }
    glPopMatrix();
}

void Chest:: update()
{
    if(flagRot){
        angle += 0.25;
        if(angle >= 5.00){
            flagRot = false;
        }
    }
    else{
        angle -= 0.25;
        if(angle <= -5.00){
            flagRot = true;
        }
    }
    
    lShoulder -> update();
    rShoulder -> update();
}
