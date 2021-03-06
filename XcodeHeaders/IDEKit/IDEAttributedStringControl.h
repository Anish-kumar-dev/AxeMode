/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTLayoutView_ML.h"

#import "DVTInvalidation.h"
#import "IDEAttributedStringControlTextViewDelegate.h"
#import "IDEGroupedSegmentedControlDelegate.h"
#import "IDEParagraphStylePopoverControllerDelegate.h"

@class DVTFontTextField, DVTSegmentColorWell, DVTStackBacktrace, IDEAttributedStringControlParagraphStylePopoverController, IDEAttributedStringControlTextView, IDEGroupedSegmentedControl, IDEGroupedSegmentedControlGroup, IDEGroupedSegmentedControlItem, NSAttributedString, NSPopover, NSScrollView, NSStepper, NSString, NSTextView;

@interface IDEAttributedStringControl : DVTLayoutView_ML <IDEGroupedSegmentedControlDelegate, IDEParagraphStylePopoverControllerDelegate, IDEAttributedStringControlTextViewDelegate, DVTInvalidation>
{
    NSScrollView *_scrollView;
    IDEAttributedStringControlTextView *_textView;
    DVTFontTextField *_fontControl;
    NSStepper *_fontControlStepper;
    IDEGroupedSegmentedControl *_attributesStrip;
    DVTSegmentColorWell *_foregroundColorOverlay;
    DVTSegmentColorWell *_backgroundColorOverlay;
    IDEGroupedSegmentedControlGroup *_alignmentGroup;
    IDEGroupedSegmentedControlGroup *_colorGroup;
    IDEGroupedSegmentedControlGroup *_moreGroup;
    IDEGroupedSegmentedControlItem *_leftAlignmentItem;
    IDEGroupedSegmentedControlItem *_centerAlignmentItem;
    IDEGroupedSegmentedControlItem *_rightAlignmentItem;
    IDEGroupedSegmentedControlItem *_justifiedAlignmentItem;
    IDEGroupedSegmentedControlItem *_naturalAlignmentItem;
    IDEGroupedSegmentedControlItem *_foregroundColorItem;
    IDEGroupedSegmentedControlItem *_backgroundColorItem;
    IDEGroupedSegmentedControlItem *_moreItem;
    NSPopover *_paragraphStylePopover;
    IDEAttributedStringControlParagraphStylePopoverController *_paragraphStylePopoverController;
    long long numberOfEdits;
    id _target;
    SEL _action;
}

+ (void)initialize;
- (void).cxx_destruct;
@property SEL action; // @synthesize action=_action;
- (void)applyValueFromFontControl;
- (id)attributeValuesInSelectionForAttribute:(id)arg1;
@property(copy) NSAttributedString *attributedStringValue;
- (void)awakeFromNib;
- (void)changeBackgroundColor:(id)arg1;
- (void)changeForegroundColor:(id)arg1;
- (void)commitUpdatedAttributedStringValueToModel;
- (void)commitUpdatedAttributedStringValueToModelIfNeeded;
- (id)defaultTypingAttributes;
- (void)enumeratePargraphsInRange:(struct _NSRange)arg1 withBlock:(id)arg2;
- (void)enumerateSelectedParagraphsWithBlock:(id)arg1;
- (void)enumerateSelectedRangesForAttribute:(id)arg1 withBlock:(id)arg2;
- (void)fontWellUpdated:(id)arg1;
- (struct CGRect)frameToPlaceView:(id)arg1 afterView:(id)arg2 withGap:(double)arg3;
- (void)groupedSegmentedControl:(id)arg1 userClickedItem:(id)arg2 inGroup:(id)arg3;
- (void)incrementFontSize:(id)arg1;
- (BOOL)isFlipped;
- (void)layoutBottomUp;
- (void)layoutScrollView;
- (void)layoutTopDown;
- (id)paragraphEditingProxiesForSelection;
- (void)paragraphStylePopoverControllerDidChangeAttributes:(id)arg1;
@property(copy) NSString *placeholder;
- (void)primitiveInvalidate;
- (void)pushColorValue:(id)arg1 toColorWell:(id)arg2;
- (void)pushFontValue:(id)arg1 toFontWell:(id)arg2;
- (id)rangesToScanForAttributes;
- (void)refreshAttributeControls;
- (CDStruct_d659fc14)scrollViewConfiguration;
- (struct CGSize)scrollViewContentSizeForFrameSize:(struct CGSize)arg1;
@property __weak id target; // @synthesize target=_target;
- (void)setupAttributesStrip;
- (void)setupColorWells;
- (void)setupLayout;
- (void)setupPargraphStylePopUp;
- (struct CGSize)textContainerSize;
- (void)textDidChange:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
@property(readonly) NSTextView *textView;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChangeTypingAttributes:(id)arg1;
- (void)textViewDidCommitEditing:(id)arg1;
- (struct CGSize)textViewSizeForContainerSize:(struct CGSize)arg1;
- (double)textViewWidth;
- (struct CGSize)updateContainerLayoutAndComputeBounds;
- (void)updateSelectedRangesWithValue:(id)arg1 forAttribute:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

