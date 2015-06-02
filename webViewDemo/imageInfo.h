//
//  imageInfo.h
//  webViewDemo
//
//  Created by 徐坤 on 15/6/2.
//  Copyright (c) 2015年 xukun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface imageInfo : NSObject

@property(nonatomic,copy)NSString *alt;
@property(nonatomic,copy)NSString *pixel;
@property(nonatomic,copy)NSString *ref;
@property(nonatomic,copy)NSString *src;

- (id)initWithInfo:(NSDictionary *)dic;


@end
