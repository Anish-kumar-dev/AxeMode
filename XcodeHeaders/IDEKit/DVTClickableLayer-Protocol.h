/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol DVTClickableLayer <NSObject>
@property(copy) id clickHandlerBlock;
@property BOOL disableClickHandler;
- (void)fireClickHandler;
- (void)layerShouldShowClickedState;
- (void)layerShouldShowUnclickedState;
@property BOOL showsClickedState;
@end

