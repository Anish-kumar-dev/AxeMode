/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSPredicate, NSString;

@interface IDEBatchFindFileLocator : NSObject
{
    NSString *_path;
    NSPredicate *_predicate;
}

- (void).cxx_destruct;
- (id)initWithPath:(id)arg1 andPredicate:(id)arg2;
- (id)locationOperationForWorkspace:(id)arg1 withResultsBlock:(id)arg2;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly) BOOL requiresMainThread;

@end

