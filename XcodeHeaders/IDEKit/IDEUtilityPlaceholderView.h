/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTLayoutView_ML.h"

@class NSColor, NSString, NSTextField;

@interface IDEUtilityPlaceholderView : DVTLayoutView_ML
{
    NSTextField *_placeholderTextField;
    NSColor *_backgroundColor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutBottomUp;
@property(copy, nonatomic) NSString *placeholderString;
@property(retain, nonatomic) NSTextField *placeholderTextField; // @synthesize placeholderTextField=_placeholderTextField;

@end
