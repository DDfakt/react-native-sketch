//
//  RNSketch.h
//  RNSketch
//
//  Created by Jeremy Grancher on 28/04/2016.
//  Copyright © 2016 Jeremy Grancher. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <React/UIView+React.h>

@interface RNSketch : UIView

- (void)clear;
- (NSString *)base64Code;

// Events
@property (nonatomic, copy) RCTBubblingEventBlock onChange;
@property (nonatomic, copy) RCTBubblingEventBlock onClear;

// Properties
@property (nonatomic, strong) UIColor *color;
@property (nonatomic, strong) NSString *imageType;
@property (nonatomic, assign) NSInteger thickness;

@end
