//
//  AWAttachmentItem.h
//  DribbbleKitDemo
//
//  Created by mafengwo on 15/8/11.
//  Copyright (c) 2015年 Aldaron. All rights reserved.
//

#import "JSONModel.h"

@interface AWAttachmentItem : JSONModel

@property (nonatomic, copy) NSString *url;

@property (nonatomic, copy) NSString *thumbnail_url;

@property (nonatomic, assign) NSInteger attachment_id;

@property (nonatomic, assign) NSInteger views_count;

@property (nonatomic, copy) NSString *created_at;

@property (nonatomic, assign) NSInteger size;

@property (nonatomic, copy) NSString *content_type;

@end
