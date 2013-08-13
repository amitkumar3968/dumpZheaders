/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSSet, NSDictionary, NSMutableSet, CoreDAVLeafItem;

@interface CoreDAVBulkRequestsItem : CoreDAVItem {
	CoreDAVLeafItem* _maxResourcesItem;
	CoreDAVLeafItem* _maxSizeItem;
	NSMutableSet* _supportedItems;
}
@property(readonly, assign) BOOL supportsDelete;
@property(readonly, assign) BOOL supportsUpdate;
@property(readonly, assign) BOOL supportsInsert;
@property(readonly, assign) int maxSize;
@property(readonly, assign) int maxResources;
@property(readonly, assign) NSSet* supportedItems;	// @synthesize=_supportedItems
@property(retain) CoreDAVLeafItem* maxSizeItem;	// @synthesize=_maxSizeItem
@property(retain) CoreDAVLeafItem* maxResourcesItem;	// @synthesize=_maxResourcesItem
@property(readonly, assign) NSDictionary* dictRepresentation;
+(id)copyParseRules;
// declared property getter: -(id)supportedItems;
// declared property setter: -(void)setMaxSizeItem:(id)item;
// declared property getter: -(id)maxSizeItem;
// declared property setter: -(void)setMaxResourcesItem:(id)item;
// declared property getter: -(id)maxResourcesItem;
// declared property getter: -(BOOL)supportsDelete;
// declared property getter: -(BOOL)supportsUpdate;
// declared property getter: -(BOOL)supportsInsert;
-(BOOL)supportsItemWithNameSpace:(id)nameSpace name:(id)name;
// declared property getter: -(int)maxSize;
// declared property getter: -(int)maxResources;
// declared property getter: -(id)dictRepresentation;
-(void)addSupportedItem:(id)item;
-(id)description;
-(void)dealloc;
-(id)init;
@end

