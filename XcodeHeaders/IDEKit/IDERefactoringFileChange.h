/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IDERefactoringFileChangeLocation, IDERefactoringFileChangeSet;

@interface IDERefactoringFileChange : NSObject
{
    IDERefactoringFileChangeSet *_fileChangeSet;
    IDERefactoringFileChangeLocation *_fileLocation;
    BOOL _shouldBeApplied;
}

- (void).cxx_destruct;
- (BOOL)applyChange;
@property(readonly) __weak IDERefactoringFileChangeSet *fileChangeSet; // @synthesize fileChangeSet=_fileChangeSet;
@property(readonly) IDERefactoringFileChangeLocation *fileLocation; // @synthesize fileLocation=_fileLocation;
- (id)initWithFileChangeSet:(id)arg1 fileLocation:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToFileChange:(id)arg1;
@property BOOL shouldBeApplied; // @synthesize shouldBeApplied=_shouldBeApplied;

@end
