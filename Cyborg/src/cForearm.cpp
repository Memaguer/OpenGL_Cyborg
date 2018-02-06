//
//  cForearm.cpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#include "cForearm.hpp"

Forearm::Forearm()
{
    forearm = new Part(1, 1, 1);
    arm = new Arm();
}

Forearm::~Forearm()
{
    
}

void Forearm::draw()
{
    // ############## FOREARM ##############
    glTranslatef(0, -1.2, 0);
    glScalef(0.8, 1.5, 0.8);
    forearm  -> draw();
    
    // ####### ARM ######
    glPushMatrix();
    {
        arm -> draw();
    }
    glPopMatrix();
}

void Forearm:: update()
{
    
}
