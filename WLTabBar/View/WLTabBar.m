//
//  WLTabBar.m
//  WLTabBar
//
//  Created by 雷王 on 2019/1/22.
//  Copyright © 2019年 WL. All rights reserved.
//

#import "WLTabBar.h"

@implementation WLTabBar

+(WLTabBar *)initTabBarWithFrame:(CGRect)frame WithTabBarButtons:(NSArray*)tabBarButtons{
    WLTabBar *tabBar = [[WLTabBar alloc] initWithFrame:frame];
    tabBar.backgroundColor =[UIColor redColor];
    return tabBar;
}

@end
