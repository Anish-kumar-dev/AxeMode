/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "IDEDebugNavigableModel.h"

@class NSArray, NSString;

@protocol IDEDebugProcess <IDEDebugNavigableModel>
- (id)contentDelegateUIExtensionIdentifier;
@property(copy, nonatomic) NSString *name;

@optional
@property(readonly, nonatomic) NSArray *loadedCodeModules;
@end
