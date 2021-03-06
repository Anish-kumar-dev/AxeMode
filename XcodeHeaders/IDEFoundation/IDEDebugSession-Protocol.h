/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTTextDocumentLocation;

@protocol IDEDebugSession <NSObject>
- (BOOL)canContinueToLocation:(id)arg1 withinBlockAtRange:(struct _NSRange)arg2;
@property(readonly) int coalescedState;
- (BOOL)consoleShouldTrackInputHistory;
- (void)evaluateExpression:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(id)arg5;
- (void)evaluateExpression:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(id)arg4 resultHandler:(id)arg5;
- (void)executeDebuggerCommand:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3;
@property long long exitCode;
@property BOOL hasCrashed;
@property BOOL hasExitCode;
@property(readonly, copy, nonatomic) DVTTextDocumentLocation *instructionPointerLocation;
@property BOOL isDetached;
@property(getter=isProfilingSupported) BOOL profilingSupported;
@property(readonly) id <IDEDebugProcess> process;
- (struct _NSRange)rangeOfExpressionForFullTextAtPrompt:(id)arg1;
- (void)requestContinue;
- (void)requestContinueToLocation:(id)arg1;
- (void)requestDetach;
- (void)requestFetchEvent;
- (void)requestLoadDylibAtPath:(id)arg1 completionBlock:(id)arg2;
- (void)requestPause;
- (void)requestStepIn;
- (void)requestStepInSuspendOtherThreads;
- (void)requestStepIntoInstruction;
- (void)requestStepOut;
- (void)requestStepOverInstruction;
- (void)requestStepOverLine;
- (void)requestStepOverSuspendOtherThreads;
- (void)requestStop;
@property int state;
- (BOOL)shouldAcceptFromDebugSession:(id)arg1 error:(id *)arg2;
- (BOOL)shouldRelinquishToDebugSession:(id)arg1 error:(id *)arg2;
@end

