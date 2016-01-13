//
//  M2ViewController.h
//  m2048
//
//  Modified by Chris Pitchford on 1/11/2016
//  Copyright © 2015 Chris Pitchford Publishing, LTD. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SpriteKit/SpriteKit.h>
#import <iAd/iAd.h>

@interface M2ViewController : UIViewController<ADBannerViewDelegate>

- (void)updateScore:(NSInteger)score;

- (void)endGame:(BOOL)won;

@end
