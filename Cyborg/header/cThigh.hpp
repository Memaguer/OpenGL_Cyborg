//
//  cThigh.hpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#ifndef cThigh_hpp
#define cThigh_hpp

#include <stdio.h>

#endif /* cThigh_hpp */

#include "cPart.hpp"
#include "cKnee.hpp"

class Thigh
{
public:
    Thigh();
    ~Thigh();
    
    Part * thigh;
    Knee * knee;
    
    float angle = 0.0;
    bool flag = true;
    int time = 1;
    
    void draw();
    void update();
};
