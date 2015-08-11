//
//  AWAttachmentItem.m
//  DribbbleKitDemo
//
//  Created by mafengwo on 15/8/11.
//  Copyright (c) 2015年 Aldaron. All rights reserved.
//

#import "AWAttachmentItem.h"

@implementation AWAttachmentItem

+(JSONKeyMapper*)keyMapper
{
    return [[JSONKeyMapper alloc] initWithDictionary:@{
                                                       @"id" : @"attachment_id"
                                                       }];
}

@end
