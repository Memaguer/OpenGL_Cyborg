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
    delete hipJoint;
    delete thigh;
}

void HipJoint::draw()
{
    if(side == 'r'){
        x = 0.35;
        thigh -> angle = 40;
    }
    else{
        x = -0.35;
        thigh -> angle = 0;
    }
    // ############## HIP JOINT ##############
    glScalef(1/1.1, 1/0.5, 1/1.1); // cube (1,1,1)
    glRotatef(angle, 0.1, 0, 0);
    glTranslatef(x, -0.2, 0);
    glScalef(0.5, 0.5, 0.5);
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
            if(angle >= 15.0){
                flagLeft = false;
            }
            //thigh -> update();
        }
        else{
            angle -= 0.75;
            if(angle <= -15.0){
                flagLeft = true;
            }
            thigh -> update();
        }
    } else{
        if(flagRight){
            angle += 0.75;
            if(angle >= 15.0){
                flagRight = false;
            }
            //thigh -> update();
        }
        else{
            angle -= 0.75;
            if(angle <= -15.0){
                flagRight = true;
            }
            thigh -> update();
        }
    }

}
