//
//  M2Overlay.h
//  m2048
//
//  Created by Danqing on 3/25/14.
//  Modified by Chris Pitchford on 1/11/2016
//  Copyright © 2015 Chris Pitchford Publishing, LTD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface M2Overlay : UIView

@property (nonatomic, weak) IBOutlet UILabel *message;

@property (nonatomic, weak) IBOutlet UIButton *keepPlaying;

@property (nonatomic, weak) IBOutlet UIButton *restartGame;

@end
