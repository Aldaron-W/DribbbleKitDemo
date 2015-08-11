//
//  DirbbbleKit.h
//  DribbbleKitDemo
//
//  Created by mafengwo on 15/8/11.
//  Copyright (c) 2015年 Aldaron. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DirbbbleKit : NSObject

#pragma mark - Property
#pragma mark Authentication
/**
 Application Client ID.
 */
@property (nonatomic, copy) NSString *clientID;

/**
 Client secret.
 */
@property (nonatomic, copy) NSString *clientSecret;

/**
 Callback URL.
 */
@property (nonatomic, copy) NSString *callbackURL;

#pragma mark - Methods
#pragma mark Authentication
- (void)setClientID:(NSString *)clientID clientSecret:(NSString *)clientSecret callbackURL:(NSString *)callbackURL;

@end
