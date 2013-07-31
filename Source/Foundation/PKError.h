//
//  PKError.h
//  PKToolBox
//
//  Created by Pavel Kunc on 02/05/2012.
//  Copyright (c) 2012 Pavel Kunc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PKError : NSError

+ (id)errorWithCode:(NSInteger)code;
+ (id)errorWithCode:(NSInteger)code format:(NSString *)format, ...;
+ (id)errorWithCode:(NSInteger)code description:(NSString *)description;
+ (id)errorWithCode:(NSInteger)code userInfo:(NSDictionary *)dict;

@end
