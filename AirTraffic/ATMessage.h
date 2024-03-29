/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <Foundation/NSNetService.h>

@class NSData, NSDictionary, NSString;

@interface ATMessage : NSNetService {
	unsigned _session;
	NSString* _name;
	NSDictionary* _params;
	NSData* _sig;
}
@property(readonly, assign, nonatomic) unsigned sessionNumber;	// @synthesize=_session
@property(retain, nonatomic) NSData* sig;	// @synthesize=_sig
@property(retain, nonatomic) NSDictionary* parameters;	// @synthesize=_params
@property(retain, nonatomic) NSString* name;	// @synthesize=_name
+(id)messageWithName:(id)name parameters:(id)parameters session:(unsigned)session;
+(id)messageWithName:(id)name parameters:(id)parameters;
+(id)messageFromData:(id)data;
+(id)messageFromDictionary:(id)dictionary;
+(void)setSessionNumber:(unsigned)number;
+(unsigned)currentSessionNumber;
+(unsigned)nextSessionNumber;
// declared property setter: -(void)setSig:(id)sig;
// declared property getter: -(id)sig;
// declared property getter: -(unsigned)sessionNumber;
// declared property setter: -(void)setParameters:(id)parameters;
// declared property getter: -(id)parameters;
// declared property setter: -(void)setName:(id)name;
// declared property getter: -(id)name;
-(id)description;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary;
-(id)data;
-(id)dictionary;
-(id)parameterForKey:(id)key;
@end

