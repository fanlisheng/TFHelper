//
//  TFBCommonSize.h
//  TFBlue
//
//  Created by tion on 2018/11/13.
//  Copyright © 2018年 smarthome. All rights reserved.
//

#import <Foundation/Foundation.h>

/// <#Description#>
@interface CommonSize : NSObject

/**
 是否是刘海屏

 @return yes/no
 */
+ (BOOL)isHairHead;


/**
 状态栏高度

 @return 状态栏高度
 */
+ (CGFloat)statusBar_Height;


/**
 导航栏高度

 @return 导航栏高度
 */
+ (CGFloat)navigationBar_Height;


/**
 标签栏高度

 @return 标签栏高度
 */
+ (CGFloat)tabBar_Height;

//下面空白区域
+ (CGFloat)bottom_Height;
@end
