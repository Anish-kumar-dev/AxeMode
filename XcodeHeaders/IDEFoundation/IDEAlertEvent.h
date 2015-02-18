/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface IDEAlertEvent : NSObject
{
    NSString *_identifier;
    NSString *_title;
    NSString *_titleSortKey;
    NSString *_group;
    NSString *_groupSortKey;
    NSString *_iconName;
    NSMutableDictionary *_alerts;
    NSMutableDictionary *_observationTokensByAlert;
    BOOL _showInPreferences;
}

+ (void)_cacheAlertEvents;
+ (void)_registerAlertEventExtension:(id)arg1;
+ (id)alertEventForIdentifier:(id)arg1;
+ (id)alertEventGroups;
+ (id)alertEvents;
+ (id)alertEventsForGroup:(id)arg1;
- (void).cxx_destruct;
- (void)addAlert:(id)arg1;
- (id)alertDefaults;
- (id)alertDefaultsKey;
@property(readonly) NSDictionary *alerts; // @synthesize alerts=_alerts;
- (id)description;
@property(retain) NSString *group; // @synthesize group=_group;
@property(retain, nonatomic) NSString *groupSortKey; // @synthesize groupSortKey=_groupSortKey;
- (BOOL)hasEnabledAlerts;
@property(retain) NSString *iconName; // @synthesize iconName=_iconName;
- (id)ide_initializeAlertContext:(id)arg1 forWorkspace:(id)arg2;
- (void)ide_initializeAlertsFromDefaults:(id)arg1;
- (void)ide_setIdentifier:(id)arg1;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 group:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)propertyList;
- (id)propertyListForVersion:(int)arg1;
- (void)removeAlert:(id)arg1;
- (void)runInWorkspace:(id)arg1 context:(id)arg2;
- (void)runInWorkspace:(id)arg1 context:(id)arg2 completionBlock:(id)arg3;
- (void)saveToUserDefaults;
@property BOOL showInPreferences; // @synthesize showInPreferences=_showInPreferences;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *titleSortKey; // @synthesize titleSortKey=_titleSortKey;

@end
