//
//  MyScene.h
//  MergePower
//
//  Created by Chris Pitchford on 12/31/15.
//  Copyright © 2015 Chris Pitchford Publishing, LTD. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
@class MyGrid;
@class GameViewController;

@interface MyScene : SKScene

@property (nonatomic, weak) GameViewController *controller;

- (void)startNewGame;

- (void)loadBoardWithGrid:(MyGrid *)grid;

@end
