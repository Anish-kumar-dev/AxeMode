/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDEContainerCore.h>

#import "IDEXMLPackageContainerCore.h"

@class DVTStackBacktrace, NSString;

@interface IDEXMLPackageContainerCore : IDEContainerCore <IDEXMLPackageContainerCore>
{
}

- (id)initWithContentsOfFile:(id)arg1 error:(id *)arg2;
- (BOOL)writeToFile:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
