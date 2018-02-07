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
    delete hip;
    delete rHipJoint;
    delete lHipJoint;
}

void Hip::draw()
{
    // ############## HIP #############
    glScalef(1, 1/0.7, 1);      // cube (1, 1, 1);
    glTranslatef(0, -0.6, 0);
    glScalef(1.1, 0.5, 1.1);
    hip ->draw();
    
    // ####### LEFT HIP JOINT #######
    glPushMatrix();
    {
        lHipJoint -> draw();
    }
    glPopMatrix();
    glPushMatrix();
    {
        
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
