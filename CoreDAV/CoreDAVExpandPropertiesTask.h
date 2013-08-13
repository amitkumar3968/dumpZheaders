/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropertyFindBaseTask.h"

@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask {
	NSMutableSet* _propertiesToExpand;
}
@property(retain) NSMutableSet* propertiesToExpand;	// @synthesize=_propertiesToExpand
// declared property setter: -(void)setPropertiesToExpand:(id)expand;
// declared property getter: -(id)propertiesToExpand;
-(void)finishCoreDAVTaskWithError:(id)error;
-(id)parseHints;
-(id)requestBody;
-(id)httpMethod;
-(id)description;
-(void)addPropertyToExpandWithPropertiesToFind:(id)find expandedName:(id)name expandedNameSpace:(id)space;
-(id)initWithPropertiesToFind:(id)find atURL:(id)url expandedName:(id)name expandedNameSpace:(id)space;
-(void)dealloc;
@end

