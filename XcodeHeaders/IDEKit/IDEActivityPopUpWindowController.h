/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IDEActivityPopUpContentView, IDEActivityView, IDEWorkspaceDocument, NSArray, NSString;

@interface IDEActivityPopUpWindowController : NSWindowController <DVTInvalidation>
{
    NSArray *_notificationsToClosePopUpTokens;
    IDEActivityPopUpContentView *_contentView;
    IDEWorkspaceDocument *_workspaceDocument;
    IDEActivityView *_activityView;
    double _targetHeight;
    id _localEventHandler;
    BOOL _isClosed;
    BOOL _isOpen;
    double _spaceNeededForMultiActionIndicator;
}

+ (id)activityPopUpWindowForActivityView:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) IDEActivityView *activityView; // @synthesize activityView=_activityView;
- (struct CGRect)activityViewScreenRect;
- (void)animateOpen;
- (void)animateToHeight:(double)arg1;
- (void)closeAndAnimate:(BOOL)arg1;
- (id)initWithActivityView:(id)arg1 initialDataSource:(id)arg2;
- (struct CGRect)popUpScreenRectUnderActivityViewTakingIntoAccountContentInset;
- (void)primitiveInvalidate;
@property(nonatomic) double spaceNeededForMultiActionIndicator; // @synthesize spaceNeededForMultiActionIndicator=_spaceNeededForMultiActionIndicator;
- (void)startMonitoringForEventsToClosePopUp;
- (void)stopMonitoringForEventsToClosePopUp;
@property(readonly) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
- (id)workspaceTabControllerForNavigation;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
