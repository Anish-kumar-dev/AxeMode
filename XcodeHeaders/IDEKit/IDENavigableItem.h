/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, IDEFileReference, IDENavigableItemCoordinator, NSArray, NSColor, NSImage, NSPredicate, NSString;

@interface IDENavigableItem : NSObject <DVTInvalidation>
{
    id _observationInfo;
    IDENavigableItemCoordinator *_coordinator;
    id _representedObject;
    IDENavigableItem *_parentItem;
    id _childItems;
    id _arrangedChildItems;
    NSPredicate *_filterPredicate;
    NSArray *_sortDescriptors;
    struct {
        unsigned int _childItemsNeedsUpdate:1;
        unsigned int _invalidatingChildItems:1;
        unsigned int _debug_8061745_shouldCaptureInvalidationBacktrace:1;
        unsigned int _observersRegisteredWithOldOrPriorOption:1;
        unsigned int _reserved:28;
    } _ideniFlags;
}

+ (id)_createExtraInfoObject;
+ (void)_customizeNewNavigableItemClass:(Class)arg1 forModelObjectClass:(Class)arg2 extension:(id)arg3;
+ (id)_dynamicSubclass_navigableItemExtraInfo;
+ (id)_navigableItemExtraInfo;
+ (id)_navigableItemWithRepresentedObject:(id)arg1 parent:(id)arg2 inCoordinator:(id)arg3;
+ (id)allNavigableItemExtensions;
+ (BOOL)automaticallyNotifiesObserversOfArrangedChildItems;
+ (BOOL)automaticallyNotifiesObserversOfParentItem;
+ (BOOL)automaticallyNotifiesObserversOfRepresentedObject;
+ (id)classInfoByModelObjectClass;
+ (id)description;
+ (void)initialize;
+ (Class)navigableItemClassForModelObject:(id)arg1;
+ (id)navigableItemWithRepresentedObject:(id)arg1;
+ (id)navigableItemWithRepresentedObject:(id)arg1 coordinator:(id)arg2;
+ (Class)registerInfoForClass:(Class)arg1 withExtension:(id)arg2;
+ (id)representedExtension;
- (void).cxx_destruct;
- (BOOL)_checkInvalidItemsAndFillRootDict:(id)arg1 forItem:(id)arg2 errorOnInvalidItems:(BOOL)arg3 error:(id *)arg4;
- (id)_childItems;
- (id)_childRepresentedObjects;
- (unsigned long long)_currentNumberOfArrangedChildItems;
- (void)_documentDidClose;
- (void)_enableInvalidationBacktraceCapturing;
- (void)_fillItems:(id)arg1 fromNameDictionary:(id)arg2 withParent:(id)arg3 andChildren:(id)arg4;
- (id)_fillRootDict:(id)arg1 withItem:(id)arg2 isTerminus:(BOOL)arg3;
- (void)_invalidateArrangedChildItems;
- (BOOL)_isWrappingDocumentFileReference;
- (id)_legacyItemsForNameArrays:(id)arg1;
- (id)_navigableItemWithName:(id)arg1 inArray:(id)arg2;
- (id)_reallyPrivateChildItems;
- (void)_registerInNavigableItemByRepresentedObjectMap;
- (void)_removeFromNavigableItemByRepresentedObjectMap;
- (void)_resetChildItems;
- (void)_setArrangedChildItems:(id)arg1;
- (void)_setCoordinator:(id)arg1;
- (void)_setParentItem:(id)arg1;
- (void)_setRepresentedObject:(id)arg1;
- (BOOL)_shouldResetChildItemsOnDocumentClose;
- (void)_updateMutableChildItems:(id)arg1 forChangeKind:(unsigned long long)arg2 atIndexes:(id)arg3;
- (void)_validateChildItems;
- (void)_willAccessChildItems;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)archivableRepresentation;
- (id)arrangeItems:(id)arg1;
@property(readonly) NSArray *arrangedChildItems;
- (void)cacheValue:(id)arg1 forProperty:(id)arg2;
- (id)cachedValueForProperty:(id)arg1;
- (unsigned long long)changeCount;
@property(readonly) NSArray *childItems;
- (id)childItemsToSearchForFindingDescendant:(id)arg1;
- (id)childNavigableItemsAtIndexes:(id)arg1;
- (id)childRepresentedObjects;
@property(readonly) DVTDocumentLocation *contentDocumentLocation;
- (id)contextualValueForProperty:(id)arg1;
- (id)coordinator;
- (BOOL)coordinatorFilteringShouldFilterChildItems;
- (unsigned long long)countOfChildNavigableItems;
- (id)descendantItemForRepresentedObject:(id)arg1;
- (id)descendantItemForRepresentedObject:(id)arg1 stopAtClass:(Class)arg2;
@property(readonly, copy) NSString *description;
- (void)didChangeArrangedChildItems;
- (void)disposeInvalidatedChildItems;
@property(readonly) DVTFileDataType *documentType;
@property(readonly) IDEFileReference *fileReference;
- (id)filterItems:(id)arg1;
@property(copy) NSPredicate *filterPredicate;
- (void)getChildNavigableItems:(id *)arg1 range:(struct _NSRange)arg2;
- (id)greatestDocumentAncestor;
@property(readonly) NSString *groupIdentifier;
- (id)identifierForChildItem:(id)arg1;
- (unsigned long long)indexOfChildItemForIdentifier:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1;
- (void)invalidateChildItems;
@property(readonly) BOOL isDocumentNavigableItem;
@property(readonly, getter=isLeaf) BOOL leaf;
@property(readonly, getter=isMajorGroup) BOOL majorGroup;
@property(readonly) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_coordinator;
- (unsigned long long)navigableItem_conflictStateForUpdateOrMerge;
- (id)navigableItemsForPersistentNameTree:(id)arg1;
- (id)nearestDocumentFileReferenceProvidingAncestor;
- (id)objectInChildNavigableItemsAtIndex:(unsigned long long)arg1;
- (id)observationInfo;
@property(readonly) IDENavigableItem *parentItem; // @synthesize parentItem=_parentItem;
- (id)persistentNameTreeForNavigableItems:(id)arg1 error:(id *)arg2;
- (id)persistentNameTreeForNavigableItems:(id)arg1 errorOnInvalidItems:(BOOL)arg2 error:(id *)arg3;
- (id)persistentNameTreeForNavigableItemsIgnoringInvalid:(id)arg1;
- (void)primitiveInvalidate;
- (id)refreshChildItemsAndReturnItemsToDispose;
@property(readonly) id representedObject; // @synthesize representedObject=_representedObject;
- (void)setName:(id)arg1;
- (void)setObservationInfo:(id)arg1;
@property(copy) NSArray *sortDescriptors;
- (id)sortItems:(id)arg1;
- (id)sourceControlCurrentRevision;
- (id)sourceControlLastModifiedDate;
- (id)sourceControlLocalStatus;
- (int)sourceControlLocalStatusFlag;
- (id)sourceControlServerStatus;
- (int)sourceControlServerStatusFlag;
@property(readonly) NSColor *textColor;
@property(readonly) NSString *toolTip;
- (void)updateChildItemsForChangeKind:(unsigned long long)arg1 atIndexes:(id)arg2;
- (void)willAccessChildItems;
- (void)willChangeArrangedChildItems;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *image; // @dynamic image;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSString *name; // @dynamic name;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

