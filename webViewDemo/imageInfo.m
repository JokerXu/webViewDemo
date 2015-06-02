//
//  imageInfo.m
//  webViewDemo
//
//  Created by 徐坤 on 15/6/2.
//  Copyright (c) 2015年 xukun. All rights reserved.
//

#import "ImageInfo.h"

@implementation imageInfo

- (id)initWithInfo:(NSDictionary *)dic
{
    if (self) {
        [self setValuesForKeysWithDictionary:dic];//kvc
    }
    return self;
}

- (void)setValue:(id)value forUndefinedKey:(NSString *)key
{
    
}

@end
