//
//  AWBucketItem.m
//  DribbbleKitDemo
//
//  Created by mafengwo on 15/8/11.
//  Copyright (c) 2015年 Aldaron. All rights reserved.
//

#import "AWBucketItem.h"

@implementation AWBucketItem

+(JSONKeyMapper*)keyMapper
{
    return [[JSONKeyMapper alloc] initWithDictionary:@{
                                                       @"id" : @"bucket_id",
                                                       @"description" : @"bucket_description"
                                                       }];
}

@end
