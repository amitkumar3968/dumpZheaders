/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"
#import "BKSXPCCoding.h"
#import "BackBoardServices-Structs.h"

@class NSString, NSDictionary, NSArray;

@interface BKSApplicationLaunchSettings : XXUnknownSuperclass <NSCopying, BKSXPCCoding> {
@private
	NSDictionary* _environment;
	BOOL _waitForDebugger;
	BOOL _disableASLR;
	BOOL _checkForLeaks;
	NSArray* _arguments;
	NSString* _standardOut;
	NSString* _standardError;
}
@property(assign, nonatomic) BOOL checkForLeaks;	// @synthesize=_checkForLeaks
@property(assign, nonatomic) BOOL disableASLR;	// @synthesize=_disableASLR
@property(assign, nonatomic) BOOL waitForDebugger;	// @synthesize=_waitForDebugger
@property(copy, nonatomic) NSString* standardError;	// @synthesize=_standardError
@property(copy, nonatomic) NSString* standardOut;	// @synthesize=_standardOut
@property(retain, nonatomic) NSArray* arguments;	// @synthesize=_arguments
@property(retain, nonatomic) NSDictionary* environment;	// @synthesize=_environment
// declared property setter: -(void)setStandardError:(id)error;
// declared property getter: -(id)standardError;
// declared property setter: -(void)setStandardOut:(id)anOut;
// declared property getter: -(id)standardOut;
// declared property setter: -(void)setArguments:(id)arguments;
// declared property getter: -(id)arguments;
// declared property setter: -(void)setCheckForLeaks:(BOOL)leaks;
// declared property getter: -(BOOL)checkForLeaks;
// declared property setter: -(void)setDisableASLR:(BOOL)aslr;
// declared property getter: -(BOOL)disableASLR;
// declared property setter: -(void)setWaitForDebugger:(BOOL)debugger;
// declared property getter: -(BOOL)waitForDebugger;
// declared property setter: -(void)setEnvironment:(id)environment;
// declared property getter: -(id)environment;
-(void)encodeWithXPCDictionary:(id)xpcdictionary;
-(id)initWithXPCDictionary:(id)xpcdictionary;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(void)dealloc;
-(id)initWithSettings:(id)settings zone:(NSZone*)zone;
@end

