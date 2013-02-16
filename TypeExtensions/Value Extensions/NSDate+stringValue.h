//
//  NSDate+stringValue.h
//  TypeExtensions
//
//  Created by Ethan Reesor on 2/13/13.
//  Copyright (c) 2013 Lens Flare. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (stringValue)

+ (NSDateFormatter *)defaultFormatter;
+ (NSDateFormatter *)formatter;
+ (void)setFormatter:(NSDateFormatter *)formatter;

- (NSString *)stringValue;

@end