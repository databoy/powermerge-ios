//
//  MyCell.h
//  MergePower
//
//  Created by Chris Pitchford on 12/31/15.
//  Copyright © 2015 Chris Pitchford Publishing, LTD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MyPosition.h"
@class MyTile;

@interface MyCell : NSObject
/** The position of the cell. */
@property (nonatomic) MyPosition position;

/** The tile in the cell, if any. */
@property (nonatomic, strong) MyTile *tile;

/**
 * Initialize a M2Cell at the specified position with no tile in it.
 *
 * @param position The position of the cell.
 */
- (instancetype)initWithPosition:(MyPosition)position;

@end
