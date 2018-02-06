//
//  cChest.hpp
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

#ifndef cChest_hpp
#define cChest_hpp

#endif /* cChest_hpp */

#include "cPart.hpp"
#include "cNeck.hpp"
#include "cShoulder.hpp"

class Chest
{
public:
    Chest();
    ~Chest();
    
    Part * chest;
    Neck * neck;
    Shoulder * rShoulder;
    Shoulder * lShoulder;
    
    float angle = 0.0;
    bool flagRot = true;
    
    void draw();
    void update();
};
