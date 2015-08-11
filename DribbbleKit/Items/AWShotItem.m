//
//  AWShotItem.m
//  DribbbleKitDemo
//
//  Created by mafengwo on 15/8/11.
//  Copyright (c) 2015年 Aldaron. All rights reserved.
//

#import "AWShotItem.h"

@implementation AWShotItem

+(JSONKeyMapper*)keyMapper
{
    return [[JSONKeyMapper alloc] initWithDictionary:@{
                                                       @"id" : @"shot_id",
                                                       @"description" : @"shot_description"
                                                       }];
}

@end
