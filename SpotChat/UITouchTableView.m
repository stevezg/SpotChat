//
//  UITouchTableView.m
//  SpotChat
//
//  Copyright (c) 2014 Strocca.
//

#import "UITouchTableView.h"

@implementation UITouchTableView

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)touchesBegan:(NSSet*)touches withEvent:(UIEvent*)event
{
    [self.nextResponder touchesBegan:touches withEvent:event];
}

@end
