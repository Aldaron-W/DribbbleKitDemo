//
//  AWLikeItem.h
//  DribbbleKitDemo
//
//  Created by mafengwo on 15/8/11.
//  Copyright (c) 2015年 Aldaron. All rights reserved.
//

#import "JSONModel.h"
#import "AWUserItem.h"

@interface AWLikeItem : JSONModel

@property (nonatomic, assign) NSInteger like_id;

@property (nonatomic, copy) NSString *created_at;

@property (nonatomic, copy) AWUserItem *user;

@end
