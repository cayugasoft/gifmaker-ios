//
//  IMessageShareActivity.h
//  gifmaker
//
//  Created by Sergio on 12/23/15.
//  Copyright © 2015 Cayugasoft. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@interface IMessageShareActivity : UIActivity

@property (nonatomic, strong) NSData *gifData;
@property (nonatomic, strong) UIViewController<MFMessageComposeViewControllerDelegate> *viewController;

@end