/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTHashTable, DVTStackBacktrace, IDEPathCell, NSSet, NSString;

@interface IDEPathCellNavigableItemObserver : NSObject <DVTInvalidation>
{
    IDEPathCell *_owner;
    DVTHashTable *_observedItems;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)initWithOwner:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly) NSSet *observedItems;
- (void)primitiveInvalidate;
- (void)setupObservingForItems:(id)arg1;
- (void)tearDownObservingForItems:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

