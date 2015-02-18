/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEKit/IDEKeyDrivenNavigableItem.h>

@class IDESourceControlTreeItem, NSError, NSMutableArray;

@interface IDESourceControlBranchNavigableItem : IDEKeyDrivenNavigableItem
{
    NSMutableArray *_computedChildItems;
    IDESourceControlTreeItem *_treeItem;
    NSError *_error;
}

- (void).cxx_destruct;
- (void)_childRepresentedObjectsFromStartingRevision:(id)arg1 completionBlock:(id)arg2;
- (id)childRepresentedObjects;
- (void)idesc_setChildRepresentedObjects:(id)arg1;
- (BOOL)isLeaf;
- (void)primitiveInvalidate;
@property(retain) IDESourceControlTreeItem *treeItem; // @synthesize treeItem=_treeItem;

@end
