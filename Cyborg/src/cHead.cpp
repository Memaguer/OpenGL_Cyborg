//
//  cHead.cpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#include "cHead.hpp"

Head::Head()
{
    head = new Part(0.176, 0.368, 0.796);
}

Head::~Head()
{
    
}

void Head::draw()
{
    // ############## HEAD #############
    glTranslatef(0, 1.5, 0);
    glScalef(1.7, 2.3, 1.7);
    head -> draw();
}

void Head:: update()
{
    
}
