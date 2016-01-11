//
//  M2Position.h
//  m2048
//
//  Created by Danqing on 3/19/14.
//  Modified by Chris Pitchford on 1/11/2016
//  Copyright © 2015 Chris Pitchford Publishing, LTD. All rights reserved.
//

#ifndef m2048_M2Position_h
#define m2048_M2Position_h

typedef struct Position {
  NSInteger x;
  NSInteger y;
} M2Position;

CG_INLINE M2Position M2PositionMake(NSInteger x, NSInteger y) {
  M2Position position;
  position.x = x; position.y = y;
  return position;
}

#endif
