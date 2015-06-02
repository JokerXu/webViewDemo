//
//  videoInfo.h
//  webViewDemo
//
//  Created by 徐坤 on 15/6/2.
//  Copyright (c) 2015年 xukun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface videoInfo : NSObject

- (id)initWithInfo:(NSDictionary *)dic;

@property (nonatomic,retain)NSString *url_mp4;

@property(nonatomic,retain)NSString *ref;
@end
