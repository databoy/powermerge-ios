//
//  MyPosition.h
//  MergePower
//
//  Created by Chris Pitchford on 12/30/15.
//  Copyright © 2015 Chris Pitchford Publishing, LTD. All rights reserved.
//

#ifndef MyPosition_h
#define MyPosition_h

typedef struct Position {
    NSInteger x;
    NSInteger y;
} MyPosition;

CG_INLINE MyPosition MyPositionMake(NSInteger x, NSInteger y) {
    MyPosition position;
    position.x = x; position.y = y;
    return position;
}


#endif /* MyPosition_h */
