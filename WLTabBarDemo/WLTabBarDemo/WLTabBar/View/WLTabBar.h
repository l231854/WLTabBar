//
//  WLTabBar.h
//  WLTabBar
//
//  Created by 雷王 on 2019/1/22.
//  Copyright © 2019年 WL. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WLTabBarItem.h"
@class WLTabBarItemModel;
@class WLTabBar;
//代理
@protocol  WLTabBarDelegate<NSObject>
@optional
- (void)tabBar:(WLTabBar *)tabBar didSelectButtonFrom:(NSInteger)from to:(NSInteger)to;

@end
NS_ASSUME_NONNULL_BEGIN

@interface WLTabBar : UIView
//初始化方法
+(WLTabBar *)initTabBarWithFrame:(CGRect)frame WithTabBarButtons:(NSArray*)tabBarButtons;
@property (nonatomic, strong) NSMutableArray *tabBarButtons;

@end

NS_ASSUME_NONNULL_END
