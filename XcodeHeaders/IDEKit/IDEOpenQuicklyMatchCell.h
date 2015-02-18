/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSActionCell.h"

@class IDEOpenQuicklyContext, NSImage;

@interface IDEOpenQuicklyMatchCell : NSActionCell
{
    IDEOpenQuicklyContext *_matchContext;
    NSImage *_image;
}

+ (struct CGRect)_frameForSubtitleWithImageFrame:(struct CGRect)arg1 titleFrame:(struct CGRect)arg2;
+ (struct CGRect)_frameForTitleWithImageFrame:(struct CGRect)arg1 cellFrame:(struct CGRect)arg2;
+ (struct CGRect)_imageFrameWithCellFrame:(struct CGRect)arg1;
+ (id)_subtitleAttributes;
+ (id)_subtitleParagraphStyle;
+ (id)_titleAttributesUsingHighlight:(BOOL)arg1;
+ (id)_titleParagraphStyle;
- (void).cxx_destruct;
- (id)_attributedSubtitleUsingHighlight:(BOOL)arg1;
- (id)_attributedTitleUsingHighlight:(BOOL)arg1;
- (void)_drawImageWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_dropCaches;
- (id)_image;
- (id)_match;
- (BOOL)_shouldUseHighlightInView:(id)arg1;
- (id)_titleWithAttributes:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)location;
@property(retain, nonatomic) IDEOpenQuicklyContext *matchContext; // @synthesize matchContext=_matchContext;
- (void)setObjectValue:(id)arg1;

@end
