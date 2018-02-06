//
//  cNeck.cpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#include "cNeck.hpp"

Neck::Neck()
{
    neck = new Part(1, 1, 1);
    head  = new Head();
}

Neck::~Neck()
{
    
}

void Neck::draw()
{
    // ############## NECK #############
    glTranslatef(0, 0.6, 0);
    glScalef(0.25, 0.3, 0.3);
    neck -> draw();
    // ####### HEAD #######
    glPushMatrix();
    {
        head -> draw();
    }
    glPopMatrix();
}

void Neck:: update()
{
    
}
