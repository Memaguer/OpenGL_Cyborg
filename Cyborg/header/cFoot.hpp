//
//  cFoot.hpp
//  Cyborg
//
//  Created by MBG on 2/5/18.
//  Copyright © 2018 MBG. All rights reserved.
//

#ifndef cFoot_hpp
#define cFoot_hpp

#include <stdio.h>

#endif /* cFoot_hpp */

#include "cPart.hpp"

class Foot
{
public:
    Foot();
    ~Foot();
    
    Part * foot;
    
    void draw();
    void update();
};
