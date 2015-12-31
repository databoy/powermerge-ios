//
//  MyGridView.h
//  MergePower
//
//  Created by Chris Pitchford on 12/31/15.
//  Copyright © 2015 Chris Pitchford Publishing, LTD. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GlobalState.h"

@class MyGrid;

@interface MyGridView : UIView

/**
 * Create the entire background of the view with the grid at the correct position.
 *
 * @param grid The grid object that the image bases on.
 */
+ (UIImage *)gridImageWithGrid:(MyGrid *)grid;

/**
 * Create the entire background of the view with a translucent overlay on the grid.
 * The rest of the image is clear color, to create the illusion that the overlay is
 * only over the grid.
 */
+ (UIImage *)gridImageWithOverlay;

@end
