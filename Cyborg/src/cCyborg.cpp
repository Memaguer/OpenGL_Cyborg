//
//  cCyborg.cpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#include "cCyborg.hpp"

Cyborg::Cyborg()
{
    body = new Body();
}

Cyborg::~Cyborg()
{
    
}

void Cyborg::draw()
{
    // ############## CYBORG #############
    
    // ####### BODY #######
    glPushMatrix();
    {
        body -> draw();
    }
    glPopMatrix();
}

void Cyborg:: update()
{
    body -> update();
}
