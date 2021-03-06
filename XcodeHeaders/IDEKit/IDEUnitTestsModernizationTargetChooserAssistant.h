/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEAssistant.h>

#import "IDEFilterControlBarTarget.h"
#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class DVTBorderedView, DVTOutlineView, IDEFilterControlBar, IDEMigrationTargetChooserStatePersistence, NSArray, NSImageView, NSMutableIndexSet, NSString, NSTextField, NSTreeController;

@interface IDEUnitTestsModernizationTargetChooserAssistant : IDEAssistant <NSOutlineViewDataSource, NSOutlineViewDelegate, IDEFilterControlBarTarget>
{
    NSArray *_targetItems;
    NSString *_searchString;
    NSMutableIndexSet *_expandedRowIndexes;
    NSArray *_selectedTargetChooserItems;
    IDEMigrationTargetChooserStatePersistence *_statePersistence;
    IDEFilterControlBar *_filterControlBar;
    DVTBorderedView *_scopeBarBorderedView;
    DVTOutlineView *_outlineView;
    DVTBorderedView *_borderedView;
    NSImageView *_warningIconImageView;
    NSTextField *_warningTextField;
    NSTreeController *_targetChooserItemsController;
}

+ (BOOL)automaticallyNotifiesObserversOfSearchString;
+ (id)keyPathsForValuesAffectingArrangedTargetItems;
+ (id)keyPathsForValuesAffectingCanGoForward;
- (void).cxx_destruct;
- (id)_attributedStringByHighlightingFindResults:(id)arg1;
- (id)_effectiveSelectedRowIndexes;
- (id)_findResultAttributes;
- (unsigned long long)_numberOfCheckedItemsAtIndexes:(id)arg1;
- (void)_restoreSelectedTargetChooserItemsAndExpandedRows;
- (void)_saveSelectedTargetChooserItemsAndExpandedRows;
- (void)_setChecked:(BOOL)arg1 forTargetChooserItemAtIndexes:(id)arg2;
@property(readonly, copy) NSArray *arrangedTargetItems;
- (BOOL)canCheckSelection;
- (BOOL)canGoForward;
- (BOOL)canUncheckSelection;
- (void)checkSelection:(id)arg1;
- (id)currentUIState;
- (id)filterButtonMenu;
- (id)filterControlBar;
- (id)filterDefinitionIdentifier;
- (void)loadUIState:(id)arg1;
- (void)loadView;
- (id)nextAssistantIdentifier;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)primitiveInvalidate;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy) NSArray *targetItems; // @synthesize targetItems=_targetItems;
- (id)stateRepositoryFilePath;
- (void)uncheckSelection:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)viewDidInstall;
- (void)viewWillUninstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

