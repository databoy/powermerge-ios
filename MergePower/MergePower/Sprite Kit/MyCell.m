//
//  MyCell.m
//  MergePower
//
//  Created by Chris Pitchford on 12/31/15.
//  Copyright © 2015 Chris Pitchford Publishing, LTD. All rights reserved.
//

#import "MyCell.h"
#import "MyTile.h"

@implementation MyCell

- (instancetype)initWithPosition:(MyPosition)position {
    if (self = [super init]) {
        self.position = position;
        self.tile = nil;
    }
    return self;
}


- (void)setTile:(MyTile *)tile {
    _tile = tile;
    if (tile) tile.cell = self;
}

@end
