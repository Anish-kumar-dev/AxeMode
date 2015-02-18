/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTFilePath, NSURL;

@interface IDEBotSCMAction : NSObject
{
    NSURL *_repositoryURL;
    DVTFilePath *_destinationPath;
}

+ (id)_performBotSCMAction:(int)arg1 repositoryURL:(id)arg2 version:(id)arg3 destinationPath:(id)arg4 username:(id)arg5 password:(id)arg6 completionBlock:(id)arg7;
+ (id)performGitCheckoutBranch:(id)arg1 destinationPath:(id)arg2 completionBlock:(id)arg3;
+ (id)performGitCloneRepositoryURL:(id)arg1 destinationPath:(id)arg2 username:(id)arg3 password:(id)arg4 completionBlock:(id)arg5;
+ (id)performGitResetHeadWithHash:(id)arg1 destinationPath:(id)arg2 completionBlock:(id)arg3;
+ (id)performGitUpdateLocalRepositoryAtPath:(id)arg1 username:(id)arg2 password:(id)arg3 completionBlock:(id)arg4;
+ (id)performSVNCheckoutRepositoryURL:(id)arg1 revision:(id)arg2 destinationPath:(id)arg3 username:(id)arg4 password:(id)arg5 completionBlock:(id)arg6;
+ (id)performSVNUpdateLocalRepositoryAtPath:(id)arg1 username:(id)arg2 password:(id)arg3 completionBlock:(id)arg4;
+ (void)verifyIfSCMIsTrackingFileAtPath:(id)arg1 completionBlock:(id)arg2;
- (void).cxx_destruct;
- (void)_currentBranchForWorkingTree:(id)arg1 currentBranchNameCompletionBlock:(id)arg2;
- (void)_gitCheckoutBranchWithExtension:(id)arg1 branch:(id)arg2 destinationPath:(id)arg3 completionBlock:(id)arg4;
- (void)_gitCloneWithExtension:(id)arg1 repositoryURL:(id)arg2 branch:(id)arg3 destinationPath:(id)arg4 username:(id)arg5 password:(id)arg6 completionBlock:(id)arg7;
- (void)_gitResetHeadWithExtension:(id)arg1 hash:(id)arg2 destinationPath:(id)arg3 completionBlock:(id)arg4;
- (void)_gitUpdateWithExtension:(id)arg1 repositoryURL:(id)arg2 destinationPath:(id)arg3 username:(id)arg4 password:(id)arg5 completionBlock:(id)arg6;
- (void)_remoteRepositoryURLForLocalRepositoryPath:(id)arg1 completionBlock:(id)arg2;
- (void)_svnCheckoutWithExtension:(id)arg1 repositoryURL:(id)arg2 revision:(id)arg3 destinationPath:(id)arg4 username:(id)arg5 password:(id)arg6 completionBlock:(id)arg7;
- (void)_svnUpdateWithExtension:(id)arg1 repositoryURL:(id)arg2 destinationPath:(id)arg3 username:(id)arg4 password:(id)arg5 completionBlock:(id)arg6;
@property(readonly, copy, nonatomic) DVTFilePath *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(readonly, copy, nonatomic) NSURL *repositoryURL; // @synthesize repositoryURL=_repositoryURL;

@end
