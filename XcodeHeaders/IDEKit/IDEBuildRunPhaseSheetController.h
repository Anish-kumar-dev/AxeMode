/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "IDEFilePickerViewDelegate.h"

@class DVTBorderedView, DVTGradientImageButton, DVTOutlineView, DVTScrollView, DVTSearchField, IDEBuildSchemeAction, IDEScheme, IDEWorkspace, NSArray, NSString, NSView;

@interface IDEBuildRunPhaseSheetController : IDEViewController <IDEFilePickerViewDelegate>
{
    DVTOutlineView *_outlineView;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_deleteButton;
    DVTBorderedView *_topBorderedView;
    DVTSearchField *_searchField;
    IDEScheme *_runContext;
    IDEWorkspace *_workspace;
    IDEBuildSchemeAction *_runPhase;
    NSString *_filterString;
    id _buildablesDidChangeNotificationToken;
    DVTScrollView *_buildTargetsScrollView;
    NSView *_controlBar;
}

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)_getItemsToDelete:(id *)arg1;
- (BOOL)_shouldEnableFilePickerItem:(id)arg1;
- (void)_updateDeleteButton;
- (void)addBlueprintsAction:(id)arg1;
@property(readonly) NSArray *blueprintProviderWrappers;
@property __weak DVTScrollView *buildTargetsScrollView; // @synthesize buildTargetsScrollView=_buildTargetsScrollView;
@property __weak NSView *controlBar; // @synthesize controlBar=_controlBar;
- (void)deleteBlueprintsAction:(id)arg1;
- (BOOL)doesFilterStringIncludeName:(id)arg1;
- (id)dvtExtraBindings;
- (void)filePickerView:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forTableColumn:(id)arg4 item:(id)arg5;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
- (id)filteredBuildActionEntries;
- (id)filteredBuildables:(id)arg1;
- (void)loadView;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)primitiveInvalidate;
@property(retain) IDEScheme *runContext; // @synthesize runContext=_runContext;
@property(retain) IDEBuildSchemeAction *runPhase; // @synthesize runPhase=_runPhase;
@property(retain) IDEWorkspace *workspace;
- (void)updateBoundContent;
- (void)updateBoundIDERunContextBinding;
- (void)updateBoundIDEWorkspaceBinding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

