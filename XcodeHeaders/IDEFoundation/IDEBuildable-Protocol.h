/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTInvalidation.h"
#import "IDEBuildSettingsProvider.h"
#import "NSObject.h"

@class IDEEntityIdentifier, NSSet, NSString;

@protocol IDEBuildable <IDEBuildSettingsProvider, DVTInvalidation, NSObject>
- (id)absolutePathByEvaluatingBuildSettingExpressionString:(id)arg1 withBuildParameters:(id)arg2;
- (id)allBuildSettingNamesWithBuildParameters:(id)arg1;
@property(readonly) id <IDEBlueprint> blueprint;
@property(readonly, copy) NSString *buildableIdentifier;
- (id)createBuilderForBuildCommand:(int)arg1 withBuildTaskQueueSet:(id)arg2 parameters:(id)arg3 buildOnlyTheseFiles:(id)arg4 restorePersistedBuildResults:(BOOL)arg5 withManager:(id)arg6;
- (id)directDependencies;
@property(readonly) NSString *displayName;
@property(readonly, copy) IDEEntityIdentifier *entityIdentifier;
- (id)evaluatedStringListValueForBuildSetting:(id)arg1 withBuildParameters:(id)arg2;
- (id)evaluatedStringValueForBuildSetting:(id)arg1 withBuildParameters:(id)arg2;
@property(readonly) BOOL hasRecursiveDependencyCycle;
- (id)implicitDependenciesForBuildParameters:(id)arg1 executionEnvironment:(id)arg2 returningMessages:(id *)arg3;
@property(readonly, copy) NSString *legacyIdentifier;
@property(readonly) NSSet *namesOfLinkedBinaries;
- (id)orderedRecursiveDependenciesIncludingSelf:(BOOL)arg1;
@property(readonly) NSSet *pathsOfFilesInCopyFilesBuildPhases;
@property(readonly) NSSet *pathsOfFilesInLinkedBinariesPhase;
- (id)stringByEvaluatingBuildSettingExpressionString:(id)arg1 withBuildParameters:(id)arg2;
- (id)toolSearchPathWithBuildParameters:(id)arg1;
@property(readonly) NSString *toolTip;
- (id)uncachedOrderedRecursiveDependenciesIncludingSelf:(BOOL)arg1 visitedBuildables:(id)arg2;

@optional
- (Class)buildOperationManagerClass;
@end
