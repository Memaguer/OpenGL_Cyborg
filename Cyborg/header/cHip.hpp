//
//  cHip.hpp
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

#ifndef cHip_hpp
#define cHip_hpp

#endif /* cHip_hpp */

#include "cPart.hpp"
#include "cHipJoint.hpp"

class Hip
{
public:
    Hip();
    ~Hip();
    
    Part * hip;
    HipJoint * rHipJoint;
    HipJoint * lHipJoint;
    
    void draw();
    void update();
};
