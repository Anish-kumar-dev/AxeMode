/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSImage, NSString;

@interface IDEBatchFindLocationPickerItem : NSObject
{
    BOOL _isHeader;
    NSString *_name;
    NSImage *_image;
    NSArray *_children;
}

- (void).cxx_destruct;
@property(retain) NSArray *children; // @synthesize children=_children;
@property(retain) NSImage *image; // @synthesize image=_image;
- (id)initWithName:(id)arg1 image:(id)arg2 childItems:(id)arg3;
@property BOOL isHeader; // @synthesize isHeader=_isHeader;
@property(retain) NSString *name; // @synthesize name=_name;

@end
