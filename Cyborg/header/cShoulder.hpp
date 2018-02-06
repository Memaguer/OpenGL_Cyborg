//
//  cShoulder.hpp
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

#ifndef cShoulder_hpp
#define cShoulder_hpp

#endif /* cShoulder_hpp */

#include "cPart.hpp"
#include "cForearm.hpp"

class Shoulder
{
public:
    Shoulder(char _side);
    ~Shoulder();
    
    Part * shoulder;
    Forearm * forearm;
    
    char side;
    float x;
    
    float angle = 0.0;
    bool flagLeft = true;
    bool flagRight = false;
    
    void draw();
    void update();
};
