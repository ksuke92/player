//
//  ShowTimeModelController.h
//  player
//
//  Created by 恵介 関 on 12/07/01.
//  Copyright (c) 2012年 ShowTime, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ShowTimeDataViewController;

@interface ShowTimeModelController : NSObject <UIPageViewControllerDataSource>
- (ShowTimeDataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(ShowTimeDataViewController *)viewController;
@end
