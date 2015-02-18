/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIAInstrumentAuthorizedAPI.h"

@class DTXChannel, DVTDevice, IDELaunchSession, NSString;

@interface IDEUIATestScriptAgentCommunicator : NSObject <UIAInstrumentAuthorizedAPI>
{
    DTXChannel *_deviceChannel;
    BOOL _isAgentReady;
    BOOL _shouldRunAsInternal;
    IDELaunchSession *_appLaunchSession;
    NSString *_testManagerSessionUUID;
    DVTDevice *_targetDevice;
    NSString *_targetBundleID;
    NSString *_agentReadableStatus;
    unsigned long long _agentStatus;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_handleDataMessage:(id)arg1;
- (void)_mainThreadAddSample:(id)arg1;
- (void)_stopAndReportExceptionOnMainThread:(id)arg1;
- (void)_stopPlayingWithException:(id)arg1 causeTrackError:(BOOL)arg2;
- (void)_stopTestingWithReason:(int)arg1;
- (void)_updateBundleStatusOnMainThread:(id)arg1;
- (void)_updateScriptStatusOnMainThread:(id)arg1;
- (void)agentIsGone:(id)arg1;
- (void)agentIsReady;
@property(retain) NSString *agentReadableStatus; // @synthesize agentReadableStatus=_agentReadableStatus;
@property unsigned long long agentStatus; // @synthesize agentStatus=_agentStatus;
@property(retain) IDELaunchSession *appLaunchSession; // @synthesize appLaunchSession=_appLaunchSession;
- (id)deviceChannel;
- (id)init;
- (id)initWithDevice:(id)arg1 andAppTargetBundleID:(id)arg2;
@property BOOL isAgentReady; // @synthesize isAgentReady=_isAgentReady;
- (void)notifyMonitoredPidIsDead:(id)arg1;
- (id)performTaskOnHost:(id)arg1 withArguments:(id)arg2 timeout:(id)arg3;
- (void)readyScriptAgentForAppWithPID:(id)arg1;
- (void)runTestBundleAtPath:(id)arg1 withRunDictionary:(id)arg2 andArgumentsDictionary:(id)arg3;
- (void)scriptDidThrowException:(id)arg1;
@property BOOL shouldRunAsInternal; // @synthesize shouldRunAsInternal=_shouldRunAsInternal;
@property(retain) NSString *targetBundleID; // @synthesize targetBundleID=_targetBundleID;
@property(retain) DVTDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(retain) NSString *testManagerSessionUUID; // @synthesize testManagerSessionUUID=_testManagerSessionUUID;
- (void)stopPlayingWithException:(id)arg1;
- (void)updateBundleStatus:(id)arg1;
- (void)updateScriptStatus:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
