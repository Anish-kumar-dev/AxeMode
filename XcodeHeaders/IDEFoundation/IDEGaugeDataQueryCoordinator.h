/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTDevice, NSCountedSet, NSMutableOrderedSet, NSNumber;

@interface IDEGaugeDataQueryCoordinator : NSObject
{
    DVTDevice *_device;
    NSNumber *_pid;
    NSMutableOrderedSet *_queries;
    NSMutableOrderedSet *_services;
    NSCountedSet *_attributes;
}

+ (id)sharedQueryCoordinatorWithPID:(id)arg1 onDevice:(id)arg2;
- (void).cxx_destruct;
- (void)addQuery:(id)arg1;
@property(retain, nonatomic) NSCountedSet *attributes; // @synthesize attributes=_attributes;
@property(retain) DVTDevice *device; // @synthesize device=_device;
- (void)handleResultDict:(id)arg1;
- (id)initForProcessWithPID:(id)arg1 onDevice:(id)arg2;
- (void)noteAttributesDidChange;
@property(retain) NSNumber *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSMutableOrderedSet *queries; // @synthesize queries=_queries;
- (void)query:(id)arg1 didAddObservedAttributes:(id)arg2 andRemoveObservedAttributes:(id)arg3;
- (void)removeQuery:(id)arg1;
@property(retain, nonatomic) NSMutableOrderedSet *services; // @synthesize services=_services;

@end
