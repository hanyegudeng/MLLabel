//
//  MLLabel.h
//  MLLabel
//
//  Created by molon on 15/5/18.
//  Copyright (c) 2015年 molon. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, MLLastTextType) {
    MLLastTextTypeNormal,
    MLLastTextTypeAttributed,
};
// UILabel的baselineAdjustment属性功能没模拟,其他的属性都模拟了

@interface MLLabel : UILabel

@property (nonatomic, assign) UIEdgeInsets textInsets;

@property (nonatomic, assign) CGFloat lineSpacing;

@property (nonatomic, copy) void(^doBeforeDrawingTextBlock)(CGRect rect,CGPoint beginOffset,CGSize drawSize);

- (CGSize)preferredSizeWithMaxWidth:(CGFloat)maxWidth withHeight:(CGFloat)height;


//方便码代码
- (void)setDoBeforeDrawingTextBlock:(void (^)(CGRect rect,CGPoint beginOffset,CGSize drawSize))doBeforeDrawingTextBlock;
@end
