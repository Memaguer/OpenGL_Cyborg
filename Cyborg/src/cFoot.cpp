//
//  cFoot.cpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#include "cFoot.hpp"

Foot::Foot()
{
    foot = new Part(0.176, 0.368, 0.796);
    //foot = new Part(1, 1, 1);
}

Foot::~Foot()
{
    delete foot;
}

void Foot::draw()
{
    // ############## FOOT ##############
    glTranslatef(0, -0.6, 0.35);
    glScalef(0.9, 0.3, 1.7);
    //foot -> draw();
}

void Foot:: update()
{
    
}
