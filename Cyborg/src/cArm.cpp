//
//  cArm.cpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#include "cArm.hpp"

Arm::Arm()
{
    arm = new Part(0.698, 0.137, 0.152);
    hand = new Hand();
}

Arm::~Arm()
{
    delete arm;
    delete hand;
}

void Arm::draw()
{
    // ############## ARM ##############
    glTranslatef(0, -1.3, 0);
    glScalef(1.2, 1.6, 1.2);
    arm -> draw();
    
    // ####### HAND #######
    glPushMatrix();
    {
        hand -> draw();
    }
    glPopMatrix();
    
}

void Arm:: update()
{
}
