/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface CoreDAVXMLElementAttribute : XXUnknownSuperclass {
	NSString* _name;
	NSString* _nameSpace;
	NSString* _value;
}
@property(retain) NSString* value;	// @synthesize=_value
@property(retain) NSString* nameSpace;	// @synthesize=_nameSpace
@property(retain) NSString* name;	// @synthesize=_name
// declared property setter: -(void)setValue:(id)value;
// declared property getter: -(id)value;
// declared property setter: -(void)setNameSpace:(id)space;
// declared property getter: -(id)nameSpace;
// declared property setter: -(void)setName:(id)name;
// declared property getter: -(id)name;
-(id)description;
-(void)dealloc;
-(id)initWithNameSpace:(id)nameSpace name:(id)name value:(id)value;
-(id)init;
@end
