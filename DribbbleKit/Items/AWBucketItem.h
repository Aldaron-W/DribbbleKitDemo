//
//  AWBucketItem.h
//  DribbbleKitDemo
//
//  Created by mafengwo on 15/8/11.
//  Copyright (c) 2015年 Aldaron. All rights reserved.
//

#import "JSONModel.h"
#import "AWUserItem.h"

@interface AWBucketItem : JSONModel

@property (nonatomic, copy) NSString *created_at;

@property (nonatomic, assign) NSInteger bucket_id;

@property (nonatomic, copy) NSString *updated_at;

@property (nonatomic, assign) NSInteger shots_count;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *bucket_description;

@property (nonatomic, copy) AWUserItem *user;

@end
