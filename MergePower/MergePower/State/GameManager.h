//
//  GameManager.h
//  MergePower
//
//  Created by Chris Pitchford on 12/30/15.
//  Copyright © 2015 Chris Pitchford Publishing, LTD. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MyScene;
@class MyGrid;

typedef NS_ENUM(NSInteger, MyDirection) {
    MyDirectionUp,
    MyDirectionLeft,
    MyDirectionDown,
    MyDirectionRight
};

@interface GameManager : NSObject

/**
 * Starts a new session with the provided scene.
 *
 * @param scene The scene in which the game happens.
 */
- (void)startNewSessionWithScene:(MyScene *)scene;

/**
 * Moves all movable tiles to the desired direction, then add one more tile to the grid.
 * Also refreshes score and checks game status (won/lost).
 *
 * @param direction The direction of the move (up, right, down, left).
 */
- (void)moveToDirection:(MyDirection)direction;

@end
