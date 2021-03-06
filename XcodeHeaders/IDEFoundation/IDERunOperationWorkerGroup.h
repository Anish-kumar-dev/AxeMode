/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDERunOperationWorker.h>

#import "IDERunOperationWorkerDelegate.h"
#import "IDERunOperationWorkerTracker.h"

@class NSArray, NSString;

@interface IDERunOperationWorkerGroup : IDERunOperationWorker <IDERunOperationWorkerDelegate, IDERunOperationWorkerTracker>
{
    NSArray *_subworkers;
    unsigned long long _finishedSubworkers;
    BOOL _shouldStartNextWorker;
    unsigned long long _currentWorkerIndex;
}

- (void).cxx_destruct;
- (void)_startNextWorker;
- (void)allSubworkersDidFinishWithError:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithExtensionIdentifier:(id)arg1 launchSession:(id)arg2;
- (id)initWithWorkers:(id)arg1 launchSession:(id)arg2;
- (void)primitiveInvalidate;
- (void)runningDidFinish:(id)arg1 withError:(id)arg2;
- (void)start;
- (void)terminate;
- (void)workerDidComplete:(id)arg1 withError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

