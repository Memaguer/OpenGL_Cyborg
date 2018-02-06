//
//  cHipJoint.hpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#ifndef cHipJoint_hpp
#define cHipJoint_hpp

#include <stdio.h>

#endif /* cHipJoint_hpp */

#include "cThigh.hpp"
#include "cPart.hpp"

class HipJoint
{
public:
    HipJoint(char side);
    ~HipJoint();
    
    Part * hipJoint;
    Thigh * thigh;
    
    char side;
    float x;
    
    float angle = 0.0;
    bool flagLeft = false;
    bool flagRight = true;
    
    void draw();
    void update();
};
