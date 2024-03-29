//
//  UIImage+tools.h
//  learning
//
//  Created by 祥伟 on 2018/6/15.
//  Copyright © 2018年 wanda. All rights reserved.
//

#import <UIKit/UIKit.h>

#define IMG(i) [UIImage imageNamed:i]

#define OrgIMG(i) [IMG(i) imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal]

#define BundIMG(i,t) [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:i ofType:t]]

@interface UIImage (tools)

//图片拉伸
+ (UIImage *)imageStretchableWithName:(NSString *)imageName;

+ (UIImage *)createImageWithColor:(UIColor *)color;
+ (UIImage *)createImageWithColor:(UIColor *)color size:(CGSize)size;

//绘制圆角
- (UIImage *)circleImageWithCornerRadius:(CGFloat)radius;

@end
