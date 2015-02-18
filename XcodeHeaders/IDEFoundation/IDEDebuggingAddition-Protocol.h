/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTInvalidation.h"
#import "NSObject.h"

@class IDELaunchSession, NSString;

@protocol IDEDebuggingAddition <NSObject, DVTInvalidation>
@property(readonly) NSString *identifier;
- (id)initInLaunchSession:(id)arg1 withAppDisplayName:(id)arg2 runDestination:(id)arg3 fromExtension:(id)arg4;
@property(readonly, nonatomic) IDELaunchSession *launchSession;

@optional
+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
- (id)adjustedLaunchParametersForLaunchParameters:(id)arg1;
- (void)processFinalLaunchParameters:(id)arg1;
@end
