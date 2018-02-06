//
//  cNeck.hpp
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

#ifndef cNeck_hpp
#define cNeck_hpp

#endif /* cNeck_hpp */

#include "cPart.hpp"
#include "cHead.hpp"

class Neck
{
public:
    Neck();
    ~Neck();
    
    Part * neck;
    Head * head;
    
    void draw();
    void update();
};
