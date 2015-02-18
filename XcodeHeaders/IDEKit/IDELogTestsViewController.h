/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "DVTReplacementViewDelegate.h"
#import "IDESharedTests_RootObject.h"

@class DVTBorderedView, DVTChoice, DVTObservingToken, DVTReplacementView, DVTTabChooserView, IDEEditorDocument, IDELogAndTestsEditor, IDESchemeActionRunDestinationRecord, NSArray, NSMutableSet, NSString;

@interface IDELogTestsViewController : IDEViewController <DVTReplacementViewDelegate, IDESharedTests_RootObject>
{
    NSMutableSet *_passingTestGroups;
    NSMutableSet *_failingTestGroups;
    NSMutableSet *_performanceMetrics;
    NSArray *_performanceMetricsForDisplay;
    NSArray *_allTests;
    NSArray *_failingTests;
    NSArray *_passingTests;
    IDESchemeActionRunDestinationRecord *_runDestinationRecord;
    id <DVTCancellable> _buildLogObserver;
    DVTChoice *_testsChoice;
    IDEEditorDocument *_document;
    IDELogAndTestsEditor *_hostEditor;
    NSArray *_currentSelectedItems;
    NSArray *_currentSelectedDocumentLocations;
    DVTBorderedView *_borderedView;
    DVTTabChooserView *_tabChooserView;
    DVTReplacementView *_replacementView;
    DVTObservingToken *_choiceUpdateToken;
}

- (void).cxx_destruct;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) DVTObservingToken *choiceUpdateToken; // @synthesize choiceUpdateToken=_choiceUpdateToken;
@property(readonly, copy, nonatomic) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
@property(readonly, copy, nonatomic) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(retain, nonatomic) IDEEditorDocument *document; // @synthesize document=_document;
@property __weak IDELogAndTestsEditor *hostEditor; // @synthesize hostEditor=_hostEditor;
- (id)ide_sharedTests_includeGroupsWithPassedTests:(BOOL)arg1 includeFailingTests:(BOOL)arg2 includeOnlyPerfTests:(BOOL)arg3;
@property(readonly, copy, nonatomic) NSArray *ide_sharedTests_perfMetricNames;
- (void)loadView;
- (id)logEditor;
- (void)primitiveInvalidate;
- (void)processTestSummary:(id)arg1 logTestsViewTestGroup:(id)arg2;
- (void)processTestSummaryGroup:(id)arg1 parentGroup:(id)arg2;
- (void)processTestableSummary:(id)arg1 logTestsViewTestGroup:(id)arg2 parentGroup:(id)arg3;
- (void)refreshTestableDataFromDocument;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
@property __weak DVTTabChooserView *tabChooserView; // @synthesize tabChooserView=_tabChooserView;
- (id)sharedTestsViewController;
- (void)showLogEditor;
- (void)showTestForClassName:(id)arg1 methodName:(id)arg2;
- (id)testGroupsIncludePassingTests:(BOOL)arg1 includeFailingTests:(BOOL)arg2 includeOnlyPerfTests:(BOOL)arg3;
- (void)viewWillUninstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
