//
//  AWCommentItem.h
//  DribbbleKitDemo
//
//  Created by mafengwo on 15/8/11.
//  Copyright (c) 2015年 Aldaron. All rights reserved.
//

#import "JSONModel.h"
#import "AWUserItem.h"

@interface AWCommentItem : JSONModel

@property (nonatomic, copy) NSString *body;

@property (nonatomic, assign) NSInteger comment_id;

@property (nonatomic, assign) NSInteger likes_count;

@property (nonatomic, copy) NSString *updated_at;

@property (nonatomic, copy) NSString *likes_url;

@property (nonatomic, copy) NSString *created_at;

@property (nonatomic, copy) AWUserItem *user;

@end
