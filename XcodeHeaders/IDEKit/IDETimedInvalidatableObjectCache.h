/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTObservingToken, NSTimer;

@interface IDETimedInvalidatableObjectCache : NSObject
{
    long long _pins;
    NSTimer *_timer;
    double _delay;
    id <DVTInvalidation> _invalidatable;
    DVTObservingToken *_immediateInvalidationTriggerToken;
}

- (void).cxx_destruct;
- (id)initWithInvalidatedObject:(id)arg1 skippingDelayOnceObjectBecomesInvalid:(id)arg2 delay:(double)arg3;
- (void)invalidationTimeExpired:(id)arg1;
- (void)pin;
- (void)unpin;

@end
