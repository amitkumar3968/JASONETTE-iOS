//
//  JasonComponent.h
//  Jasonette
//
//  Copyright © 2016 gliechtenstein. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "JasonComponentProtocol.h"
#import "UIView+JasonComponentPayload.h"
#import "JasonHelper.h"

@interface JasonComponent : NSObject <JasonComponentProtocol>
+ (UIView *)build: (NSDictionary *)json intoElement:(UIView*)component withOptions: (NSDictionary *)options;
+ (void)stylize: (NSDictionary *)json component: (UIView *)el;
+ (void)stylize: (NSDictionary *)json text: (UIView *)el;
+ (void)updateForm:(NSDictionary *)kv;
@end
