/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCache, NSMutableDictionary, NSOperationQueue;

@interface IDESourceControlPatchManager : NSObject
{
    NSCache *_temporaryDirectoriesMap;
    NSMutableDictionary *_recentPatches;
    NSOperationQueue *_queue;
}

+ (id)sharedPatchManager;
- (void).cxx_destruct;
- (id)_applyPatchToFileFromNode:(id)arg1 toFilePath:(id)arg2;
- (id)_managerDirectory;
- (id)_recentPatchPathStringsForWorkspace:(id)arg1;
- (id)_restoreUntouchedFileFromNode:(id)arg1 toFilePath:(id)arg2;
- (BOOL)_revertItem:(id)arg1 fromPatch:(id)arg2 atLocation:(id)arg3 withError:(id *)arg4;
- (void)_saveRecentPatches:(id)arg1 forWorkspace:(id)arg2;
- (void)addRecentPatch:(id)arg1 forWorkspace:(id)arg2;
- (id)baseRevisionForTree:(id)arg1 inPatch:(id)arg2;
- (void)createPatchForDiffDescriptors:(id)arg1 comparisonDocumentLocation:(id)arg2 inWorkspace:(id)arg3 atFilePath:(id)arg4 withName:(id)arg5 withCompletionBlock:(id)arg6;
- (void)createPatchForItems:(id)arg1 inWorkspace:(id)arg2 withCompletionBlock:(id)arg3;
- (void)createPatchForWorkingTree:(id)arg1 inWorkspace:(id)arg2 withCompletionBlock:(id)arg3;
- (void)createPatchForWorkspace:(id)arg1 withName:(id)arg2 message:(id)arg3 atFilePath:(id)arg4 withCompletionBlock:(id)arg5;
- (void)createPatchForWorkspace:(id)arg1 withName:(id)arg2 message:(id)arg3 withCompletionBlock:(id)arg4;
- (id)importPatchAtURL:(id)arg1 toWorkspace:(id)arg2 withError:(id *)arg3;
- (id)init;
- (id)listPatchesForWorkspace:(id)arg1;
- (void)modifiedFilePathsForRootFilePath:(id)arg1 patch:(id)arg2 withCompletionBlock:(id)arg3;
- (void)removeRecentPatch:(id)arg1 fromWorkspace:(id)arg2;
- (void)restoreAncestorItem:(id)arg1 fromPatch:(id)arg2 withCompletionBlock:(id)arg3;
- (void)restoreOriginalItem:(id)arg1 fromPatch:(id)arg2 withCompletionBlock:(id)arg3;
- (void)revertPatch:(id)arg1 inWorkspace:(id)arg2 withCompletionBlock:(id)arg3;
- (void)rootFilePathsForPatch:(id)arg1 withCompletionBlock:(id)arg2;
- (id)uniqueTemporaryDirectory;

@end

