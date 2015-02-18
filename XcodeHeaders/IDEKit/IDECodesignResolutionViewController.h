/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "DVTPagingSheetViewController.h"

@class IDECodesignResolutionWindowController, NSButton, NSProgressIndicator, NSString;

@interface IDECodesignResolutionViewController : IDEViewController <DVTPagingSheetViewController>
{
    IDECodesignResolutionWindowController *_pagingSheetWindowController;
    NSProgressIndicator *_spinner;
    NSButton *_cancelButton;
}

- (void).cxx_destruct;
- (void)cancel:(id)arg1;
@property(retain) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) IDECodesignResolutionWindowController *pagingSheetWindowController; // @synthesize pagingSheetWindowController=_pagingSheetWindowController;
- (void)primitiveInvalidate;
@property(retain) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
- (void)viewDidInstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
