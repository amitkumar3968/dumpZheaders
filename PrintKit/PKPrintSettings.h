/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, PKPaper;

@interface PKPrintSettings : XXUnknownSuperclass {
@private
	NSMutableDictionary* _dict;
	PKPaper* paper;
}
@property(retain, nonatomic) NSMutableDictionary* dict;	// @synthesize=_dict
@property(retain, nonatomic) PKPaper* paper;	// @synthesize
+(id)printSettingsForPrinter:(id)printer;
+(id)photo;
+(id)default;
// declared property setter: -(void)setPaper:(id)paper;
// declared property getter: -(id)paper;
// declared property setter: -(void)setDict:(id)dict;
// declared property getter: -(id)dict;
-(id)objectForKey:(id)key;
-(void)removeObjectForKey:(id)key;
-(void)setObject:(id)object forKey:(id)key;
-(id)settingsDict;
-(id)init;
-(void)dealloc;
@end
