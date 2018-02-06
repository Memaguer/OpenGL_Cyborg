//
//  cPart.cpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#include "cPart.hpp"

Part::Part(float _r, float _g, float _b)
{
    r = _r;
    g = _g;
    b = _b;
}

Part::~Part()
{
    
}

void Part::draw()
{
    glColor3f(r, g, b);
    glutSolidCube(1);
}

void Part:: update()
{
    
}
