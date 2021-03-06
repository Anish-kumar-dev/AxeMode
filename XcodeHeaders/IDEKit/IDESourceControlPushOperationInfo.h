/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDESourceControlOperationInfo.h>

@class IDESourceControlBranch, IDESourceControlRepository;

@interface IDESourceControlPushOperationInfo : IDESourceControlOperationInfo
{
    IDESourceControlRepository *_remote;
    IDESourceControlBranch *_remoteBranch;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)processInfoWithProgressBlock:(id)arg1 isSingleOperation:(void)arg2 completionBlock:(BOOL)arg3;
@property(retain) IDESourceControlRepository *remote; // @synthesize remote=_remote;
@property(retain) IDESourceControlBranch *remoteBranch; // @synthesize remoteBranch=_remoteBranch;

@end

