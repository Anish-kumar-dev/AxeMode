/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEInspectorStringProperty.h>

@class IDEInspectorKeyPath, NSString, NSTextField;

@interface IDEInspectorBasicStringProperty : IDEInspectorStringProperty
{
    NSString *_explicitPlaceholder;
    IDEInspectorKeyPath *_explicitPlaceholderKeyPath;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_enabledKeyPath;
    IDEInspectorKeyPath *_editableKeyPath;
    BOOL _allowsNilValues;
    BOOL _editable;
    BOOL _textFieldIsConfiguredAsEditable;
    NSTextField *_textField;
}

- (void).cxx_destruct;
- (double)baseline;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)refresh;
@property(retain, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
- (void)setupRefreshTriggersAndConfigure;
- (void)userDidChangeValue:(id)arg1;
- (id)view;

@end
