//
//  cBody.hpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#ifdef __APPLE__
// See: http://lnx.cx/docs/opengl-in-xcode/
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#include <stdlib.h>
#else
#include "freeglut.h"
#endif

#include <stdio.h>
#include <math.h>

#ifndef cBody_hpp
#define cBody_hpp

#endif /* cBody_hpp */

#include "cPart.hpp"
#include "cChest.hpp"
#include "cHip.hpp"

class Body
{
public:
    Body();
    ~Body();
    
    Part * body;
    Chest * chest;
    Hip  * hip;
    
    float up = 0.0;
    bool flagUp = true;
    
    void draw();
    void update();
};
