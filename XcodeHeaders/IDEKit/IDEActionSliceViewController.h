/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "IDECapsuleViewController.h"
#import "IDECapsuleViewDelegate.h"

@class IDEExecutionAction, NSImage, NSString;

@interface IDEActionSliceViewController : IDEViewController <IDECapsuleViewController, IDECapsuleViewDelegate>
{
    IDEExecutionAction *_action;
    id <IDEActionSliceViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly) IDEExecutionAction *action; // @synthesize action=_action;
@property BOOL canRemoveItems;
@property(readonly) BOOL canUndisclose;
- (void)capsuleView:(id)arg1 setTitle:(id)arg2;
- (BOOL)capsuleViewCanBeRemoved:(id)arg1;
- (BOOL)capsuleViewCanBeRenamed:(id)arg1;
- (void)capsuleViewDidClickRemoveButton:(id)arg1;
- (id)capsuleViewTitleForEditing:(id)arg1;
@property(retain) id <IDEActionSliceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithAction:(id)arg1;
@property(readonly, copy) NSString *titleForDisplay;

// Remaining properties
@property BOOL canAddItems;
@property(readonly) BOOL canDrag;
@property(readonly) BOOL canRemove;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canSelect;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL disclosedByDefault;
@property(readonly, copy) NSString *footerLabel;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *icon;
@property(readonly) Class superclass;

@end

