//
//  ARSceneVC.h
//  OpenCVAR
//
//  Created by Joshua Newnham on 27/01/2013.
//  Copyright (c) 2013 We Make Play. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>
#import <opencv2/highgui/cap_ios.h>
#import "BaseARViewController.h"
#import "IAppNavigation.h"

@interface ARSceneVC : BaseARViewController{
    
    IBOutlet UIImageView *trackingStatus; 
}

@end
