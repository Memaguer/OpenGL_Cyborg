//
//  cKnee.hpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#ifndef cKnee_hpp
#define cKnee_hpp

#include <stdio.h>

#endif /* cKnee_hpp */

#include "cPart.hpp"
#include "cLeg.hpp"

class Knee
{
public:
    Knee();
    ~Knee();
    
    Part * knee;
    Leg * leg;
    
    float angle = 0.0;
    bool flag = true;
    int time = 1;
    
    void draw();
    void update();
};
