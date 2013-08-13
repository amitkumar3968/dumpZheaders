/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSString, CoreDAVLeafItem;

@interface CoreDAVPropertySearchItem : CoreDAVItem {
	CoreDAVLeafItem* _prop;
	NSString* _match;
	NSString* _matchTypeAttribute;
}
@property(retain) NSString* matchTypeAttribute;	// @synthesize=_matchTypeAttribute
@property(retain) NSString* match;	// @synthesize=_match
@property(retain) CoreDAVLeafItem* prop;	// @synthesize=_prop
// declared property setter: -(void)setMatchTypeAttribute:(id)attribute;
// declared property getter: -(id)matchTypeAttribute;
// declared property setter: -(void)setMatch:(id)match;
// declared property getter: -(id)match;
// declared property setter: -(void)setProp:(id)prop;
// declared property getter: -(id)prop;
-(void)write:(id)write;
-(id)description;
-(void)dealloc;
-(id)initWithSearchPropertyNameSpace:(id)searchPropertyNameSpace andName:(id)name;
-(id)init;
@end
