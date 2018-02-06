//
//  cHand.cpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#include "cHand.hpp"

Hand::Hand()
{
    hand = new Part(0.176, 0.368, 0.796);
}

Hand::~Hand()
{
    
}

void Hand::draw()
{
    // ############## HAND ##############
    glTranslatef(0, -0.7, 0);
    glScalef(0.8, 0.4, 0.8);
    hand -> draw();
}

void Hand:: update()
{
    
}
