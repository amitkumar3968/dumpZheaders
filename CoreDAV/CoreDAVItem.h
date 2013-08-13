/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "NSObject.h"
#import "CoreDAVItem.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSData, NSString, NSMutableSet;

@protocol CoreDAVItem <NSObject>
+(id)parseRuleCache;
+(id)copyParseRules;
-(void)parserSuggestsBaseURL:(id)url;
-(BOOL)validate;
-(void)write:(id)write;
-(id)copyParseRules;
-(void)parserFoundUnrecognizedElement:(id)element;
-(void)parserFoundPayload:(id)payload;
-(void)parserFoundAttributes:(id)attributes;
@end

@interface CoreDAVItem : XXUnknownSuperclass <CoreDAVItem> {
	NSString* _name;
	NSString* _nameSpace;
	NSMutableSet* _attributes;
	NSMutableArray* _extraChildItems;
	NSData* _payload;
	BOOL _useCDATA;
}
@property(assign) BOOL useCDATA;	// @synthesize=_useCDATA
@property(retain) NSData* payload;	// @synthesize=_payload
@property(retain) NSMutableArray* extraChildItems;	// @synthesize=_extraChildItems
@property(retain) NSMutableSet* attributes;	// @synthesize=_attributes
@property(retain) NSString* nameSpace;	// @synthesize=_nameSpace
@property(retain) NSString* name;	// @synthesize=_name
@property(retain) id payloadAsString;	// converted property
+(id)parseRuleCache;
+(id)copyParseRules;
// declared property setter: -(void)setUseCDATA:(BOOL)cdata;
// declared property getter: -(BOOL)useCDATA;
// declared property setter: -(void)setPayload:(id)payload;
// declared property getter: -(id)payload;
// declared property setter: -(void)setExtraChildItems:(id)items;
// declared property getter: -(id)extraChildItems;
// declared property setter: -(void)setAttributes:(id)attributes;
// declared property getter: -(id)attributes;
// declared property setter: -(void)setNameSpace:(id)space;
// declared property getter: -(id)nameSpace;
// declared property setter: -(void)setName:(id)name;
// declared property getter: -(id)name;
-(id)generateXMLString;
-(void)parserSuggestsBaseURL:(id)url;
// converted property setter: -(void)setPayloadAsString:(id)string;
// converted property getter: -(id)payloadAsString;
-(BOOL)validate;
-(void)write:(id)write;
-(id)childrenToWrite;
-(void)parserFoundAttributes:(id)attributes;
-(void)parserFoundPayload:(id)payload;
-(void)parserFoundUnrecognizedElement:(id)element;
-(id)copyParseRules;
-(id)hashString;
-(id)description;
-(void)dealloc;
-(id)initWithNameSpace:(id)nameSpace andName:(id)name;
-(id)init;
@end

