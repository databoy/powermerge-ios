//
//  M2ScoreView.h
//  m2048
//
//  Created by Danqing on 3/23/14.
//  Modified by Chris Pitchford on 1/11/2016
//  Copyright © 2015 Chris Pitchford Publishing, LTD. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface M2ScoreView : UIView

@property (nonatomic, weak) IBOutlet UILabel *title;
@property (nonatomic, weak) IBOutlet UILabel *score;

/** Updates the appearance of subviews and itself. */
- (void)updateAppearance;

@end
