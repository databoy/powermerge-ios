//
//  M2Scene.h
//  m2048
//
//  Modified by Chris Pitchford on 1/11/2016
//  Copyright © 2015 Chris Pitchford Publishing, LTD. All rights reserved.
//

@import SpriteKit;
@class M2Grid;
@class M2ViewController;

@interface M2Scene : SKScene

@property (nonatomic, weak) M2ViewController *controller;

- (void)startNewGame;

- (void)loadBoardWithGrid:(M2Grid *)grid;

@end
