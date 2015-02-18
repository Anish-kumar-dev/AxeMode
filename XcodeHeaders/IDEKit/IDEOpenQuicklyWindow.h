/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSWindow.h"

@class NSBezierPath;

@interface IDEOpenQuicklyWindow : NSWindow
{
    NSBezierPath *_clippingPath;
    double _cornerRadius;
}

+ (void)initialize;
- (void).cxx_destruct;
- (double)animationResizeTime:(struct CGRect)arg1;
- (BOOL)canBecomeKeyWindow;
@property(readonly) NSBezierPath *clippingPath; // @synthesize clippingPath=_clippingPath;
@property double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;

@end
