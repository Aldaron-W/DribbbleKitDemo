//
//  AWUserItem.h
//  DribbbleKitDemo
//
//  Created by mafengwo on 15/8/11.
//  Copyright (c) 2015年 Aldaron. All rights reserved.
//

#import "JSONModel.h"

@interface AWUserItem : JSONModel

@property (nonatomic, assign) NSInteger pro;

@property (nonatomic, copy) NSString *location;

@property (nonatomic, copy) NSDictionary *links;

@property (nonatomic, copy) NSString *username;

@property (nonatomic, copy) NSString *following_url;

@property (nonatomic, assign) NSInteger projects_count;

@property (nonatomic, copy) NSString *buckets_url;

@property (nonatomic, copy) NSString *updated_at;

@property (nonatomic, assign) NSInteger shots_count;

@property (nonatomic, assign) NSInteger rebounds_received_count;

@property (nonatomic, copy) NSString *bio;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *avatar_url;

@property (nonatomic, assign) NSInteger can_upload_shot;

@property (nonatomic, copy) NSString *type;

@property (nonatomic, copy) NSString *shots_url;

@property (nonatomic, assign) NSInteger user_id;

@property (nonatomic, assign) NSInteger buckets_count;

@property (nonatomic, assign) NSInteger teams_count;

@property (nonatomic, copy) NSString *teams_url;

@property (nonatomic, assign) NSInteger followers_count;

@property (nonatomic, assign) NSInteger likes_received_count;

@property (nonatomic, assign) NSInteger likes_count;

@property (nonatomic, assign) NSInteger followings_count;

@property (nonatomic, copy) NSString *created_at;

@property (nonatomic, copy) NSString *followers_url;

@property (nonatomic, assign) NSInteger comments_received_count;

@property (nonatomic, copy) NSString *likes_url;

@property (nonatomic, copy) NSString *html_url;

@end
