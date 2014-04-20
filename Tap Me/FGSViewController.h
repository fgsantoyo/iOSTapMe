//
//  FGSViewController.h
//  Tap Me
//
//  Created by Fernando Garcia, Jr on 3/16/14.
//  Copyright (c) 2014 Fernando Garcia, Jr. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface FGSViewController : UIViewController<UIAlertViewDelegate>{
 
    IBOutlet UILabel *scoreLabel;
    IBOutlet UILabel *timerLabel;
    
    NSInteger count;
    NSInteger seconds;
    NSTimer   *timer;
    
    AVAudioPlayer *buttonBeep;
    AVAudioPlayer *secondBeep;
    AVAudioPlayer *backgroundMusic;
    
}

- (IBAction)buttonPressed;
@end
