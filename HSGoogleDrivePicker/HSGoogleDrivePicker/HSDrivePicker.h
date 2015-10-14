//
//  GDrivePicker.h
//  gdrive
//
//  Created by Rob Jonson on 13/10/2015.
//  Copyright © 2015 HobbyistSoftware. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GTLDrive.h"
#import "HSDriveManager.h"

@interface HSDrivePicker : UINavigationController

- (instancetype)initWithId:(NSString*)clientId secret:(NSString*)secret;

-(void)pickFromViewController:(UIViewController*)vc withCompletion:(void (^)(HSDriveManager *manager, GTLDriveFile *file))completion;

@end
