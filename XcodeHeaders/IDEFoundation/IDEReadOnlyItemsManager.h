/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface IDEReadOnlyItemsManager : NSObject
{
}

+ (BOOL)_addUserWritePermissionToFilePath:(id)arg1 error:(id *)arg2;
+ (id)localizedDescriptionForReadOnlyStatus:(int)arg1 itemName:(id)arg2 pluralized:(BOOL)arg3;
+ (id)localizedRecoveryMessageForFailedUnlockingAttemptWithStatus:(int)arg1;
+ (id)readOnlyItemsManagerAspect;
+ (int)readOnlyStatusOfFilePath:(id)arg1;
+ (BOOL)shouldShowLockedIndicatorForStatus:(int)arg1;
+ (BOOL)tryToMakeFilePathWritable:(id)arg1 error:(id *)arg2;

@end

