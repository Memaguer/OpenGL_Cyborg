//
//  cCyborg.hpp
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

#ifndef cCyborg_hpp
#define cCyborg_hpp

#endif /* cCyborg_hpp */

#include "cBody.hpp"

class Cyborg
{
public:
    Cyborg();
    ~Cyborg();
    
    void draw();
    void update();
    
    Body* body;
    
    float angle = 0.0;
    float up = 0.0;
    int time = 1;
    bool flagRot = true;
    bool flagUp = true;
};
