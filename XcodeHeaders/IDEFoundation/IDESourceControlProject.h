/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTCustomDataSpecifier, IDESourceControlWorkingCopyConfiguration, NSArray, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSURL;

@interface IDESourceControlProject : NSObject
{
    NSMutableArray *_workingCopyConfigurations;
    unsigned long long _wccHash;
    BOOL _favorite;
    NSString *_name;
    NSString *_uniqueIdentifier;
    NSURL *_projectURL;
    NSString *_relativePathToProject;
    IDESourceControlWorkingCopyConfiguration *_projectWCC;
    unsigned long long _type;
    NSMutableArray *_configurationsInCurrentWorkspace;
    DVTCustomDataSpecifier *_customDataSpecifier;
    NSMutableDictionary *_originForConfigurationDictionary;
    NSMutableDictionary *_relativeInstallPathForConfigurationDictionary;
    NSMutableDictionary *_repositoryRootForConfigurationDictionary;
    NSMutableDictionary *_requiredConfigurationsDictionary;
}

- (void).cxx_destruct;
- (void)_setupProjectInfoForNewWorkingTree:(id)arg1 withWorkspace:(id)arg2;
- (void)_sortConfigurations;
- (id)_workingCopyConfigurationForRepositoryOrigin:(id)arg1 withWorkingCopyConfigurations:(id)arg2;
- (void)addWorkingCopyConfiguration:(id)arg1;
- (id)bestMatchForConfiguration:(id)arg1 ofProject:(id)arg2 inOtherProject:(id)arg3;
- (id)checkoutURLForConfiguration:(id)arg1;
@property(retain) NSMutableArray *configurationsInCurrentWorkspace; // @synthesize configurationsInCurrentWorkspace=_configurationsInCurrentWorkspace;
@property(retain) DVTCustomDataSpecifier *customDataSpecifier; // @synthesize customDataSpecifier=_customDataSpecifier;
- (id)dictionaryRepresentation;
@property(readonly) NSString *displayURL;
- (void)getRepositoryForConfiguration:(id)arg1 sourceControlManager:(id)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1 sourceControlManager:(id)arg2;
- (id)initWithWorkspace:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(getter=isFavorite) BOOL favorite; // @synthesize favorite=_favorite;
- (void)mergeWithProject:(id)arg1;
- (id)missingConfigurationsForWorkspace:(id)arg1;
@property(copy) NSString *name; // @synthesize name=_name;
- (id)originForConfiguration:(id)arg1;
@property(retain) NSMutableDictionary *originForConfigurationDictionary; // @synthesize originForConfigurationDictionary=_originForConfigurationDictionary;
@property(copy) NSURL *projectURL; // @synthesize projectURL=_projectURL;
@property(retain) IDESourceControlWorkingCopyConfiguration *projectWCC; // @synthesize projectWCC=_projectWCC;
- (BOOL)readFromBundleOfWorkspace:(id)arg1 error:(id *)arg2;
- (BOOL)readFromDictionary:(id)arg1 sourceControlManager:(id)arg2 error:(id *)arg3;
- (BOOL)readFromFilePath:(id)arg1 error:(id *)arg2;
- (id)relativeInstallPathForConfiguration:(id)arg1;
@property(retain) NSMutableDictionary *relativeInstallPathForConfigurationDictionary; // @synthesize relativeInstallPathForConfigurationDictionary=_relativeInstallPathForConfigurationDictionary;
@property(copy) NSString *relativePathToProject; // @synthesize relativePathToProject=_relativePathToProject;
@property(readonly) NSSet *relativeWorkingCopyPaths;
- (void)removeFromBundleOfWorkspace:(id)arg1 withCompletionBlock:(id)arg2;
- (void)removeWorkingCopyConfiguration:(id)arg1;
- (id)repositoryRootForConfiguration:(id)arg1;
@property(retain) NSMutableDictionary *repositoryRootForConfigurationDictionary; // @synthesize repositoryRootForConfigurationDictionary=_repositoryRootForConfigurationDictionary;
@property(retain) NSMutableDictionary *requiredConfigurationsDictionary; // @synthesize requiredConfigurationsDictionary=_requiredConfigurationsDictionary;
- (void)setOrigin:(id)arg1 forConfiguration:(id)arg2;
- (void)setRelativeInstallPath:(id)arg1 forConfiguration:(id)arg2;
- (void)setState:(unsigned long long)arg1 forWorkingCopyConfigurationStateDictionary:(id)arg2;
- (void)setState:(unsigned long long)arg1 forWorkingTree:(id)arg2 withWorkspace:(id)arg3;
@property unsigned long long type; // @synthesize type=_type;
@property(retain) NSArray *workingCopyConfigurations; // @synthesize workingCopyConfigurations=_workingCopyConfigurations;
- (id)stateDictionaryForWorkingCopyConfiguration:(id)arg1;
- (unsigned long long)stateForWorkingCopyConfiguration:(id)arg1;
- (unsigned long long)stateForWorkingTree:(id)arg1;
@property(readonly) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)workingCopyConfigurationForRepositoryOrigin:(id)arg1;
- (void)writeToBundleOfWorkspace:(id)arg1 completionBlock:(id)arg2;
- (void)writeToFilePath:(id)arg1 completionBlock:(id)arg2;

@end
