/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDEScriptingElement.h>

@interface IDEScriptingWrapper : IDEScriptingElement
{
    id _client;
}

+ (id)wrapItem:(id)arg1 inWrapper:(Class)arg2 forContainer:(id)arg3 andAccessor:(id)arg4;
+ (id)wrapItems:(id)arg1 inWrapper:(Class)arg2 forContainer:(id)arg3 andAccessor:(id)arg4;
+ (id)wrapSingleton:(id)arg1 inWrapper:(Class)arg2 forContainer:(id)arg3 andAccessor:(id)arg4;
- (void).cxx_destruct;
@property(retain) id client; // @synthesize client=_client;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)objectSpecifier;
- (id)scriptingID;

@end

