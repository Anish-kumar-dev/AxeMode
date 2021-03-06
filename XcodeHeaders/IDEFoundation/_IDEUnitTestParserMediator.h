/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/_IDETestResultsProcessor.h>

#import "DVTInvalidation.h"
#import "IDEOCUnitTestOutputParserDelegate.h"

@class DVTObservingToken, DVTStackBacktrace, IDEConsoleAdaptor, IDEOCUnitTestOutputParser, NSMutableArray, NSString;

@interface _IDEUnitTestParserMediator : _IDETestResultsProcessor <DVTInvalidation, IDEOCUnitTestOutputParserDelegate>
{
    DVTObservingToken *_launchSessionsStateObserverToken;
    DVTObservingToken *_launchSessionsConsoleAdaptorsObserverToken;
    DVTObservingToken *_debugSessionHasCrashedObserverToken;
    NSMutableArray *_validatorStack;
    int _currentState;
    id _disallowFinishToken;
    DVTObservingToken *_runOperationCancellationObservationToken;
    DVTObservingToken *_runOperationErrorObservationToken;
    IDEConsoleAdaptor *_adaptor;
    DVTObservingToken *_consoleTerminationToken;
    id _outputNotificationObserver;
    IDEOCUnitTestOutputParser *_outputParser;
    NSString *_savedPartialContent;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1 didCancel:(BOOL)arg2;
- (void)_handleConsoleAdaptorAdded:(id)arg1;
- (void)_handleConsoleOutputAdded:(id)arg1;
- (void)_handleConsoleOutputTerminated:(id)arg1;
- (void)_handleDebugSessionFinishedAbnormally:(id)arg1;
- (void)_handleLaunchSessionStarted;
- (BOOL)_validateEvent:(int)arg1 description:(id)arg2;
@property(retain) IDEConsoleAdaptor *adaptor; // @synthesize adaptor=_adaptor;
@property(retain) DVTObservingToken *consoleTerminationToken; // @synthesize consoleTerminationToken=_consoleTerminationToken;
@property int currentState; // @synthesize currentState=_currentState;
@property(retain) id disallowFinishToken; // @synthesize disallowFinishToken=_disallowFinishToken;
- (BOOL)finished;
- (id)initWithSessionStateDelegate:(id)arg1 andOperation:(id)arg2;
@property(retain) id outputNotificationObserver; // @synthesize outputNotificationObserver=_outputNotificationObserver;
@property(retain) IDEOCUnitTestOutputParser *outputParser; // @synthesize outputParser=_outputParser;
- (void)primitiveInvalidate;
@property(retain) DVTObservingToken *runOperationCancellationObservationToken; // @synthesize runOperationCancellationObservationToken=_runOperationCancellationObservationToken;
@property(retain) DVTObservingToken *runOperationErrorObservationToken; // @synthesize runOperationErrorObservationToken=_runOperationErrorObservationToken;
@property(copy) NSString *savedPartialContent; // @synthesize savedPartialContent=_savedPartialContent;
- (void)testCaseDidFailForTestClass:(id)arg1 method:(id)arg2 withMessage:(id)arg3 file:(id)arg4 line:(long long)arg5 rawOutput:(id)arg6;
- (void)testCaseDidFinishForTestClass:(id)arg1 method:(id)arg2 withStatus:(id)arg3 duration:(double)arg4 rawOutput:(id)arg5;
- (void)testCaseDidMeasurePerformanceMetricForTestClass:(id)arg1 method:(id)arg2 performanceMetric:(id)arg3 rawOutput:(id)arg4;
- (void)testCaseDidProducePerformanceOutput:(id)arg1 rawOutput:(id)arg2;
- (void)testCaseDidStartForTestClass:(id)arg1 method:(id)arg2 rawOutput:(id)arg3;
- (void)testDidOutput:(id)arg1;
- (void)testSuite:(id)arg1 didStartAt:(id)arg2 rawOutput:(id)arg3;
- (void)testSuite:(id)arg1 willFinishAt:(id)arg2 rawOutput:(id)arg3;
- (void)testSuiteDidFinish:(long long)arg1 withFailures:(long long)arg2 unexpected:(long long)arg3 testDuration:(double)arg4 totalDuration:(double)arg5 rawOutput:(id)arg6;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

