/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDEBuildTask.h>

@class NSArray, NSDictionary, NSString, NSTask;

@interface IDECommandLineBuildTask : IDEBuildTask
{
    NSTask *_task;
}

+ (id)buildTaskWithIdentifier:(id)arg1 restorePersistedBuildResults:(BOOL)arg2 command:(id)arg3;
+ (id)buildTaskWithIdentifier:(id)arg1 restorePersistedBuildResults:(BOOL)arg2 commandLine:(id)arg3;
+ (id)buildTaskWithIdentifier:(id)arg1 restorePersistedBuildResults:(BOOL)arg2 commandLine:(id)arg3 workingDirectory:(id)arg4 environmentEntries:(id)arg5;
- (void).cxx_destruct;
@property(readonly) NSArray *commandLine;
- (void)dealloc;
- (id)description;
@property(readonly) NSDictionary *environmentEntries;
- (id)initWithIdentifier:(id)arg1 restorePersistedBuildResults:(BOOL)arg2 properties:(id)arg3;
- (void)main;
@property(readonly) NSString *workingDirectory;

@end

