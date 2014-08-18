//
//  LIREChooserArrowView.h
//  LIRichEditorLibrary
//
//  Created by Austin Zheng on 5/29/14.
//  Copyright (c) 2014 LinkedIn. All rights reserved.
//

#import <UIKit/UIKit.h>

// NOTE: This view doesn't do much at the moment. It's provided in case you want some sort of shading or other visual
//  effects to be applied to the triangular notch in the border.

@interface LIREChooserArrowView : UIView

@property (nonatomic) BOOL pointingUp;
@property (nonatomic, strong) UIColor *tipGradientColor;
@property (nonatomic, strong) UIColor *baseGradientColor;

+ (instancetype)chooserArrowViewPointingUp:(BOOL)pointingUp;

@end
