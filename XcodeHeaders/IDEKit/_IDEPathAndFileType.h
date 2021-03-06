/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTFileDataType, NSString;

@interface _IDEPathAndFileType : NSObject
{
    NSString *_pathString;
    DVTFileDataType *_fileDataType;
}

+ (id)pathAndFileTypeWithFileReference:(id)arg1 fileReferencePath:(id)arg2;
- (void).cxx_destruct;
- (long long)caseInsensitiveCompare:(id)arg1;
- (id)description;
- (id)documentLocation;
@property(readonly) DVTFileDataType *fileDataType; // @synthesize fileDataType=_fileDataType;
- (id)initWithPathString:(id)arg1 fileDataType:(id)arg2;
@property(readonly) NSString *pathString; // @synthesize pathString=_pathString;

@end

