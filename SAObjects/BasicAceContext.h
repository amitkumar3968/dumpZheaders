/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AceContext.h"

@class NSMutableDictionary;

@interface BasicAceContext : XXUnknownSuperclass <AceContext> {
	NSMutableDictionary* _groupMap;
	NSMutableDictionary* _objectMap;
}
-(id)aceObjectWithDictionary:(id)dictionary;
-(Class)classWithClassName:(id)className group:(id)group;
-(void)addClass:(Class)aClass forCommand:(id)command inGroup:(id)group;
-(void)addAcronym:(id)acronym forGroup:(id)group;
-(void)dealloc;
-(id)init;
@end

