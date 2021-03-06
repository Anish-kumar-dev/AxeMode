/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDESchemeAction.h>

#import "DVTXMLUnarchiving.h"

@class NSArray, NSString;

@interface IDEInstallSchemeAction : IDESchemeAction <DVTXMLUnarchiving>
{
    NSString *_buildConfiguration;
    NSString *_customInstallName;
    NSArray *_killProcessList;
}

+ (BOOL)allowInstallSchemeAction;
+ (id)keyPathsForValuesAffectingDefaultInstallName;
+ (id)keyPathsForValuesAffectingKillProcessListString;
+ (id)keyPathsForValuesAffectingSubtitle;
- (void).cxx_destruct;
- (void)_commonInit;
@property(copy) NSString *buildConfiguration; // @synthesize buildConfiguration=_buildConfiguration;
@property(copy) NSString *customInstallName; // @synthesize customInstallName=_customInstallName;
@property(readonly) NSString *defaultInstallName;
- (BOOL)doesNonActionWork;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (BOOL)hasDefaultValues;
- (id)init;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)installOperationWithExecutionEnvironment:(id)arg1 withBuildOperation:(id)arg2 buildParameters:(id)arg3 schemeActionRecord:(id)arg4 outError:(id *)arg5 actionCallbackBlock:(id)arg6;
@property(copy) NSArray *killProcessList; // @synthesize killProcessList=_killProcessList;
@property(copy) NSString *killProcessListString;
- (id)name;
- (id)overridingMacrosForInstallBuildForWorkspaceArena:(id)arg1 destination:(id)arg2;
- (void)setBuildConfigurationFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setCustomInstallNameFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setKillProcessesFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (id)subtitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

