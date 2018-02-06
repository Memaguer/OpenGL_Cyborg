//
//  cHip.cpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#include "cHip.hpp"

Hip::Hip()
{
    hip = new Part(0.51, 0.51, 0.51);
    rHipJoint = new HipJoint('r');
    lHipJoint = new HipJoint('l');
}

Hip::~Hip()
{
    
}

void Hip::draw()
{
    // ############## HIP #############
    glTranslatef(0, -0.6, 0);
    glScalef(1.1, 0.7, 1.1);
    hip ->draw();
    
    // ####### LEFT HIP JOINT #######
    glPushMatrix();
    {
        lHipJoint -> draw();
    }
    glPopMatrix();
    
    // ####### RIGHT HIP JOINT #######
    glPushMatrix();
    {
        rHipJoint -> draw();
    }
    glPopMatrix();
}

void Hip:: update()
{
    lHipJoint -> update();
    rHipJoint -> update();
}
