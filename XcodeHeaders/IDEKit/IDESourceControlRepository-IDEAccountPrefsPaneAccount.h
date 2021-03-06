/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "IDESourceControlRepository.h"

#import "IDEAccountPrefsPaneAccount.h"

@class NSImage, NSString;

@interface IDESourceControlRepository (IDEAccountPrefsPaneAccount) <IDEAccountPrefsPaneAccount>
+ (id)keyPathsForValuesAffectingAccountEnabled;
+ (id)keyPathsForValuesAffectingAccountImage;
+ (id)keyPathsForValuesAffectingAccountReachability;
+ (id)keyPathsForValuesAffectingAccountSubTitle;
+ (id)keyPathsForValuesAffectingAccountTitle;
+ (id)keyPathsForValuesAffectingConnectionError;
@property(readonly, nonatomic) BOOL accountEnabled;
@property(readonly, nonatomic) NSImage *accountImage;
@property(readonly, nonatomic) long long accountReachability;
@property(readonly, nonatomic) NSString *accountSubTitle;
@property(readonly, nonatomic) NSString *accountTitle;
- (id)connectionError;
@end

