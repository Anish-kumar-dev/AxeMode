/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface IDESourceControlVIP : NSObject
{
    NSString *_name;
    NSArray *_workingTrees;
    NSArray *_filterItems;
}

- (void).cxx_destruct;
@property(copy) NSArray *filterItems; // @synthesize filterItems=_filterItems;
@property(copy) NSString *name; // @synthesize name=_name;
- (id)navigableItem_image;
- (id)navigableItem_name;
@property(copy) NSArray *workingTrees; // @synthesize workingTrees=_workingTrees;

@end

