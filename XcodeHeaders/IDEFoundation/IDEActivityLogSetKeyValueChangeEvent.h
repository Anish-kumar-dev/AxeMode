/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDEActivityLogChangeEvent.h>

@class NSString, NSValue;

@interface IDEActivityLogSetKeyValueChangeEvent : IDEActivityLogChangeEvent
{
    NSString *_key;
    NSValue *_value;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithSection:(id)arg1 key:(id)arg2 value:(id)arg3;
@property(readonly) NSString *key; // @synthesize key=_key;
@property(readonly) NSValue *value; // @synthesize value=_value;

@end

