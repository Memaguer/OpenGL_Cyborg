//
//  cPart.hpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

# pragma once //compiler directive:
// Load the headers only once, please.

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

#ifndef cPart_hpp
#define cPart_hpp

#endif /* cPart_hpp */

class Part
{
public:
    Part(float _r, float _g, float _b);
    ~Part();
    
    void draw();
    void update();
    
    float r;
    float g;
    float b;
};
