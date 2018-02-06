//
//  cHipJoint.cpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#include "cHipJoint.hpp"

HipJoint::HipJoint(char _side)
{
    hipJoint = new Part(1, 1, 1);
    thigh = new Thigh();
    side = _side;
}

HipJoint::~HipJoint()
{
    
}

void HipJoint::draw()
{
    if(side == 'r'){
        x = 0.35;
    }
    else{
        x = -0.35;
    }
    // ############## HIP JOINT ##############
    glRotatef(angle, 0.1, 0, 0);
    glTranslatef(x, 0, 0);
    glScalef(0.45, 0.5, 0.5);
    hipJoint -> draw();
    
    // ####### THIGH #######
    glPushMatrix();
    {
        thigh -> draw();
    }
    glPopMatrix();
}

void HipJoint:: update()
{
    
    if(side == 'r'){
        if(flagLeft){
            angle += 0.75;
            if(angle > 14.25){
                flagLeft = false;
            }
        }
        else{
            angle -= 0.75;
            if(angle < -14.25){
                flagLeft = true;
            }
        }
    } else{
        if(flagRight){
            angle += 0.75;
            if(angle > 14.25){
                flagRight = false;
            }
        }
        else{
            angle -= 0.75;
            if(angle < -14.25){
                flagRight = true;
            }
        }
    }
    thigh -> update();
}
