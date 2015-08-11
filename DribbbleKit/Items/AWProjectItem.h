//
//  AWProjectItem.h
//  DribbbleKitDemo
//
//  Created by mafengwo on 15/8/11.
//  Copyright (c) 2015年 Aldaron. All rights reserved.
//

#import "JSONModel.h"

@interface AWProjectItem : JSONModel

@property (nonatomic, copy) NSString *created_at;

@property (nonatomic, assign) NSInteger project_id;

@property (nonatomic, copy) NSString *updated_at;

@property (nonatomic, assign) NSInteger shots_count;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *project_description;

@end
