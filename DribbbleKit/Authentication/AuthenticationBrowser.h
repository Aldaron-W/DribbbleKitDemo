//
//  AuthenticationBrowser.h
//  DribbbleKitDemo
//
//  Created by mafengwo on 15/8/11.
//  Copyright (c) 2015年 Aldaron. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AuthenticationBrowser : UIViewController

@property (nonatomic) NSURL *callbackURL;
@property (nonatomic, strong) void (^completionHandler)(NSURL *url, NSError *error);

@end
