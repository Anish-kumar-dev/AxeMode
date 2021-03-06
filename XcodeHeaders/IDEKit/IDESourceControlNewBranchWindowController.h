/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSWindowController.h"

@class NSButton, NSString, NSTextField;

@interface IDESourceControlNewBranchWindowController : NSWindowController
{
    NSButton *_chooseButton;
    NSTextField *_messageTextField;
    NSTextField *_informationTextField;
    NSTextField *_newBranchNameTextField;
    NSString *_userNewBranchName;
}

+ (id)keyPathsForValuesAffectingCanContinue;
- (void).cxx_destruct;
@property(readonly) BOOL canContinue;
- (void)cancel:(id)arg1;
- (void)choose:(id)arg1;
@property(retain) NSString *userNewBranchName; // @synthesize userNewBranchName=_userNewBranchName;
- (id)windowNibName;

@end

