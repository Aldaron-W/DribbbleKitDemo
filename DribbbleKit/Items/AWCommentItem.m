//
//  AWCommentItem.m
//  DribbbleKitDemo
//
//  Created by mafengwo on 15/8/11.
//  Copyright (c) 2015年 Aldaron. All rights reserved.
//

#import "AWCommentItem.h"

@implementation AWCommentItem

+(JSONKeyMapper*)keyMapper
{
    return [[JSONKeyMapper alloc] initWithDictionary:@{
                                                       @"id" : @"comment_id"
                                                       }];
}

@end
