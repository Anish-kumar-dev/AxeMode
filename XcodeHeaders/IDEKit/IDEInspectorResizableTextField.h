/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTLayoutView_ML.h"

@class NSTextField;

@interface IDEInspectorResizableTextField : DVTLayoutView_ML
{
    NSTextField *_textField;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)dealloc;
- (void)layoutBottomUp;
- (void)layoutTopDown;
@property(retain, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
- (void)textFieldTextDidChange:(id)arg1;

@end
