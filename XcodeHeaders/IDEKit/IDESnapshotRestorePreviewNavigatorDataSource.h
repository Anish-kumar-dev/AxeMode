/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDESnapshotPreviewComparisonEditorDataSource.h>

#import "IDEReviewFilesDataSource.h"

@class DVTFilePath, IDENavigatorDataCell, NSArray, NSMutableSet, NSString;

@interface IDESnapshotRestorePreviewNavigatorDataSource : IDESnapshotPreviewComparisonEditorDataSource <IDEReviewFilesDataSource>
{
    IDENavigatorDataCell *_cachedFileReferenceCell;
    NSArray *_navigableItems;
    DVTFilePath *_restoreRootPath;
    DVTFilePath *_extractedSnapshotPath;
    NSMutableSet *_bindingTokens;
}

- (void).cxx_destruct;
- (id)contentStringForPrimaryEmptyEditorWithDocumentLocation:(id)arg1;
- (id)contentStringForSecondaryEmptyEditorWithDocumentLocation:(id)arg1;
- (void)dealloc;
@property(retain) DVTFilePath *extractedSnapshotPath; // @synthesize extractedSnapshotPath=_extractedSnapshotPath;
- (id)fileSystemNavigableItems;
- (id)flatNavigableItems;
- (id)init;
- (id)issueNavigableItems;
@property(retain) NSArray *navigableItems; // @synthesize navigableItems=_navigableItems;
@property(retain) DVTFilePath *restoreRootPath; // @synthesize restoreRootPath=_restoreRootPath;
- (id)reviewFilesNavigator:(id)arg1 documentLocationForNavigableItem:(id)arg2;
- (id)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 dataCellForNavigableItem:(id)arg3;
- (BOOL)shouldShowEmptyEditorForPrimaryDocumentLocation:(id)arg1 submodeType:(int)arg2;
- (BOOL)shouldShowEmptyEditorForSecondaryDocumentLocation:(id)arg1 submodeType:(int)arg2;
- (void)teardown;
- (id)workspaceNavigableItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
