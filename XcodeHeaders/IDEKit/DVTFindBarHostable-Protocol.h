/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTFindBarFindable.h"

@protocol DVTFindBarHostable <DVTFindBarFindable>
- (void)dismissFindBar:(id)arg1 andRestoreSelection:(BOOL)arg2;

@optional
- (void)dvtFindBar:(id)arg1 didWrap:(BOOL)arg2 reverse:(BOOL)arg3;
- (BOOL)dvtFindBar:(id)arg1 validateUserInterfaceItem:(id)arg2;
- (id)viewToShowWrapOrEndOfFileBezelOn:(id)arg1;
@end
