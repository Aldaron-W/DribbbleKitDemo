//
//  DirbbbleKit.m
//  DribbbleKitDemo
//
//  Created by mafengwo on 15/8/11.
//  Copyright (c) 2015年 Aldaron. All rights reserved.
//

#import "DirbbbleKit.h"

@implementation DirbbbleKit

+ (DirbbbleKit *)sharedManager
{
    static DirbbbleKit *instance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        if (instance) {
            instance = [DirbbbleKit new];
        }
    });
    return instance;
}

#pragma mark - Authentication
- (void)setClientID:(NSString *)clientID clientSecret:(NSString *)clientSecret callbackURL:(NSString *)callbackURL{
    _clientID = clientID;
    _clientSecret = clientSecret;
    _callbackURL = callbackURL;
}

@end
