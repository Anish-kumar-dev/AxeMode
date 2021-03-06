/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDEDistributionProcessingStep.h>

@class DVTFilePath, NSString;

@interface IDEDistributionCopyFileStep : IDEDistributionProcessingStep
{
    DVTFilePath *_sourcePath;
    NSString *_destinationPath;
}

+ (id)processingStepWithSourcePath:(id)arg1 andRelativeDestinationPath:(id)arg2;
+ (id)processingStepWithSourcePath:(id)arg1 distributionItem:(id)arg2 andRelativeDestinationPath:(id)arg3;
- (void).cxx_destruct;
- (id)name;
- (_Bool)processWithContext:(id)arg1 andError:(id *)arg2;

@end

