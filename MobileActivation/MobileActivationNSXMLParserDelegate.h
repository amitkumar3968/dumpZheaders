/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
 */

#import <Foundation/NSObject.h>
#import "NSXMLParserDelegate.h"

@class NSMutableString, NSMutableDictionary;

@interface MobileActivationNSXMLParserDelegate : NSObject <NSXMLParserDelegate> {
	int _state;
	bool _renderHTML;
	NSMutableString* _currentPlist;
	NSMutableDictionary* _activationTicket;
}
-(void)parser:(id)parser foundCharacters:(id)characters;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
-(void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
-(void)appendClosingTagForElementName:(id)elementName;
-(void)appendOpeningTagForElementName:(id)elementName andAttributes:(id)attributes;
-(id)flattenedDictString:(id)string;
-(id)activationTicket:(id*)ticket andRenderHTML:(bool*)html;
-(id)activationTicket:(id*)ticket;
-(void)dealloc;
-(id)init;
-(id)stringForState:(int)state;
@end

