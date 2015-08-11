//
//  AWProjectItem.m
//  DribbbleKitDemo
//
//  Created by mafengwo on 15/8/11.
//  Copyright (c) 2015年 Aldaron. All rights reserved.
//

#import "AWProjectItem.h"

@implementation AWProjectItem

+(JSONKeyMapper*)keyMapper
{
    return [[JSONKeyMapper alloc] initWithDictionary:@{
                                                       @"id" : @"project_id",
                                                       @"description" : @"project_description"
                                                       }];
}

@end
