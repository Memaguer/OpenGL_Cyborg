//
//  cLeg.hpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#ifndef cLeg_hpp
#define cLeg_hpp

#include <stdio.h>

#endif /* cLeg_hpp */

#include "cPart.hpp"
#include "cFoot.hpp"

class Leg
{
public:
    Leg();
    ~Leg();
    
    Part * leg;
    Foot * foot;
    
    float angle = 0;
    bool flag = true;
    
    void draw();
    void update();
};
