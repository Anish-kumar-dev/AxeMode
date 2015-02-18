/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSImage, NSString;

@protocol IDEKeyDrivenNavigableItemRepresentedObject <NSObject>
@property(readonly) NSString *navigableItem_name;

@optional
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
- (id)navigableItem_contentDocumentLocationInDocumentURL:(id)arg1;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) NSString *navigableItem_toolTip;
@end
