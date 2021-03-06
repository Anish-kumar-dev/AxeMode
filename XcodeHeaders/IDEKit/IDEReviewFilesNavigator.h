/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDENavigator.h>

@class DVTBorderedView, DVTChooserView, DVTDocumentLocation, IDENavigatorFilterControlBar, IDENavigatorOutlineView, IDEReviewFilesButtonCell, IDEReviewFilesImageCell, IDESelection, NSArray, NSIndexSet, NSMenu, NSMutableArray, NSMutableIndexSet, NSMutableSet, NSString, NSTabView;

@interface IDEReviewFilesNavigator : IDENavigator
{
    DVTChooserView *_chooserView;
    NSTabView *_tabView;
    IDENavigatorOutlineView *_workspaceOutlineView;
    IDENavigatorOutlineView *_fileSystemOutlineView;
    IDENavigatorOutlineView *_flatOutlineView;
    IDENavigatorOutlineView *_issuesOutlineView;
    DVTBorderedView *_outerBorderedView;
    IDEReviewFilesButtonCell *_checkboxCell;
    IDEReviewFilesImageCell *_imageCell;
    NSMutableArray *_checkedFilePaths;
    NSMutableArray *_completedFilePaths;
    NSMutableSet *_mixedStateFilePaths;
    NSMutableArray *_disabledFilePaths;
    NSArray *_viewChoices;
    NSIndexSet *_selectedViewIndexes;
    NSString *_selectedChoiceWithWorkspaceKey;
    NSString *_selectedChoiceWithoutWorkspaceKey;
    NSArray *_selectedFilePaths;
    DVTDocumentLocation *_selectedDocumentLocation;
    id <IDEReviewFilesDataSource> _workspaceDataSource;
    id <IDEReviewFilesDataSource> _fileSystemDataSource;
    id <IDEReviewFilesDataSource> _flatDataSource;
    id <IDEReviewFilesDataSource> _issueDataSource;
    int _activity;
    NSMutableIndexSet *_lastSelectedIndexes;
    DVTBorderedView *_filterControlBarBorderedView;
    IDENavigatorFilterControlBar *_filterControlBar;
    NSString *_filterString;
    BOOL _showFilter;
    BOOL _showCheckboxes;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingCheckedFilePaths;
+ (id)keyPathsForValuesAffectingFilterPredicate;
- (void).cxx_destruct;
@property int activity; // @synthesize activity=_activity;
- (void)addFilePathToMixedState:(id)arg1;
- (void)checkItemsAtFilePaths:(id)arg1;
- (id)checkboxCell;
@property(retain) NSArray *checkedFilePaths; // @synthesize checkedFilePaths=_checkedFilePaths;
@property(retain) NSMutableArray *completedFilePaths; // @synthesize completedFilePaths=_completedFilePaths;
@property(retain) NSMenu *contextMenu;
@property(readonly) IDESelection *contextMenuSelection;
@property(readonly) IDENavigatorOutlineView *currentOutlineView;
@property(retain) NSMutableArray *disabledFilePaths; // @synthesize disabledFilePaths=_disabledFilePaths;
- (id)domainIdentifier;
@property(retain) id <IDEReviewFilesDataSource> fileSystemDataSource; // @synthesize fileSystemDataSource=_fileSystemDataSource;
@property(readonly) IDENavigatorOutlineView *fileSystemOutlineView;
- (id)filterPredicate;
@property(copy) NSString *filterString; // @synthesize filterString=_filterString;
@property(retain) id <IDEReviewFilesDataSource> flatDataSource; // @synthesize flatDataSource=_flatDataSource;
@property(readonly) IDENavigatorOutlineView *flatOutlineView;
- (id)imageCell;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(retain) id <IDEReviewFilesDataSource> issueDataSource; // @synthesize issueDataSource=_issueDataSource;
@property(readonly) IDENavigatorOutlineView *issuesOutlineView;
- (void)loadView;
@property(retain) NSMutableSet *mixedStateFilePaths; // @synthesize mixedStateFilePaths=_mixedStateFilePaths;
- (id)navigableChildItemOfItem:(id)arg1 matchingFilePath:(id)arg2;
- (id)navigableItemsInOutlineView:(id)arg1 forFilePaths:(id)arg2;
- (id)outlineView:(id)arg1 childItemsForItem:(id)arg2;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)primitiveInvalidate;
- (void)refreshItemsAtFilePaths:(id)arg1;
- (void)reloadAvailableNavigators;
- (void)removeFilePathFromMixedState:(id)arg1;
@property(copy) NSString *selectedChoiceWithWorkspaceKey; // @synthesize selectedChoiceWithWorkspaceKey=_selectedChoiceWithWorkspaceKey;
@property(copy) NSString *selectedChoiceWithoutWorkspaceKey; // @synthesize selectedChoiceWithoutWorkspaceKey=_selectedChoiceWithoutWorkspaceKey;
@property(readonly) DVTDocumentLocation *selectedDocumentLocation; // @synthesize selectedDocumentLocation=_selectedDocumentLocation;
@property(retain) NSMutableArray *selectedFilePaths;
- (id)selectedFilePathsOfOutlineView:(id)arg1;
- (id)selectedNavigableItemsOfOutlineView:(id)arg1;
@property(copy) NSIndexSet *selectedViewIndexes; // @synthesize selectedViewIndexes=_selectedViewIndexes;
- (void)setSelectedFilePaths:(id)arg1 forOutlineView:(id)arg2;
- (void)setSelectedNavigableItems:(id)arg1 forOutlineView:(id)arg2;
@property BOOL showCheckboxes; // @synthesize showCheckboxes=_showCheckboxes;
@property BOOL showFilter; // @synthesize showFilter=_showFilter;
@property(retain) id <IDEReviewFilesDataSource> workspaceDataSource; // @synthesize workspaceDataSource=_workspaceDataSource;
- (void)setupViewChoices;
- (id)successImage;
- (void)uncheckItemsAtFilePaths:(id)arg1;
- (void)updateSelectedDocumentLocation;
@property(readonly) NSArray *viewChoices; // @synthesize viewChoices=_viewChoices;
- (void)viewDidInstall;
- (void)viewWillUninstall;
@property(readonly) IDENavigatorOutlineView *workspaceOutlineView;

@end

