//
//  AWShotItem.h
//  DribbbleKitDemo
//
//  Created by mafengwo on 15/8/11.
//  Copyright (c) 2015年 Aldaron. All rights reserved.
//

#import "JSONModel.h"
#import "AWUserItem.h"
#import "AWTeamItem.h"

@interface AWShotItem : JSONModel

@property (nonatomic, copy) NSString *likes_url;

@property (nonatomic, copy) NSString *shot_description;

@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *buckets_url;

@property (nonatomic, copy) NSString *updated_at;

@property (nonatomic, assign) NSInteger animated;

@property (nonatomic, copy) NSString *comments_url;

@property (nonatomic, assign) NSInteger comments_count;

@property (nonatomic, copy) NSString *attachments_url;

@property (nonatomic, copy) NSString *rebounds_url;

@property (nonatomic, assign) NSInteger shot_id;

@property (nonatomic, assign) NSInteger buckets_count;

@property (nonatomic, assign) NSInteger attachments_count;

@property (nonatomic, assign) NSInteger rebounds_count;

@property (nonatomic, assign) NSInteger height;

@property (nonatomic, copy) NSDictionary *images;

@property (nonatomic, assign) NSInteger width;

@property (nonatomic, assign) NSInteger likes_count;

@property (nonatomic, copy) NSString *created_at;

@property (nonatomic, assign) NSInteger views_count;

@property (nonatomic, copy) NSString *projects_url;

@property (nonatomic, copy) NSString *html_url;

@property (nonatomic, copy) NSArray *tags;

@property (nonatomic, copy) AWUserItem *user;

@property (nonatomic, copy) AWTeamItem *team;

@end
